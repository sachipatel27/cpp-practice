#include <iostream>
using namespace std;

void sum_pair(int arr[], int n, int k){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                count++;
            }
        }
    }
    cout<<count;
}

int main(){
    int arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int k = 11;
    int n = sizeof(arr)/sizeof(arr[0]);
    sum_pair(arr,n,k);
    return 0;
}