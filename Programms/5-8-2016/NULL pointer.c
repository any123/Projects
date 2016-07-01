
#include<string.h>
#include<stdio.h>
int main(){
    char *p;  //Uninitialized pointer
    char *q=NULL;   //Null pointer;
    strcpy(p,"playing with c");
    strcpy(q,"playing with c");

    printf("%s" ,p);
    return 0;
}
