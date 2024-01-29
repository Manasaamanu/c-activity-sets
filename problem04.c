#include <stdio.h>
int input();
void add(int a,int b,int *sum);
void output(?int a,int b,int sum);
int main()
{
 int a,b,sum;
 a=input();
 b=input();
 add(a,b,sum);
 output(a,b,sum);
}
int input()
{
  int number;
  printf("Enter the number\n");
  scanf("%d",&n);
  return x;
}
void add(int a,intb,int*sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("The sum of %d.%d is %d\n"a,b,sum);
}