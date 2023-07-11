#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b){
    if(a>b) return a;
    else return b;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(max_of_four(a, b), max_of_four(c, d));
    printf("%d", ans);
    
    return 0;
}
