#include<stdio.h>
#define max 20
#define INFINITY 99
int w[max][max];
int n_size;
int p[max];
void indat()
{
    printf("Enter the number of nodes:");
    scanf("%d",&n_size);
    int i,j;
    for(i=0;i<n_size;i++)
    {
        w[i][i] = 0;
        for(j=i+1;j<n_size;j++)
        {
            printf("Enter the weight of edge '%c' to '%c': ",65+i,65+j);
            scanf("%d",&w[i][j]);
            w[j][i] = 0;
        }
    }
}
void disdat()
{
    int i,j;
    printf("The Path adjacent matrix:-\n");
    for(i=0;i<n_size;i++)
    {
        printf("\n");
        for(j=0;j<n_size;j++)
        printf("\t%d",w[i][j]);
    }
    fflush(stdin);
}
int findshort(int sr,int dst)
{
    int i;
    if(sr == dst)
        return 0;
    else
    {
        int ret=-1;
        int min=INFINITY;
        int tdst;
        for(i=0;i<n_size;i++)
        {
            if(w[sr][i]!=0)
            {
                ret=0;
                tdst=w[sr][i]+findshort(i,dst);
                if(min>tdst)
                {
                    min=tdst;
                    p[sr]=i;
                }
            }
        }
        if(ret==-1)
        return INFINITY;
        else return min;
    }
}
void MSG()
{
    char s,d;
    int si,di;
    printf("\nEnter the source and destination node : ");
    scanf("%c %c",&s,&d);
    fflush(stdin);
    si=(int)s-65;
    di=(int)d-65;
    int dist=findshort(si,di);
    if(dist>=INFINITY)
    printf("The shortest can't be computed\n");
    else
    {
        printf("\n The shortest distance between '%c' and '%c' : %d",s,d,dist);
        printf("\n The shortest path : %c",s);
        while(si!=di)
        {
            printf(" %c",65+p[si]);
            si = p[si];
        }
    }
}
int main()
{
    indat();
    disdat();
    MSG();
    return 0;
}
