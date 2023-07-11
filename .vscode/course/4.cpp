#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    //since 0 and 1 is not prime return false.
    if(n==1||n==0) return false;
 
    //Run a loop from 2 to n/2.
    for(int i=2; i<=n/2; i++) {
          // if the number is divisible by i, then n is not a prime number.
          if(n%i==0) return false;
    }
    //otherwise, n is prime number.
    return true;
}
void outputPrime(int *a, int n){
    for (int i=0; i<n; i++){
     
        if(isPrime(a[i])) cout<< a[i]<<" ";
       
        
    }
    


