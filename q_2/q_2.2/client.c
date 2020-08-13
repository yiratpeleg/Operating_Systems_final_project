//
// Created by yirat on 27.7.2020.
//
#include <signal.h>
#include <stdlib.h>

/**
 * @param argc - need to be 4. the user enter the pid of server, the signal and the amount of mission.
 * @param argv - contains the arguments (argv[1] is the pid of server, argv[2] is the signal, argv[3] is the amount of mission.)
 */
int main(int argc , char* argv []){
    if(argc==4 && (atoi(argv[2])==2 || atoi(argv[2])==10)){     //Check if the user enter valid value
        pid_t pid_server = atoi(argv[1]);                           //Save the pid of server into pid_t variable.
        int sig = atoi(argv[2]);                                    //Save the number of signal.
        int num_of_send = atoi(argv[3]);                            //Save the number of times the signal is sent.
        for (int i = 0; i < num_of_send; i++){
            kill(pid_server, sig);                                      //Send the signal.
        }
    }
    else{                                                               //The user enter invalid value.
        printf("Please enter valid arguments\n");
    }
    return 0;
}
