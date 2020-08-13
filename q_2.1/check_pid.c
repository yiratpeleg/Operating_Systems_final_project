//
// Created by yirat on 27.7.2020.
//
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @param argc - need to be 2. the user enter the pid of process.
 * @param argv - contains the pid of process.
 */
int main(int argc , char* argv[]) {
    if (argc == 2) {                                                   //check if the user enter valid value(the pid).
        pid_t pid = atoi(argv[1]);                                // save the pid into pid_t variable.
        int check = kill(pid, 0);                                  // save the return value from the kill function.
        if (check == 0) {                                             // if the return value is 0 then the process exists.
            printf("Process %d exists \n", pid);
        }
        else {                                                       //in another case, we need to check the type of error.
            if (errno == EPERM) printf("Process %d exists but we have no permission \n", pid);
            else if (errno == ESRCH) printf("Process %d does not exists \n", pid);
            else printf("Updated errno of a different type\n");
        }
    }
    else{                                                           //the user enter invalid value.
        printf("Please enter the pid \n");
    }
    return 0;
}