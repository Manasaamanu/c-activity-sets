#include<stdio.h>
struct _complex
 {
    float real;
    float img;
};
struct _complex addComplex(struct _complex num1, struct _complex num2)
 {
    struct _complex result;
    result.real = num1.real + num2.real;
    result.img = num1.img + num2.img;
    return result;
}
struct _complex subtractComplex(struct _complex num1, struct _complex num2) 
{
    struct _complex result;
    result.real = num1.real - num2.real;
    result.img = num1.img - num2.img;
    return result;
}
int main() {
    struct _complex num1, num2, result;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.img);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.img);
    result = addComplex(num1, num2);
    printf("Sum = %.2f + %.2fi\n", result.real, result.img);
    result = subtractComplex(num1, num2);
    printf("Difference = %.2f + %.2fi\n", result.real, result.img);
    
    return 0;
}
