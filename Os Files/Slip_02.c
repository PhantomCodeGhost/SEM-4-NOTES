// Q2 Banker Choice

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

// Need Matrix
int need[P][R] = {
    {0, 0, 0},
    {2, 0, 0},
    {0, 0, 1},
    {1, 0, 0},
    {0, 0, 2}
};

int available[R] = {0};

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
        for(int j = 0; j < R; j++) printf("%d ", allocation[i][j] + need[i][j]);
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

// (5) Check Deadlock - Ultra Minimal
bool checkDeadlock(){
    int work[R], seq[P];
    bool finish[P] = {false};
    
    for(int i = 0; i < R; i++) work[i] = available[i];
    
    int count = 0;
    bool found;
    do {
        found = false;
        for(int i = 0; i < P; i++) {
            if(!finish[i]) {
                int j;
                for(j = 0; j < R; j++)
                    if(need[i][j] > work[j]) break;
                
                if(j == R) {
                    for(j = 0; j < R; j++) work[j] += allocation[i][j];
                    seq[count++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }
    } while(found);
    
    if(count == P) {
        printf("Safe sequence: ");
        for(int i=0; i<P; i++) printf("P%d ", seq[i]);
        printf("\n");
        return true;
    }
    return false;
}

int main(){
    int choice;
    printf("===== Banker's Algorithm =====\n");

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
            case 5: if(!checkDeadlock())
                        printf("\nDeadlock Detected!!\n");
                    else
                        printf("No Deadlock. System is safe.\n");
                    break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid Choice!\n");
        }
    } while(choice != 6);

    return 0;

}
