/* Q1 Write a program to illustrate the concept of orphan process ( Using fork() and sleep() ) . */
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{ 
    int pid = fork(); 

    if (pid > 0) { 
        // Parent process
        printf("Parent process\n"); 
        printf("ID : %d\n\n", getpid()); 
    } 
    else if (pid == 0) { 
        // Child process
        printf("Child process\n"); 
        printf("ID: %d\n", getpid()); 
        printf("Parent -ID: %d\n\n", getppid()); 
        
        sleep(10); // Parent process will likely terminate before this finishes
        
        // After sleep, parent has exited, child is now orphan and adopted by init
        printf("\nChild process (after sleep)\n"); 
        printf("ID: %d\n", getpid()); 
        printf("Parent -ID: %d\n", getppid()); // Likely to be 1 (init)
    } 
    else { 
        printf("Failed to create child process"); 
    } 
 
    return 0; 
}



x-----x


Q2
Bankers  1520
