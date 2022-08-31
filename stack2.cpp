#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void minele(int arr[], int n){
    vector <int> v;
    stack <int> s;
    s.push(arr[0]);
    int min = arr[0];
    v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]<min)
            min = arr[i];
        while(s.empty()==false && s.top()>min)
            s.pop();
        
        int me = s.empty() ? min : s.top();
        v.push_back(me);
        s.push(arr[i]);
    }
    for(auto it = v.rbegin(); it!=v.rend();it++)
    cout<<(*it)<<" ";
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    minele(arr,n);
    return 0;
}