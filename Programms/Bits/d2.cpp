
#include<iostream>
#include<algorithm>
using namespace std;
 
// A structure to represent a job
struct Job
{
   string name;
   int marks; 
};
 

bool comparison(Job a, Job b)
{
     return (a.marks < b.marks);
}
 
void printJobScheduling(Job arr[], int n)
{
    sort(arr, arr+n, comparison);
 
    for (int i=0; i<n; i++)
         cout<<arr[i].name<<" "<<(-1)*arr[i].marks<<endl;
      
}
 

int main()
{
    int n,m; cin>>n; 
    Job arr[n];
    for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i].name>>m;
	 	arr[i].marks=m*(-1);
	 }
   
	 printJobScheduling(arr, n);
}
 

