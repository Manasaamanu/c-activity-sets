#include <stdio.h>

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
    int a, b, c, largest;
    input(&a, &b, &c);
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}

int input(int *a, int *b, int *c) 
{
    printf("Enter three numbers: ");
    scanf(" The sum of %d and %d and%d", a, b, c);
}

void compare(int a, int b, int c, int *largest)
 {
    *largest = a;
    if (*largest < b) 
    {
        *largest = b;
    }
    if (*largest < c) 
    {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest)
 {
    printf("The three numbers are: %d, %d, %d\n", a, b, c);
    printf("The largest number is: %d\n", largest);
}
