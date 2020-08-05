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

struct sched_attr {
    uint32_t size;              /* Size of this structure */
    uint32_t sched_policy;      /* Policy (SCHED_*) */
    uint64_t sched_flags;       /* Flags */
    int32_t sched_nice;         /* Nice value (SCHED_OTHER, SCHED_BATCH) */
    uint32_t sched_priority;    /* Static priority (SCHED_FIFO, SCHED_RR) */
    /* Remaining fields are for SCHED_DEADLINE */
    uint64_t sched_runtime;
    uint64_t sched_deadline;
    uint64_t sched_period;
};

static int sched_setattr (pid_t pid, const struct sched_attr *attr, unsigned int flags)
{
    return syscall (SYS_sched_setattr, pid, attr, flags);
}
/**
 * use SUDO in the run command
 * The function sched_setscheduler works with SCHED_OTHER , SCHED_RR , SCHED_FIFO , SCHED_IDLE
 * SCHED_DEADLINE
 * @param argc
 * @param argv
 * @return
 */
int main(int argc , char* argv []){
    printf("pid:%d",getpid());                    // TO CHECK THE CHANGES
    getchar();
    int sched = atoi(argv[1]);
    int pri = atoi(argv[2]);
    if(sched==SCHED_DEADLINE){
        struct sched_attr p;
        p.sched_priority = pri;
        p.sched_deadline = 30*1000*100;
        p.sched_flags = 0;
        p.sched_nice = 0;
        p.sched_period = 30*1000*100;
        p.sched_policy = SCHED_DEADLINE;
        p.sched_runtime = 10*1000*100;
        p.size = sizeof(p);
      if(sched_setattr(0,&p,0)==-1){
          perror("The change was failed");
          exit(-1);
      }
    }
    else {
        struct sched_param priority;
        priority.sched_priority = pri;
        if(sched_setscheduler(0, sched, &priority)==-1){
            perror("The change was failed");
            exit(-1);
        }
    }
    printf("The policy and priority of process %d has changed",getpid());
    int stop =1;
    while(stop){
        scanf("%d",&stop);
    }
}

