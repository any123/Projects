
#include<iostream>
#include<algorithm>
using namespace std;
 
// A structure to represent a job
struct Job
{
   char id;  
   int dead;   
   int profit;  
};
 
// This function is used for sorting all jobs according to profit
bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}
 
void printJobScheduling(Job arr[], int n)
{
    // Sort all jobs according to decreasing order of prfit
    sort(arr, arr+n, comparison);
 
    for (int i=0; i<n; i++)
         cout<<arr[i].profit<<" ";
		
		cout<<endl;
  for (int i=0; i<n; i++)
         cout<<arr[i].dead<<" ";
      
}
 
// Driver program to test methods
int main()
{
    Job arr[5] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);  // n=5 here
    cout << "Following is profit sequence of jobs in dsencding order\n";
    printJobScheduling(arr, n);
    cout<<"\nNotice that the array element is sorted as per 'profit' and correspondingly all elements are arranged";
    return 0;
}
 

