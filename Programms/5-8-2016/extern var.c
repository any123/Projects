#include "somefile.h"
extern int var;
int main(void)
{
 var = 10;
 return 0;
}


<CODE 2>
extern int var =0;
int main(void)
{
 var = 10;
 return 0;
}
