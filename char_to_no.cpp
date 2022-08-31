#include <iostream>
#include <cstring>
using namespace std;

void con_no(string s[], string ip){
    string op = "";
    int n = ip.length();
    for(int i=0;i<n;i++){
        if(ip[i]==' ')
        op = op + "";
        else{
            int pos = ip[i] - 'A';
            op = op + s[pos];
        }
    }
    cout<<op;
}

int main(){
    string s[] = {"2","22","222",
                "3","33","333",
                "4","44","444",
                "5","55","555",
                "6","66","666",
                "7","77","777","7777",
                "8","88","888",
                "9","99","999","9999"};
    string ip = "SACHI PATEL";
    con_no(s,ip);
    return 0;
}