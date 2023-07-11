#include <bits/stdc++.h>
using namespace std;

bool isEqualCaseInsensitive(string s1, string s2){
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    int x = s1.compare(s2);
    if (x != 0)
        return false;
    else
        return true;
}
