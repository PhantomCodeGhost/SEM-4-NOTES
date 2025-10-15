/* Q. 1 Creating a child process using the command exec(). Note down process ids of the parent
and the child processes, check whether the control is given back to the parent after the child
process terminates */
    
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    printf("Parent PID: %d\n", getpid());
    
    if(fork() == 0){
        printf("Child PID: %d\n", getpid());
        execl("bin/date", "date", NULL); // Child becomes 'date' command
    }
    wait(NULL); //Parent waits here
    printf("Control returned to parent!\n");
    
    return 0;
}



x-----x

// Q.        Optional 