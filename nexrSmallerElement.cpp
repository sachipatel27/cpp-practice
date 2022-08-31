#include <iostream>
#include <stack>
using namespace std;

void nextGreater(int arr[], int n){
    stack <int> s;
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(s.empty()!=false && arr[i]<s.top())
        s.pop();
        int ns = s.empty() ? -1 : s.top();
        cout<<ns<<" ";
        s.push(arr[i]);
    }
    cout<<-1;
}

int main(){
    int arr[] = {4, 2, 1, 5, 3};
    int n = 5;
    nextGreater(arr,n);
    return 0;
}