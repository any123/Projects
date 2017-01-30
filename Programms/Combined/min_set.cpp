/*Given n sets each containing m integers. You need to create MinDiff set by picking exactly 1 element from each set. The difference between the maximum and minimum elements in the MinDiff set should be minimum.
eg: for the sets {30, 20, 10, 40},{ 22, 33, 44, 99},{ 16, 17, 18, 19} min diff set is {19, 20, 22}. Max and min elements in MinDiff set are 22 and 19 and their difference is 3.
# include<bits/stdc++.h>
using namespace std;
*/
int max3(int a, int b , int c)
{
int d=(((a) > (b)) ? (a) : (b));
int res=(((d) > (c)) ? (d) : (c));
return res;
}

int min3(int a, int b , int c)
{
int d=(((a) < (b)) ? (a) : (b));
int res=(((d) < (c)) ? (d) : (c));
return res;
}

int main()
{

//In case the arrays are not sorted , arrays needs to be sorted first which will have additional complexity of m* nlogn if there are m arrays each containing n elements.

int arr1[4] = {4, 10, 15}; // this example taking static arrays
int arr2[4] ={ 1, 13, 29 };
int arr3[4] = { 5, 14, 28 };
int l1=sizeof(arr1)/sizeof(arr1[0]);
int l2=sizeof(arr2)/sizeof(arr2[0]);
int l3=sizeof(arr3)/sizeof(arr3[0]);

int i=0 , j=0 , k=0;
int min_diff =INT_MAX;
while(i < l1 && j < l2 && k < l3)
{
int l=arr1[i];
int m=arr2[j];
int n=arr3[k];
if((max3(l,m,n)-min3(l,m,n)) < min_diff)
{
min_diff=(max3(l,m,n)-min3(l,m,n));
}
if(min3(l,m,n) == l)
i++;
else if(min3(l,m,n) == m)
j++;
else
k++;
}

cout << “Min diff is ” << min_diff;

}
