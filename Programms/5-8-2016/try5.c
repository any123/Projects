 //What will be output when you will execute following c code?

#include<stdio.h>
void main(){
    short num[3][2]={3,6,
                    9,12,
                    15,18};

    printf("%d  %d",*(num+1)[1],**(num+2));
}
























/*

*(num+1)[1]
=*(*((num+1)+1))
=*(*(num+2))
=*(num[2])
=num[2][0]
=15
And
**(num+2)
=*(num[2]+0)
=num[2][0]
=15
*/
