//
// Created by yirat on 27.7.2020.
//
#include <signal.h>
#include <stdlib.h>

int main(int argc , char* argv []){
    if(argc==4 && (atoi(argv[2])==2 || atoi(argv[2])==10))  {
        pid_t pid_server = atoi(argv[1]);
        int sig = atoi(argv[2]);
        int num_of_send = atoi(argv[3]);
        for (int i = 0; i < num_of_send; i++) {
            kill(pid_server, sig);
        }
    }
    else{
        printf("Please enter valid arguments\n");
    }
    return 0;
}
