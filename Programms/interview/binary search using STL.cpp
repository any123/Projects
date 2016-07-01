#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int A[] = {5, 2, 6, 2, 2, 1, 1, 6, 3, 2};        
    vector <int> v(A, A + 10);            // v =  5, 2, 6, 2, 2, 1, 1, 6, 3, 2
    sort (v.begin(), v.end());                // v =  1, 1, 2, 2, 2, 2, 3, 5, 6, 6    
    vector <int>::iterator it;
    if(binary_search(v.begin(), v.end(), 2)) //u can also use v.begin() + 6 e.t.c
        cout << "2 is in the array" << endl;
    else
        cout << "2 is not in the array" << endl;
        
        return 0;
}
