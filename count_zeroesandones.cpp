#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "0100011101";
    int n = s.length();
    int c0=0, c1=0, count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
        c0++;
        else
        c1++;
        if(c0==c1)
        count++;
    }
    cout<<count;
    return 0;
}