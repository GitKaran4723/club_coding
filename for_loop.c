// This is the standard input-output library that allows the use of printf() and other I/O functions.
#include<stdio.h>  

int main() {
    int i;  // Declare an integer variable 'i' which will be used as the loop counter.
    
    // This is a 'for' loop that starts with i = 2 and runs as long as i <= 100.
    // After each iteration, the value of 'i' is incremented by 2 (i = i + 2).
    for(i = 2; i <= 100; i = i + 2) {
        // Print the current value of 'i' followed by a tab character ('\t').
        // This will print all the even numbers from 2 to 100, separated by tabs.
        printf("%d\t", i);
    }
    
    // The function returns 0 to indicate that the program executed successfully.
    return 0;
}
