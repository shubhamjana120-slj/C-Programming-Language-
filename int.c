6.Write a C program to accept 5 integer elements from the user into an array and display them. 

#include <stdio.h>

int main() {
    int arr[5], i;
    
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The array elements are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

OUTPUT

Enter 5 integers: 1 2 3 4 5
The array elements are: 1 2 3 4 5