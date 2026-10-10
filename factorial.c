5.Write a C program to find the factorial of a given number using a user-defined function. 

#include <stdio.h>

int findFactorial(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int num, ans;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    ans = findFactorial(num);
    printf("Factorial = %d\n", ans);
    return 0;
}

OUTPUT

Enter a number: 5
Factorial = 120