#include<stdio.h>

int main() {
  int i = 3;
  //int *j = &i;
  int *j;
  j = &i;
  int **k;
  k = &j;

  printf("Value of i = %d", i); //stores value of i
  printf("\nAddress of i = %p", &i); //stores address of i
  printf("\nAddress of i = %p", j); //stores address of i
  printf("\nAddress of j = %p", &j); //address of j
  printf("\nValue of j = %p", j); //val of j = address of i
  printf("\nValue of i = %d", *(&i)); //val of i...*(&i) cancel out
  printf("\nValue of i = %d", *j);
  return 0;
}
