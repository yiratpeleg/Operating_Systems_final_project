# Operating Systems - Final project
 This project was done as part of an operating systems course at Ariel University and this is the final assignment of the course.
 #### The project deals with the following topics:
 #### q_1:
For a given program in the c language, I specified the memory locations where the variables are stored by using different commands from the terminal such as the nm command, the objdump command and also by the gdb.
#### q_2.1:
I wrote a program that receives a process pid. The program checks whether this process exists and whether it has permissions, by sending signal 0 by the kill function.
In addition, I found 2 more methods to check if a particular process exists that are specified in the pdf file.
#### q_2.2:
I wrote a program of client and server so that the client can send to the server two types of signals.\
The meaning of the signals was written by me by building a handler function for each of them, by using the signal function.\
In the pdf file it can be seen that not all the signals are received.
#### q_3:
I wrote a program that changes the policy and priority of the current process (the program).
I used this with the sched_setscheduler function and the sched_setattr function.\
To check if the changes were indeed made I used the chrt command.
#### q_4:
I wrote a program that gets a path of a certain directory, I went through all the files in the directory recursively using the nftw function, and for each file I printed its type, its inode and its name.\
For soft link files I did not print anything.\
To see if the prints are correct I used the stat command.
 
#### For each folder in the project is attached a file called readme which has explanations of how to compile and run the program.


 
 
