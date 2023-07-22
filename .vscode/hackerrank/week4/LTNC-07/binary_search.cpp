#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int x, int left, int right){
    if(left>right){
        return -1;
    }
    int mid = (left+right)/2;
    if(x == a[mid]){
        return mid;
    }
    if( x> a[mid]) return binarysearch( a, x, mid+1, right);
    if(x<a[mid]) return binarysearch(a,x,left, mid -1);
}
int main(){
    int n;
    cout<<"Nhap do dai mang:"<<endl;
    cin>>n;
    int a[n],x;
    cin>>x;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int result = binarysearch(a,x, 0, n-1);
    cout<<result;


}