#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> m;
    int q, type, score;//diemcong;
    cin>>q;
    string name;
 for(int i =0; i<q; i++){
        cin>>type>>name;
        if(type==1){
            
            cin>>score;
            m[name] += score;
        }else if(type==2){
           m[name] = 0;
        }else {
            
            if(m.find(name) != m.end() ){
            cout<<m[name]<<endl;}
            else {
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}



