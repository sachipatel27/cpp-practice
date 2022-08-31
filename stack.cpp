#include <iostream>
#include <stack>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack <int> s;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}