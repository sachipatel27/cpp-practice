#include <iostream>
using namespace std;

void largest_sum(int arr[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    if(sum>=0){
        cout<<sum;
    }
    else{
        cout<<-1;
    }

}

int main(){
    int arr[] = {1,2,2,3,6,7,-1,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    largest_sum(arr,n);
    return 0;
}