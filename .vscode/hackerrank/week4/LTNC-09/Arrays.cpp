#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s[10000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=n-1; i>=0; i--){
        cout<<s[i]<<" ";
    }
}