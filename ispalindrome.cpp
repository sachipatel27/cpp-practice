#include <iostream>
using namespace std;
void isPalindrome(int n){
    int temp =n;
    int rev = 0;
    while(temp!=0){
        int lastdig = temp%10;
        rev = (rev*10) + lastdig;
        temp = temp/10;
    }
    cout<<rev<<"  ";
    if(n == rev){
        cout<<"yes";
    }
    else{
        cout<<"No";  }
}
int main(){
    int n = 7667;
    isPalindrome(n);
    return 0;
}