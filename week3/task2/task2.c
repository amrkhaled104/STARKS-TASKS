#include<stdio.h>
unsigned long long int fibonacci(unsigned int n);
int main() {

    unsigned int n;
    printf("Enter the value of n: ");
    scanf("%u", &n);

    unsigned long long int result = fibonacci(n);

    printf("Fibonacci(%u) = %llu\n", n, result);

    return 0;
}