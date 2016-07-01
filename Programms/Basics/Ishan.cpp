#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
#define mset(x,v) memset(x, v, sizeof(x))

bool isprefix(string s1,string s2){
if(s1.length()>s2.length())

return false;

string::iterator it1,it2;

it2=s2.begin();
for(it1=s1.begin();it1<s1.end();it1++){
if(*it1!=*it2)
return false;
it2++;
}
return true;
}

void binary(int n,int temp){

stack<int>s; int res=0;

while(n!=0){

s.push(n%2);

n=n/2;

}

while(s.size()!=temp)

s.push(0);
while(!s.empty()){

cout<<s.top();

s.pop();

}

}


int main(){
cout<<"Enter the binary string\n";

string s ;

cin>>s;

 set<string> set1;

vector<string> v;
int i=0,j;

while(i<s.length()){
string temp;

temp.push_back(s.at(i));i++;


while(set1.find(temp)!=set1.end()){
temp.push_back(s.at(i));
i++;
}

set1.insert(temp);
v.push_back(temp);
}

int posnprefix[v.size()];
mset(posnprefix,0);

for(i=v.size()-1;i>1;i--){
for(j=i-1;j>=0;j--){
if(isprefix(v[j],v[i])){
posnprefix[i]=j+1;
break;}
}
}

int temp;

if ((int)log2(v.size())==log2(v.size()))

temp=log2(v.size());

else

temp=(int)log2(v.size()) +1;

cout<<"The encoded string is \n";

rep(i,v.size())
{binary(posnprefix[i],temp);
cout<<*(v[i].end()-1);
}
}
