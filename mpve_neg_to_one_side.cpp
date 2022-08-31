#include <iostream>
using namespace std;
 void movenum(int arr[],int n){
     int j=0;
     for(int i=0;i<n;i++){
         if(arr[i]<0){
             if(j!=i){
                 swap(arr[i],arr[j]);
             }
             j++;
         }
     }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
 }

 int main(){
     int arr[] = {-5,3,4,5,-1,-2,-3};
     int n = sizeof(arr)/sizeof(arr[0]);
     movenum(arr,n);
     return 0;
 }