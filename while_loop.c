#include<stdio.h>  // Include the standard input-output library to use functions like printf().

int main() {
    int i = 1;  // Declare an integer variable 'i' and initialize it to 1.
    
    // This is a 'while' loop that runs as long as the condition (i <= 5) is true.
    while(i <= 5) {
        // Print the current value of 'i' followed by a space.
        // This prints the numbers from 1 to 5, each separated by a space.
        printf("%d ", i);
        
        // Increment the value of 'i' by 1 after each iteration.
        // This ensures that 'i' will eventually exceed 5 and stop the loop.
        i++;
    }
    
    // The function returns 0 to indicate that the program executed successfully.
    return 0;
}
