# include<bits/stdc++.h>
using namespace std;

vector<int> LSP(string p)
{
  vector<int> arr(p.length());
  arr[0]=0;


    int i=1,j=0;
    while(i<p.length())
    {

      if(p[i]==p[j])
      {arr[i]=j+1;
      i++;
      j++;
      }
      else if(j>0) { j= arr[j-1];}
      else  // i.e if j==0
      {arr[i]=0; i++;}

    }


    return arr;
}

int kmp(string t,string p)
{
  vector<int>lsp;

    lsp = LSP(p);
    int i=0,j=0;




    while(i<t.length())
    {
      if(t[i]==p[j])
    {
      if(j==p.length()-1)
      return i-j;
      else
      {
        i++; j++;
      }
    }
    else if(j>0)
    j=lsp[j-1];            // Here the value of our table LSP or longest suffix and prefix is used to shift the pattern if it does not match
                            // with the text
    else
    i++;
    }

    return -1;

}
int main()
{
   string text,pat;
   cin>>text>>pat;

        //text="bacbabababacaca";
        //pat="ababaca";
         cout<<"the pattern matches at : position ";
   int n=kmp(text,pat);
   cout<<n<<endl;
}
