7.Write a C program to swap two numbers using a temporary variable.

#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Using temporary variable to swap
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}

OUTPUT

Enter two numbers: 5 10
Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5