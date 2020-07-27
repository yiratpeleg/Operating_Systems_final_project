//
// Created by yirat on 27.7.2020.
//
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[]){
    int pid = atoi(argv[1]);
    int check = kill(pid , 0);
    if(check==0){
        printf("Process %d exists" , pid);
    }
    else{
        if(errno==EPERM) printf("Process %d exists but we have no permission" , pid);
        else if(errno==ESRCH) printf("Process %d does not exists" , pid);
    }
    return 0;
}