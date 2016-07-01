#include <stdio.h>
# include<iostream>
#include <string.h>
#define LIMIT 	255

using namespace std;

void countSort(char array[])
{

    char output[strlen(array)];

 
    int count[LIMIT + 1], i;
    memset(count, 0, sizeof(count));
    for(i = 0; array[i]; ++i)
        ++count[array[i]];

    for (i = 1; i <= LIMIT	; ++i)
        count[i] += count[i-1];

    
    for (i = 0; array[i]; ++i)
    {
        output[count[array[i]]-1] = array[i];
        --count[array[i]];
    }

  
    for (i = 0; array[i]; ++i)
        array[i] = output[i];
}


int main()
{
    char array[100],ch ;
	do{
		
	cout<<"Enter the string to sort: \n";
	fflush(stdin);
	cin.getline(array,100);
    countSort(array);

    printf("Sorted character array is %s\n", array);
    
    cout<<"Want to sort another string y/n \n";
    cin>>ch;
	}while(ch=='y');
    
	return 0;
}
