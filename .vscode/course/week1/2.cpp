#include <iostream>
using namespace std;
int main(){
    long s =1;
    int n, a[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
       s = (s * a[i]) % 1307;
     }
    cout<<s;
  
}