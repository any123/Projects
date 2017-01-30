#include <bits/stdc++.h>
using namespace std;

int  Strstr(string bada,string chota)
{
    int n=chota.length();
    int m=bada.length(),j=0,start=0;

    for(int i=0;i<m;i++)
    {   j=0;
        if(bada[i]==chota[j])
        {
            start=i;
            while(bada[i]==chota[j])
            {
                j++; i++;
                if(j==n)
                return start;
            }
            i=start;
        }

    }

    return -1;
}

int main()
{
    string bada="geeks forgeeksforg";
    string chota="forg";

    int ans = Strstr(bada,chota);
    cout<<ans;
}
