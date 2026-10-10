4.Write a C program to accept elements of a one-dimensional array and calculate the sum of all its elements.  

#include <stdio.h>

int main() {
    int a[50], n, i, sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}

OUTPUT

Enter number of elements: 5
Enter 5 numbers:
10 20 30 40 50
Sum = 150