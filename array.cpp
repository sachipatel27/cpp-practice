#include <iostream>
using namespace std;
 void sortit(int arr[],int n){
     int c0=0, c1=0, c2=0;
     for(int i=0;i<n;i++){
         if(arr[i]==0){
             c0++;
         }
         else if(arr[i]==1){
             c1++;
         }
         else {
             c2++;
         }
     }
     for(int i=0;i<c0;i++)
     cout<<0<<" ";
     for(int i=0;i<c1;i++)
     cout<<1<<" ";
     for(int i=0;i<c2;i++)
     cout<<2<<" ";
 }

 int main(){
     int arr[] = {1,0,0,2,2,1,1,0,2,1,2};
     int n  = sizeof(arr)/sizeof(arr[0]); 
     sortit(arr,n);
     return 0;
}