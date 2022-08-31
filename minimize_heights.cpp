#include <iostream>
using namespace std;

int minheight(int arr[],int k, int n){
    if(n==1){
        return 0;
    }
    int ans = arr[n-1] - arr[0];
    int small = arr[0]+k;
    int big = arr[n-1]+k;
    if(small>big){
        swap(small,big);
    }
    for(int i=1;i<n-1;i++){
        int sub = arr[i] - k;
        int add = arr[i] + k;
        if(sub>=small || add<=big){
            continue;
        }
        if(big-sub <= add-small)
        small = sub;
        else
        big=add;
    }
    return min(ans,big-small);
}

int main(){
    int arr[] = {3, 9, 12, 16, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = minheight(arr,3,n);
    cout<<x;
    return 0;
}