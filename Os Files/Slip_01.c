//Banker

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




