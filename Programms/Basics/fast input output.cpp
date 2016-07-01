#include <stdio.h>

 	long int fastInput()
	  {

    long int val = 0;

    char c = getchar_unlocked();

    while (c < '0' || c > '9') c = getchar_unlocked();
   		 while (c >= '0' && c <= '9') 
		{

       	 val = (val<<1) + (val<<3) + (c-'0');

       	 c = getchar_unlocked();
			
		 }

	 return val;
	}

 

	int main() {

    long int t, n, k, i, temp, count, a[101];

    t = fastInput();

    while (t--) {

        n = fastInput();

        for (i=0; i<n; i++) {

            a[i] = fastInput();

        }

        k = fastInput();

        temp = a[k-1], count = 1;

        for (i=0; i<n; i++) {

            if (a[i] < temp) {

                count++;

            }
        }

        printf("%ld\n", count);

    }
    return 0;

} 


