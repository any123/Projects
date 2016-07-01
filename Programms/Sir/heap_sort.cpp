# include<bits/stdc++.h>

using namespace std;

struct heap
{
	int *arr;
	int capacity;
};
void swap(int* a, int* b) { int t = *a; *a = *b;  *b = t; }
void heapify(struct heap *h,int i)
{
	int l,r,max,temp;
	max=i;
	l=2*i+1;
	r=2*i+2;
	
	if(l <h->capacity&& h->arr[l]> h->arr[max])
	max=l;
	
	
	if(r<h->capacity && h->arr[r]>h->arr[max])
	max=r;
	
	if(max!=i)
	{
		swap(&h->arr[i],&h->arr[max]);
		
		heapify(h,max);
	}
	
}


struct heap* buildheap(int *A,int n)
{

	struct heap * h=(struct heap*)malloc(sizeof(struct heap));
	h->capacity=n;
	h->arr=A;
	
	for(int i=(n-2)/2;i>=0;i--)
	heapify(h,i);
	return h;
}
void play(int A[],int n)
{	int i,j,h,k,r=0,m;
	 h=log2(n)+1;
	 cout<<endl;
    for(i=0;i<h&&r<n-1;i++)
    {
        m=pow(2,h-i-1);
        for(j=0;j<m;j++)
        {
            cout<<" ";
        }
        for(j=0;j<pow(2,i)-1&&r<n-1;j++)
        {
            cout<<A[r];
            r++;
            for(k=0;k<pow(2,h-i)-1;k++)
            {
                cout<<" ";
            }
        }
        cout<<A[r]<<endl;
        r++;
    }	
}
void heap_sort(int A[],int n)
{
	struct heap *h=buildheap(A,n);
	int size,i,temp;
	while(h->capacity>n)
	{
		swap(&h->arr[0],&h->arr[h->capacity-1]);

		h->capacity--;	
		heapify(h,0);
	}
}

int main()
{	
	int i,n;
	cout<<"Enter the number of element:";
    cin>>n;
    int A[10000];
    cout<<"Enter the array elements:-"<<endl;
    for(i=0;i<n;i++)
    cin>>A[i];	  
    heap_sort(A,n);
    	play(A,n);

    char ch='y';

    cout<<"\nWant to add more elements ?\n";
    while(ch=='y'||ch=='Y')
    {
	cin>>ch; if(ch!='y') break;	
    int x;
    cout<<"How many elements to add ?\n"; cin>>x;
    cout<<"Enter the elements\n";
    for(i=n;i<n+x;i++) cin>>A[i];
    n=n+x; cout<<"The array is ";
    for(i=0;i<n;i++) 
    cout<<A[i]<<" ";
    cout<<endl;
    heap_sort(A,n);
    play(A,n);
    cout<<"\nWant to add more elements ?\n";
    
    }
    
}


