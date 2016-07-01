# include<bits/stdc++.h>
using namespace std;
int firstOccurrence(int A[], int left, int right, int item) {
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (A[mid] >= item) 
            right = mid;
        else
            left = mid;
    }
    return right;
}
int lastOccurrence(int A[], int left, int right, int item) {
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (A[mid] <= item)
            left = mid;
        else
            right = mid;
    }
    return left;
}
int numberOfOccurrences(int A[], int size, int item) {
    // Note the boundary parameters
    int left = firstOccurrence(A, -1, size - 1, item);
    int right = lastOccurrence(A, 0, size, item);
    if (A[left] == item && A[right] == item)            // If the item is in the array A
        return (right - left + 1);
    else                                                            // If the item is not in the array A
        return 0;
}
int main()
{
	int n; cout<<"enter the size "; cin>>n;
	int a[n];
	cout<<"Now enter the elements !!!\n";
	for(int i=0;i<n;i++) cin>>a[i];
	int item;
	cout<<"ENter the element to find it's no. of occurence !!!\n";
	cin>>item;
	cout<<numberOfOccurrences(a,n,item);	
}
