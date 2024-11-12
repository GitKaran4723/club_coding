#include<stdio.h>  // Include the standard input-output library to use functions like printf().

int main() {
    int i = 1;  // Declare an integer variable 'i' and initialize it to 1.
    
    // This is a 'do-while' loop. The loop executes the block first and then checks the condition.
    do {
        // Print the current value of 'i' followed by a newline character.
        // This will print the numbers from 1 to 5, each on a new line.
        printf("%d\n", i);
        
        // Increment the value of 'i' by 1 after each iteration.
        i++;
    } while(i <= 5);  // The condition is checked after the block is executed.
    
    // The function returns 0 to indicate that the program executed successfully.
    return 0;
}
