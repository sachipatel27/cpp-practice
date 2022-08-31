#include <iostream>
using namespace std;

int main(){
    string s = "aabbbb";
    int count = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count+=1;
        }
    }
    cout<<count;
}