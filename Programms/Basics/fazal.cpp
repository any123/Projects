
#include <stdio.h>

 

#define LIMIT 10000

 

#define READ_INT(_x)					
 {							

    int _tmp = 0;					

    register int _ch = getchar_unlocked();		

    while (_ch == '\n' || _ch == ' ')			

      _ch = getchar_unlocked();				

    while (48 <= _ch && _ch <= 57)			

      {							

	_tmp = (_tmp << 3) + (_tmp << 1) + _ch - 48;	

	_ch = getchar_unlocked();			

      }							

    (_x) = _tmp;					

  }							
 

	int main(void)

{

  int a[LIMIT];

  int i, j, m, n, t, tmp;


  READ_INT(t);
  while (t--)

    {

      READ_INT(m);

      for (i = 0; i < m; i++)

	READ_INT(*(a + i));

 

      READ_INT(n);

      for (j = i = 0; i < n; i++)
	{

	  READ_INT(tmp);

	  while (j < m && *(a + j) != tmp)

	    j++;

	  if (j >= m)

	    {

	      for (i++; i < n; i++)

		READ_INT(tmp);

	      break;

	    }

	}

 

      fputs_unlocked((j < m) ? "Yes\n" : "No\n" , stdout);

    }


  return 0;


