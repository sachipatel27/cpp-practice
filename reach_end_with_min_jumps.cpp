#include <iostream>
using namespace std;
int min_jumps(int arr[],int n){
    for(int i=0;i<n;i++){
        if(n==1){
            return 0;
        }
    int res = INT_MAX;
    
    }
}

int main(){
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = min_jumps(arr,n);
    return 0;
}