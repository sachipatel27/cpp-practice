#include <iostream>
using namespace std;
void maxmin(int arr[],int n ){
    int max=arr[0], min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"max = "<<max<<" min = "<<min;
}


int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxmin(arr,n);
    return 0;
}