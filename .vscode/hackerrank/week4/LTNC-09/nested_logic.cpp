#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1,m1,y1,fine;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;
    if((y1<y2)||(y1==y2&&m1==m2&&d1<d2)||(y1==y2&&m1<m2)||(y1==y2&&m1==m2&&d1==d2)) {
        fine =0;
    }
    
    if(y1==y2&&m1==m2&&d1>d2){
        fine = 15*(d1-d2);
    }
    if(y1==y2&&m1>m2){
        fine = 500*(m1-m2);
    }
    if(y1>y2){
        fine = 10000;
    }
    cout<<fine;
    return 0;
}
