#include <functional>
#include <queue>
#include <vector>
#include <iostream>
 
 using namespace std;
 
template<typename T> void print_queue(T& q) {
    while(!q.empty()) {
         cout << q.top() << " ";
        q.pop();
    }
     cout << '\n';
}
 
int main() {
     priority_queue<int> q;
 		int arr[10]={1,5,3,7,9,3,8,10,2,6};
    	for(int i=0;i<10;i++)
        q.push(arr[i]);
 
    print_queue(q);
 
     priority_queue<int,  vector<int>,  greater<int> > q2;
 
     	for(int i=0;i<10;i++)
        q2.push(arr[i]);
 
    print_queue(q2);
 
    // Using lambda to compare elements.
    int cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1);};
     priority_queue<int,  vector<int>, decltype(cmp)> q3(cmp);
 
     	for(int i=0;i<10;i++)
        q3.push(arr[i]);
 
    print_queue(q3);
 
}

/*Output:

9 8 7 6 5 4 3 2 1 0 
0 1 2 3 4 5 6 7 8 9 
8 9 6 7 4 5 2 3 0 1
*/
