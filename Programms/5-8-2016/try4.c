# include<stdio.h>

void fun(int *p)
{
  static int q = 10;
  p = &q;
}

int main()
{
  int r = 20;
  int *p = &r;
  fun(p);
  printf("%d", *p);
  getchar();
  return 0;

}





/*
Explanation: Inside fun(), q is a copy of the pointer p. So if we change q to point something else then p remains uneffected. If we want to change a local pointer of one function inside another function, then we must pass pointer to the pointer. By passing the pointer to the pointer, we can change pointer to point to something else. See the following program as an example.

void fun(int **pptr)
{
  static int q = 10;
  *pptr = &q;
}

int main()
{
  int r = 20;
  int *p = &r;
  fun(&p);
  printf("%d", *p);
  return 0;
}

In the above example, the function fun() expects a double pointer (pointer to a pointer to an integer). Fun() modifies the value at address pptr.  The value at address pptr is pointer p as we pass adderess of p to fun().  In fun(), value at pptr is changed to address of q.  Therefore, pointer p of main() is changed to point to a new variable q.

Also, note that the program won’t cause any out of scope problem because q is a static variable. Static variables exist in memory even after functions return. For an auto variable, we might have seen some unexpected output because auto variable may not exist in memory after functions return.

*/









/*
Inside fun(), q is a copy of the pointer p. So if we change q to point something else then p remains unaffected.
TRY THIS

void fun(int **p)
{
  static int q = 10;
  *p = &q;
}

int main()
{
  int r = 20;
  int *p = &r;
  fun(&p);
  printf("%d", *p);
  getchar();
  return 0;
*/
