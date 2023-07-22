#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arraySize=0;
    cin>>arraySize;
    vector<int> v(arraySize);
    for(int i=0; i<arraySize; i++)
        cin>>v[i];
    
    int querryCount ; 
    cin>>querryCount;
    int temp;
    vector<int> :: iterator p;
    for(int i=0; i<querryCount; i++) {
        cin>>temp;
         p = lower_bound(v.begin(),v.end(), temp);
        int it = p - v.begin();
        if(v[it] == temp)
            cout<<"Yes "<< it + 1<<endl;
            
        else
            cout<<"No "<<it + 1<<endl;
     
    }
    
    return 0;
   
}
