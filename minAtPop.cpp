# include <iostream>
#include <stack>
using namespace std;
void getMin(int arr[], int n){
    stack <int> s;
    int min = arr[0];
    for(int i=0;i<n;i++){
        s.push(arr[i]);
        if(arr[i]<min)
        min = arr[i];
    }
    while(s.empty()!=false){
        cout<<min<<" ";
        s.pop();   
    }
}

int main(){
    int arr[] = {1, 6, 43, 1, 2, 0, 5};  
    int n =7;
    getMin(arr,n);
    return 0;   
}