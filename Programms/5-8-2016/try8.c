# include<stdio.h>
void main()
{
    struct employee
{
    int x;
    char arr[8];
    int y;
}q;

// printf("character :%d\ninterger : %d\nFloat: %d\nDouble:%d\nlong long: %d\n",sizeof(char),sizeof(int),sizeof(float),sizeof(double),sizeof(long long));



printf("Size of structure is :%d",sizeof(q));
getch();
}












/*
struct size is 16 bytes
union size is   8 bytes
*/
