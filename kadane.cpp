#include <iostream>
using namespace std;

void left_rotate(int arr[], int n){
    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
   
    }
void left_rec(int arr[], int n, int k){
    for(int i=0;i<k;i++){
        left_rotate(arr,n);
    }
}
    


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    left_rec(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}