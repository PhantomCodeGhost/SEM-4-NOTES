// Q1 Write a program that demonstrates the use of nice() system call. After a child process is started using fork(), assign higher priority to the child using nice() system call.   

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    int pid, retnice;
    pid = fork();
    
    if(pid == 0){
        retnice = nice(-2);
        printf("Child Process (PID : %d ), nice value %d\n", getpid(), retnice);
        sleep(1);
    } else {
        retnice = nice(5);
        printf("Parent process (
            PID: %d), nice value %d\n", getpid(), retnice);
        wait(NULL);
        sleep(1);
    }
    
    return 0;
}

NOTE : if Pid is 0 : Child creatd, 1 = Parent created, <0 = fork failed.



x-----x

// Q2 FIFO

#include <stdio.h>
int main(){
    // incoming Stream : Sequence of Page requests
    int incomingStream[] = {3, 4, 5, 6, 3, 4, 7, 3, 4, 5, 6,7, 2, 4, 6};
    int pageFaults = 0;
    int frames = 3;
    
    int m, n, s, pages;
    pages = sizeof(incomingStream)/sizeof(incomingStream[0]);
    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3\n");
    
    int temp[frames];
    int pointer = 0; // FIFO pointer to track which frame to replace next
    
    //Initialize all frames as empty(-1)
    for(m = 0; m < frames; m++){
        temp[m] = -1;
    }    
    
    for(m = 0; m < pages; m++){
        s = 0;  // Reset the Page Found flag
        
        // Check if pages already in frames        
        for(n = 0; n < frames; n++){
            if(incomingStream[m] == temp[n]){
                s = 1; // Page Found
                break;
            }
        }
        //Page not found (Page Fault s = 0)
        if(s == 0){
            temp[pointer] = incomingStream[m];
            pointer = (pointer + 1) % frames; //Move pointer circularly
            pageFaults++;
        }
        
        printf("\t%d\t\t",incomingStream[m]);
        for(n = 0; n < frames; n++){
            if(temp[n] != -1)
                printf("\t%d\t\t", temp[n]);
            else
                printf("\t-\t\t");
        }
        
        printf("\n");
    }
    printf("\nTotal Page Faults: %d\n", pageFaults);
    return 0;       
}


x-----x



/* Q3
*/

#include <stdio.h>
#include <stdbool.h>

#define P 5
#define R 4

// Ultra Minimal Safety Check
bool isSafe(int alloc[P][R], int max[P][R], int avail[R]) {
    int need[P][R], work[R], seq[P];
    bool finish[P] = {false};
    
    // Calculate need matrix
    for(int i=0; i<P; i++)
        for(int j=0; j<R; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    
    // Initialize work
    for(int i=0; i<R; i++) work[i] = avail[i];
    
    int count = 0;
    bool found;
    
    // Safety algorithm
    do {
        found = false;
        for(int i=0; i<P; i++) {
            if(!finish[i]) {
                int j;
                for(j=0; j<R; j++)
                    if(need[i][j] > work[j]) break;
                
                if(j == R) {
                    for(j=0; j<R; j++) work[j] += alloc[i][j];
                    seq[count++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }
    } while(found);
    
    // Result
    if(count == P) {
        printf("Safe sequence: ");
        for(int i=0; i<P; i++) printf("P%d ", seq[i]);
        printf("\n");
        return true;
    }
    return false;
}

int main() {
    // Fixed matrices
    int alloc[P][R] = {
        {0, 0, 1, 2},
        {1, 0, 0, 0},
        {1, 3, 5, 4},
        {0, 6, 3, 2},
        {0, 0, 1, 4}
    };
    
    int max[P][R] = {
        {0, 0, 1, 2},
        {1, 7, 5, 0},
        {2, 3, 5, 6},
        {0, 6, 5, 2},
        {0, 6, 5, 6}
    };
    
    int avail[R] = {1, 5, 2, 0};
    
    printf("=== Banker's Safety Algorithm ===\n");
    
    if(isSafe(alloc, max, avail)) {
        printf("System is in SAFE state\n");
    } else {
        printf("System is in UNSAFE state\n");
    }
    
    return 0;
}

