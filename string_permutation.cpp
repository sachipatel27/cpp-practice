#include <iostream>
using namespace std;
 void string_permutation(string s, int l, int h){
     if(l==h){
         cout<<s<<endl;
     }
     else{
         for(int i=l;i<h;i++){
             swap(s[l],s[i]);
             string_permutation(s,l+1,h);
             swap(s[l],s[i]);
         }
     }
 }

 int main(){
     string s = "ABC";
     int n = s.size();
     string_permutation(s,0,n);
     return 0;
 }