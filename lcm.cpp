#include <iostream>
using namespace std;

void printlcm(int a, int b){
    int x = max(a,b);
    int res = x;
    for(int i=x; i<=a*b;i++){
        if(i%a==0 && i%b==0){
            res = i;
            break;
        }
    }
    cout<<res;
}

int main(){
    int a = 18 , b = 9;
    printlcm(a,b);
    return 0;
}