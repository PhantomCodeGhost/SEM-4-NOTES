/* Q1 is Write a program to find the execution time taken for execution of a given set of instructions
(use clock() function)


*/
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double execution_time;
    
    // Start the timer
    start = clock();
    
    // === YOUR INSTRUCTIONS GO HERE ===
    printf("Executing instructions...\n");
    
    // Example instructions
    int result = 0;
    for(int i = 0; i < 1000000; i++) {
        result += i;
    }
    
    printf("Result: %d\n", result);
    // === END OF YOUR INSTRUCTIONS ===
    
    // Stop the timer
    end = clock();
    
    // Calculate execution time in seconds
    execution_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("Execution time: %f seconds\n", execution_time);
    printf("Clock ticks: %ld\n", (end - start));
    
    return 0;
}


x-----x


/* Q2   FIFO
*/