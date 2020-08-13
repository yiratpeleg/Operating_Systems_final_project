//
// Created by yirat on 29.7.2020.
//

#define _GNU_SOURCE
#include <sched.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/syscall.h>

////This structure is designed for the sched_setattr function
struct sched_attr {
    uint32_t size;              // Size of this structure //
    uint32_t sched_policy;      // Policy (SCHED_*) //
    uint64_t sched_flags;       // Flags //
    int32_t sched_nice;         // Nice value (SCHED_OTHER, SCHED_BATCH) //
    uint32_t sched_priority;    // Static priority (SCHED_FIFO, SCHED_RR) //
    // Remaining fields are for SCHED_DEADLINE //
    uint64_t sched_runtime;
    uint64_t sched_deadline;
    uint64_t sched_period;
};

////This function handles SCHED_DEADLINE policy.
static int sched_setattr (pid_t pid, const struct sched_attr *attr, unsigned int flags){
    return syscall (SYS_sched_setattr, pid, attr, flags);
}
/**
 * @param argc - need to be 3. the user enter the policy and priority of process.
 * @param argv - contains the arguments (argv[1] is the new policy, argv[2] is the new priority.)
 */
int main(int argc , char* argv []){
    if(argc==3) {                                        //Check if the user enter valid values.
        printf("pid:%d", getpid());               //Designed to check the policy of the process before changing according to his pid.
        getchar();                                      //Stops the program from changing the policy of the process.
        int sched = atoi(argv[1]);                 //Save the type of the new policy.
        int pri = atoi(argv[2]);                   //Save the number of the new priority.

        //This case handles SCHED_DEADLINE policy because the sched_setscheduler function cannot handle it.
        if (sched == SCHED_DEADLINE){
            struct sched_attr p;                       //A structure that should be sent as an argument to the sched_setattr function.
            p.sched_priority = pri;
            p.sched_deadline = 30 * 1000 * 100;
            p.sched_flags = 0;
            p.sched_nice = 0;
            p.sched_period = 30 * 1000 * 100;
            p.sched_policy = SCHED_DEADLINE;
            p.sched_runtime = 10 * 1000 * 100;
            p.size = sizeof(p);
            if (sched_setattr(0, &p, 0) == -1){    //This function handles SCHED_DEADLINE policy.
                perror("The change was failed");
                exit(-1);
            }
        }

        //For any policy other than SCHED_DEADLINE the sched_setscheduler function can handle it.
        else {
            struct sched_param priority;                    //A structure that should be sent as an argument to the sched_setscheduler function.
            priority.sched_priority = pri;
            if (sched_setscheduler(0, sched, &priority) == -1) {  //This function handles policies.
                perror("The change was failed");
                exit(-1);
            }
        }
        printf("The policy and priority of process %d has changed", getpid());    //Notify the user that the policy change has been made.
        int stop = 1;                                                                   //Indicates whether the program is still running or not.
        while (stop) {                                                                  //To stop the program, the user needs to enter 0.
            scanf("%d", &stop);
        }
    }
    else{                                                                              //The user enter invalid value.
        printf("Please enter valid arguments");
    }
    return 0;
}

