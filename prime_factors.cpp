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

void primefactor(int n){
    int x;
    for(int i=2;i*i<=n;i++){
        if(isprime(i)){
        int x = i;
        while(n%x==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    }
    if(n>1)
    cout<<n<<" ";
}

int main(){
    int n = 24;
    primefactor(n);
    return 0;
}