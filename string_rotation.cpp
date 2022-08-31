#include <iostream>
using namespace std;
bool check_rot(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    string temp = s1+s1;
    int n = temp.length();
    int m = s2.length();
    for(int i=0;i<n-m;i++){
        int flag=1;
        for(int j=0;j<m-1;j++){
            if(s2[j]!=temp[i+j]){
                flag =0;
                break;
            }
        }
        if(flag==1){
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "AaCDE";
    string s2 = "DEABC";
    if(check_rot(s1,s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}