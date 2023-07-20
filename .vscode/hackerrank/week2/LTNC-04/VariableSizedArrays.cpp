#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<vector<int>> arrays; 
    int n,q, k, a;
    cin>>n>>q;
    for(int i=0; i<n; i++){
        cin>>k;
        vector<int> arr;
        for(int j=0; j<k; j++){
            cin>>a;
            arr.push_back(a);
        }
        arrays.push_back(arr);
    }
    for(int i=0; i<q; i++){
        int I,J;
        cin>>I>>J;
        cout<<arrays[I][J]<<endl;
    }
    
    return 0;
}