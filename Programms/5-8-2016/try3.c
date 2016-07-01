#include<stdio.h>
int main()
{
  typedef static int *i;
  int j;
  i a = &j;
  printf("%d", *a);
  getchar();
  return 0;
}


















/*
Output: Compiler Error -> Multiple Storage classes for a.
In C, typedef is considered as a storage class. The Error message may be different on different compilers.
*/
