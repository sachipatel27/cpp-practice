#include <iostream>
using namespace std;

void countDig(int n){
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count;
}

int main(){
    int n = 30045;
    countDig(n);
    return 0;
}