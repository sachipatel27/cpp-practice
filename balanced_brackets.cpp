#include <bits/stdc++.h>
using namespace std;

bool bal_brackets(string s){
    stack <char> s1;
    char x;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            s1.push(s[i]);
            continue;
        }
        if(s1.empty()){
            return false;
        }
        switch(s[i]){
            case ')' :
            x = s1.top();
            s1.pop();
            if(x=='{' || x=='[')
            return false;
            break;
        }
        switch(s[i]){
            case '}' :
            x = s1.top();
            s1.pop();
            if(x=='(' || x=='[')
            return false;
            break;
        }
        switch(s[i]){
            case ']' :
            x = s1.top();
            s1.pop();
            if(x=='(' || x=='{')
            return false;
            break;
        }
    }
    return (s1.empty());
}

int main(){
    string s = "{()}[]";
    if(bal_brackets(s))
    cout<<"Balanced";
    else
    cout<<"Not balanced";
    return 0;
}