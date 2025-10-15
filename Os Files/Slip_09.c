// Q1
/* Write a program to 
create a child process using fork().The parent should goto sleep state and child 
process should begin its execution. In the child process, use execl() to execute the “ls” 
command. 
*/

#include <stdio.h>
#include <stdlib.h> // exit()
#include <sys/types.h> // for pid_t
#include <unistd.h> // fork() system call

int main(){
    pid_t pid;
    pid = fork(); // Creating a new process
    if(pid < 0){
        perror("fork failed");
        exit(1);
    }else if(pid == 0){
        printf("Child Pid is : %d, Parent Pid is : %d\n", getpid(), getppid());
        printf("Child executing 'ls' command using execl()");
        execl("/bin/ls","ls","-l",NULL);
        perror("Execl failed!");
        exit(1);
    }else {
        printf("Parent Pid is : %d, Child Pid is : %d\n", getppid(), getpid());
        printf("Parent going to sleep for 10 seconds\n");
        sleep(10);
        printf("Parent woke up afer 10 seconds. parent did not terminate early\n");
        return 0;
        
    }
    
}


x-----x


/* Q2 Menu Driven Bankers Algorithm .

*/
#include <stdio.h>
#include <stdbool.h>

#define P 5 // processes
#define R 3 // resources

// Allocation Matrix
int allocation[P][R] = {
    {0, 1, 0},
    {2, 0, 0},
    {3, 0, 3},
    {2, 1, 1},
    {0, 0, 2}
};

// Need Matrix (given directly in the question)
int need[P][R] = {
    {0, 0, 0},
    {2, 0, 0},
    {0, 0, 1},
    {1, 0, 0},
    {0, 0, 2}
};

int available[R] = {0};  // will be accepted from user

// (1) Accept Available
void acceptAvailable(){
    printf("Enter available resources (A B C): ");
    for(int i = 0; i < R; i++)
        scanf("%d", &available[i]);
}

// (2) Display Allocation & Max
void displayAllocationMax(){
    printf("\nProcess   Allocation    Max\n");
    for(int i = 0; i < P; i++){
        printf("P%d\t", i);
        for(int j = 0; j < R; j++) printf("%d ", allocation[i][j]);
        printf("\t   ");
        for(int j = 0; j < R; j++) printf("%d ", allocation[i][j] + need[i][j]); // Max = Alloc + Need
        printf("\n");
    }
}

// (3) Display Need
void displayNeed(){
    printf("\nProcess   Need\n");
    for(int i = 0; i < P; i++){
        printf("P%d\t", i);
        for(int j = 0; j < R; j++) printf("%d ", need[i][j]);
        printf("\n");
    }
}

// (4) Display Available
void displayAvailable(){
    printf("\nAvailable: ");
    for(int i = 0; i < R; i++)
        printf("%d ", available[i]);
    printf("\n");
}

// (5) Check Deadlock
bool checkDeadlock(){
    int work[R];
    bool finish[P] = {false};

    for(int i = 0; i < R; i++)
        work[i] = available[i];

    bool found;
    do {
        found = false;
        for(int i = 0; i < P; i++){
            if(!finish[i]){
                bool canAllocate = true;
                for(int j = 0; j < R; j++){
                    if(need[i][j] > work[j]){
                        canAllocate = false;
                        break;
                    }
                }
                if(canAllocate) {
                    for(int j = 0; j < R; j++)
                        work[j] += allocation[i][j];
                    finish[i] = true;
                    found = true;
                }
            }
        }
    } while(found);

    for(int i = 0; i < P; i++)
        if(!finish[i])
            return true; // Deadlock

    return false; // No deadlock
}

int main(){
    int choice;
    printf("===== Banker's Algorithm (Partial) =====\n");

    do{
        printf("\n1. Accept Available\n");
        printf("2. Display Available\n");
        printf("3. Display Allocation & Max\n");
        printf("4. Display Need\n");
        printf("5. Check Deadlock\n");
        printf("6. Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: acceptAvailable(); break;
            case 2: displayAvailable(); break;
            case 3: displayAllocationMax(); break;
            case 4: displayNeed(); break;
            case 5: if(checkDeadlock())
                        printf("\nDeadlock Detected!!\n");
                    else
                        printf("\nNo Deadlock. System is safe.\n");
                    break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid Choice!\n");
        }
    } while(choice != 6);

    return 0;
}