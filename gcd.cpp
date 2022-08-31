#include <iostream>
using namespace std;
void printGCD(int a, int b){
    int res=1;
    int x = min(a,b);
    for(int i=1;i<=x;i++){
        if(a%i==0 && b%i==0)
        res = i;
    }
    cout<<res;
}

int main(){
    int a=12, b=28;
    printGCD(a,b);
    return 0;
    }