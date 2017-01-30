#include <bits/stdc++.h>
using namespace std;

void apple(string s)
{
  int i=0,count=0,j;
  vector<char>v;
  for(i=0;i<s.length()-1;)
  {
    if(s[i]==s[i+1])
    {  count=1; j=i+1; v.push_back(s[i]);
      while(s[i]==s[j])
      {
        j++;
        count++;
      }
      i=j;
     for(;count;count=count/10){v.push_back('0'+(count%10));}
    }
    else
    {
        v.push_back(s[i]);
        v.push_back('1');
        i++;
    }

  }
        //cout<<v.size();
for(i=0;i<v.size();i++)
  cout<<v[i];
}

int main()
{


string s="aabbcccccaaa";

    apple(s);
    return 0;
}
