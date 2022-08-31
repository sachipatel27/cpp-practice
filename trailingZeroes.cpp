#include <iostream>
using namespace std;
void traZeros(int n){
    int count = 0;
    for(int i=5;i<=n;i=i*5)
    count = count+n/i;
    cout<<"no of zeroes are "<<count;
}

int main(){
    int n = 200;
    traZeros(n);
    return 0;
}