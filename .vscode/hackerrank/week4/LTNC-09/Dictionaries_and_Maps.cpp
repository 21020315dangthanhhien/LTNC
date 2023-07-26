#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
struct person{
    string name;
    string numberPhone;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   map<string, string> phonebook;
    int n;
    cin>>n;
    string name,phone;
    for(int i=0; i<n; i++){
        string name, phone;
        cin>>name>>phone;
        phonebook[name]= phone;
    }
    while(cin>>name){
      
        if(phonebook.find(name)!=phonebook.end())
        cout<<name<<"="<<phonebook[name]<<endl;
        else cout<<"Not found"<<endl;
    
    }
    
    return 0;
}