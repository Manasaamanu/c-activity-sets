#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main() {
    int a, b, c, largest;
    a = input();
    b = input();
    c = input();
    largest = compare(a, b, c);
    output(a, b, c, largest);
    return 0;
}
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int compare(int a, int b, int c) {
    int largest;
    largest = a;

    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    return largest;
}
void output(int a, int b, int c, int largest) {
    printf("The numbers are: %d, %d, %d\n", a, b, c);
}


