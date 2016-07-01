# include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3};
    int *p = arr;
    if(&p == &arr)
     printf("Same");
    else
     printf("Not same");
    getchar();
}




















/*
&arr is an alias for &arr[0] and returns the address of the first element in array, but &p returns the address of pointer p.
Now try below program

int main()
{
    char arr[] = {1, 2, 3};
    char *p = arr;
    if(p == &arr)
     printf("Same");
    else
     printf("Not same");
    getchar();
}
*/
