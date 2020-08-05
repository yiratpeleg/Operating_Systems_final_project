//
// Created by yirat on 27.7.2020.
//
#include <signal.h>
#include <stdlib.h>

int main(int argc , char* argv []){
    int pid_server = atoi(argv[1]);
    int sig = atoi(argv[2]);
    int num_send = atoi(argv[3]);
    for(int i=0; i<num_send; i++){
        kill(pid_server,sig);
    }
    return 0;
}
