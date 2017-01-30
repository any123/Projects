#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <ctype.h>


#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
 
 using namespace std;
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
 
 
 
 

 vector<string> all_that_matches(string s,vector<string>&keys)
 {
		vector<string>v;
		
		for(int i=0;i<keys.size();i++){
		if (keys[i].find(s) != string::npos) {
				v.push_back(keys[i]);
			} }
			
			return v;
 }
// Driver
int main()
{
     char ch;
     vector<string>keys;//={"the", "a", "there", "answer", "any","by", "bye", "their"};
     keys.push_back("the");  keys.push_back("a"); keys.push_back("answer"); keys.push_back("any");
     keys.push_back("by");  keys.push_back("bye");  keys.push_back("their");
      string s; int k=3;
     while(k--){
     
   	ch=getch();
   	
        s.push_back(ch);
    	cout<<s<<endl;       
        vector<string>v = all_that_matches(s,keys);  
		if(!v.empty()){
        for(unsigned int i=0;i<v.size();i++) 
		cout<<v[i]<<" ";
        
        cout<<endl;
    	}else{cout<<"Sorry no matches\n";
    	}
    	
    }
     
    
    return 0;
}
