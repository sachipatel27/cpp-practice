#include <iostream>
using namespace std;
int main(){
    int arr[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        arr[arr[i]%n] = arr[arr[i]%n] + n;
        //cout<<arr[arr[i]%n]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr[i] >= n*2){
           cout<<i<<" ";
        }
    }
    return 0;
}