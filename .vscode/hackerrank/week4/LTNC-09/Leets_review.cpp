#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int m;
     cin>> m;
for(int i = 0; i<m; i++){
        string s;
        cin>>s;
        int n = s.length();
        string v1 = "";
        string v2 = "";
    for(int j=0; j<n; j++){
        if(j%2==0) v1 += s[j];
        else v2 += s[j];
    }
     cout<<v1<<" "<<v2<<endl;
    }
  
    return 0;
}
