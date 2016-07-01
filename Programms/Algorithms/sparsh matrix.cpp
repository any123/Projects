
Sparse Matrix using Array in C 


Program to implement Sparse Matrix using Array in C language
#include<stdio.h>
#include<conio.h>

 int spa[10][10];
 void spmatrix(int,int,int);
 void main()
 { int  i,j,n,m,num,elem=0;
   clrscr();
   printf("\nenter no. of rows: ");
   scanf("%d",&n);
   printf("\nenter no. of column: ");
   scanf("%d",&m);
   printf("\nenter the elements of array\n");
   for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
     { scanf("%d",&spa[i][j]);
     }
   }
   printf("\nmatrix:\n");
   for(i=0;i<n;i++)
   {for(j=0;j<m;j++)
    { printf(" %d",spa[i][j]);
    }
    printf("\n");
   }
 
   for(i=0;i<n;i++)
   { for(j=0;j<m;j++)
     { if(spa[i][j]!=0)
       elem++;
     }
   }
   spmatrix(elem+1,n,m);
 getch();
 }

 void spmatrix(int t,int n,int m)
 { int b[10][3],i,j,q=1;
   b[0][0]=n;
   b[0][1]=m;
   b[0][2]=t-1;
   for(i=1;i<=n;i++)
   {for(j=1;j<=m;j++)
    { if(spa[i-1][j-1]!=0)
      { b[q][0]=i;
 b[q][1]=j;
 b[q][2]=spa[i-1][j-1];
      q++;
    }
    }
   }
   printf("\n\nsparse matrix:\n");
   for(i=0;i<t;i++)
   {for(j=0;j<3;j++)
    { printf(" %d",b[i][j]);
    }
    printf("\n");
   }
   }



