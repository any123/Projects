# include<bits/stdc++.h>
using namespace std;                         // finding connected cells in a matrix
int find_max_one(int arr[][7],int row,int col)
{
 if(row>=6 || col>=7 || row<0 || col<0) return 0;

 if(arr[row][col]==0)  return 0;

 int sizes =1;

   arr[row][col]=0;
   for(int i=row-1;i<=row+1;i++)
   {
        for(int j=col-1;j<=col+1;j++)
        {   if(i!=row || j !=col)
            sizes=sizes+find_max_one(arr,i,j);
        }
   }

        return sizes;
}
int main()
{
    int arr[6][7]={ {0,0,0,1,1,0,0},
                    {0,1,0,0,1,1,0},
                    {1,1,0,1,0,0,1},
                    {0,0,0,0,0,1,0},
                    {1,1,0,0,0,0,0},
                    {0,0,0,1,0,0,0} };

    int row=6,col=7,i,j;
    int sizes=0,maxi=-99;;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {   if(arr[i][j]==1)
        {
            sizes=find_max_one(arr,i,j);
            if(sizes>maxi)
            maxi=sizes;
         }
        }
    }
    cout<<"maximum no.of ones are: "maxi<<endl;

}
