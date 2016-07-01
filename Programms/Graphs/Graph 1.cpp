# include<iostream>

using namespace std;

int main()
{
    int a[5][5],p[5][5],m,i,j,k;
    m=5;
    for(i=0;i<m;i++)
       {
        for(j=0;j<m;j++)
           {
             cin>>a[i][j];
              p[i][j]=a[i][j];
           }
       }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<m-1;k++)
            {
                p[i][j]=p[i][j]+p[i][k]*p[k][j];
                if(p[i][j]>1)
                    p[i][j]=1;
            }

        }
    }
    cout<<endl;
 for(i=0;i<m;i++)
       {
        for(j=0;j<m;j++)
           {
            cout<<p[i][j]<<" ";
           }
           cout<<endl;
       }

}
