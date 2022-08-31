#include <iostream>
using namespace std;

bool isprime(int n){
    if(n==0 || n==1)
    return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

int main(){
    int n = 7;
    bool x = isprime(n);
    cout<<x;
    return 0;
}