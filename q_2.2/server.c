//
// Created by yirat on 27.7.2020.
//

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int counter = 0;

/**
 *  This function is the handler of SIGINT signal.
 */
void sigint_handler(int sig){
    counter++;
}

/**
 *  This function is the handler of SIGUSR1 signal.
 */
void sigusr1_handler(int sig){
    printf("The server got %d signals\n" , counter);
}

/**
 * The server can receive from the client two types of signals (SIGINT or SIGUSR1) and handles them accordingly.
 */
int main(){
    //This case addresses SIGINT signal.
    if(signal(SIGINT , sigint_handler)==SIG_ERR){
        printf("Signal handler failed");
        return -1;
    }
    //This case addresses SIGUSR1 signal.
    if(signal(SIGUSR1 , sigusr1_handler)==SIG_ERR){
        printf("Signal handler failed");
        return -1;
    }
    printf("The server pid is: %d\n" , getpid());           //This print is for the client to know what the server's pid is.
    getchar();                                                    //Designed to keep the server alive.
    return 0;
}