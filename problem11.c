#include<stdio.h>
struct _complex
{
    float real;
    float img;
};
typedef struct _complex complex;

  complex input_complex()
  {
    complex c;
    printf("Enter the value for real of c1\n");
    scanf("%f", &c.real);
    printf("Enter the value for img of c1\n");
    scanf("%f", &c.img);
    return c;
  }
  complex add_sum(complex a, complex b)
  {
    complex sum;
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;
    return sum;
  }
  void output(complex a, complex b, complex sum)
  {
    printf("Complex a:%f+%fi\n",a.real,a.img);
    printf("Complex b:%f+%fi\n",b.real,b.img);
    printf("Sum: %f + %fi\n", sum.real,sum.img);
  }

int main()
{
    complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add_sum(a,b);
    output(a,b,sum);
    return 0;
}