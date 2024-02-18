#include <stdio.h>
int input();
int compare(int a,int b,int c,int largest);
void output(int a,int b,int c,int largest);
int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  compare(a,b,c,largest);
  output(a,b,c,largest);
  return 0;
}
int input(){
  int number;
  printf("Enter the number\n");
  scanf("%d",&number);
  return 0;
}
int compare(int a,int b,int c,int largest){
  if (a>=b && a>=c)
  {
    largest=a;
    return a;
  } 
  if (b>=a && b>=c)
  {
    largest=b;
    return b;
  }
  else{
    largest=c;
    return c;
  }
}
void output(int a,int b,int c,int largest){
  printf("The largest of %d,%d,%d is %d\n",a,b,c,largest);
}