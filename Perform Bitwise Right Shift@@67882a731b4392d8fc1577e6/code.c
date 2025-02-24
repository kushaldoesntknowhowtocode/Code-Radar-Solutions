#include <stdio.h>

int main() {
    int number, shift;
    
    // Read the inputs
   
    scanf("%d", &number);
  
    scanf("%d", &shift);
    
    // Perform the bitwise right shift operation
    int result = number >> shift;
    
    // Print the result
    printf("%d",result);
    
    return 0;
}
