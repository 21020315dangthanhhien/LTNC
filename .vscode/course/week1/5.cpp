#include<iostream>
#include<iomanip>
using namespace std;
const int n = 51;
const int m = 51;
char a[n][m];
bool checkWin(char ch){
    //1. kiem tra cot
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<m;j++){
            if(a[i][j]==ch){
                count++;
                if(count==5) return true;
            }else{
                count=0;
            }
        }
    }
    //2. kiem tra hang
    for(int j=0;j<m;j++){
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i][j]==ch){
                count++;
                if(count==5) return true;
            }else{
                count=0;
            }
        }
    }
    //3. kiem tra duong cheo
    for(int k=0;k<2*n-1;k++){
        int count = 0;
        for(int i=0;i<n;i++){
            int j=k-i;
            if(j>=0 && j<m && a[i][j]==ch){
                count++;
                if(count==5) return true;
            }else{
                count=0;
            }
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            cin >> a[i][j];
        }
    }
   
    if (checkWin('X')) {
        cout << "-1" << endl;
        return 0;
    }
    if (checkWin('O')) {
        cout << "1" << endl;
        return 0;
    }
    cout << "0" << endl;
    return 0;
}