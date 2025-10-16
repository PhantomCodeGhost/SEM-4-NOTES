// Q2 OPT

#include <stdio.h>
int main(){
    // incoming Stream : Sequence of Page requests
    int incomingStream[] = {3, 4, 5, 6, 3, 4, 7, 3, 4, 5, 6, 7, 2, 4, 6};
    int pageFaults = 0;
    int frames = 3;
    
    int m, n, s, pages;
    pages = sizeof(incomingStream)/sizeof(incomingStream[0]);
    printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3\n");
    
    int temp[frames];
    
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
            // Find which page to replace (OPTIMAL)
            int replaceIndex = 0;
            int farthest = m;
            
            for(n = 0; n < frames; n++){
                int found = 0;
                // Check when this page will be used next
                for(int k = m + 1; k < pages; k++){
                    if(temp[n] == incomingStream[k]){
                        if(k > farthest){
                            farthest = k;
                            replaceIndex = n;
                        }
                        found = 1;
                        break;
                    }
                }
                // If page not found in future, replace this one
                if(!found){
                    replaceIndex = n;
                    break;
                }
            }
            
            temp[replaceIndex] = incomingStream[m];
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