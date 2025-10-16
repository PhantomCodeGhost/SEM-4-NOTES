/* OS 10 All SLips */

************************************************************************************
Slip 1:
Write a program that demonstrates the use of nice() system call. After a child process is started
using fork(), assign higher priority to the child using nice() system call.


#include <stdio.h> // printf
#include <stdlib.h> // nice()
#include <unistd.h> // getpid(), fork()
#include <sys/types.h> // pid_t
#include <sys/wait.h> // wait() function

int main(){
    int pid, retnice;
    pid = fork();
    
    if(pid == 0){
        retnice = nice(-2);
        printf("Child Process (PID : %d ), nice value %d\n", getpid(), retnice);
        sleep(1);
    } else {
        retnice = nice(5);
        printf("Parent process ( PID: %d), nice value %d\n", getpid(), retnice);
        wait(NULL);
        sleep(1);
    }
    
    return 0;
}

************************************************************************************

Slip 2/11:
Q.1 Create a child process using fork(), display parent and child process id. Child process will
display the message “Hello World” and the parent process should display “Hi”.

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid ;
   pid = fork();
   
    if (pid == 0) {
        printf("Child (PID=%d): Hello World\n", getpid());
    } else {
        // Parent waits for child, then prints
        wait(NULL);
        printf("Parent (PID=%d): Hi\n", getpid());
        
    }
    return 0;
}

************************************************************************************
Slip 4/10/12:
Q.1 Write a program to illustrate the concept of orphan process ( Using fork() and sleep())

#include <stdio.h>
#include <unistd.h>
int main() {
    int pid = fork();
    
    if (pid == 0) {
        // Child process
        sleep(2); // Wait for parent to exit
        printf("I'm an orphan! My PID=%d, PPID=%d\n", getpid(), getppid());
    } else {
        // Parent process
        printf("Parent exiting now. PID=%d\n", getpid());
    }
    
    return 0;
}

************************************************************************************
Slip Slip:6/14/16
Q1. Write a program to find the execution time taken for execution of a given set of instructions
(use clock() function).

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int start, end;


    start = clock();   // start counting time

    int pid = fork();  // create a child process

    if (pid == 0) {
        printf("This is the Child process\n");
    } else {
        printf("This is the Parent process\n");
    }

    end = clock();   // end counting time

   double time_taken = (double)(end - start) / CLOCKS_PER_SEC;  // calculate total time

    printf("Time taken to execute is %f seconds\n", time_taken);

    return 0;
}

************************************************************************************
Slip:7,9,15,19,20
/*Write a program to create a child process using fork().The parent should goto sleep state and
child process should begin its execution. In the child process, use execl() to execute the "ls"
command.*/

#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();
    
    if (pid == 0) {
        execl("/bin/ls", "ls", "-l", NULL);
    } else {
        sleep(2); // parent sleeps while child runs
        printf("Parent: child finished\n");
    }
    return 0;
}

************************************************************************************
Slip:8,18


#include <stdio.h>

int main() {
    int n, m;
    
    // Get number of processes and resources
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resources: ");
    scanf("%d", &m);

    // Declare matrices
    int alloc[n][m], max[n][m], need[n][m];

    // Input allocation matrix
    printf("Enter allocation matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &alloc[i][j]);
        }
    }

    // Input maximum matrix
    printf("Enter maximum matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    // Calculate Need matrix (Need = Max - Allocation)
    printf("\nNeed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
            printf("%d\t", need[i][j]);
        }
        printf("\n");
    }

    return 0;
}


************************************************************************************
Slip 17
Q.1 Write the program to calculate minimum number of resources needed to avoid
deadlock

#include <stdio.h>

int main() {
    int n;
    printf("Number of processes: ");
    scanf("%d", &n);
    int max, sum = 0;
    for(int i=0;i<n;i++){
        printf("%d max: ", i);
        scanf("%d", &max);
        sum += max;
    }
    int min_needed = sum - (n - 1);
    //if (min_needed < 0) min_needed = 0;
    printf("Minimum resources to avoid deadlock = %d\n", min_needed);
    return 0;
}

***************************************************************************************