/*Q1
Write a program to create a child process using fork().The parent should goto sleep state and
child process should begin its execution. In the child process, use execl() to execute the “ls”
command. */





x------x

Q2  Implement LRU


#include <stdio.h>
int main(){
     // incoming Stream : Sequence of Page requests
    int incomingStream[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int pageFaults = 0;
    int frames = 3;
    
    int m, n, s, pages;
    pages = sizeof(incomingStream)/sizeof(incomingStream[0]);
    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3\n");
    
    int temp[frames];
    int recent[frames]; // Track recent usage
    
    //Initialize all frames as empty(-1)
    for(m = 0; m < frames; m++){
        temp[m] = -1;
        recent[m] = -1;
    }    
    
    for(m = 0; m < pages; m++){
        s = 0;  // Reset the Page Found flag
        
        // Check if pages already in frames        
        for(n = 0; n < frames; n++){
            if(incomingStream[m] == temp[n]){
                s = 1; // Page Found
                recent[n] = m; // Update recent usage
                break;
            }
        }
        
        //Page not found (Page Fault s = 0)
        if(s == 0){
            // Find least recently used frame
            int lru = 0;
            for(n = 1; n < frames; n++){
                if(recent[n] < recent[lru]){
                    lru = n;
                }
            }
            temp[lru] = incomingStream[m];
            recent[lru] = m; // Set recent usage to current time
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