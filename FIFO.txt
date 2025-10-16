// Q2 FIFO

#include <stdio.h>
int main(){
    // incoming Stream : Sequence of Page requests
    int incomingStream[] = {3, 4, 5, 6, 3, 4, 7, 3, 4, 5, 6,7, 2, 4, 6}; // Reference String: 0, 2, 1, 6, 4, 0, 1, 0, 3, 1, 2, 1

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

