#include <iostream>
using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 

int choc(int arr[], int n, int k){
    
    if(n==0 || k==0){
        return 0;
    }
    bubbleSort(arr,n);
    if(n<k){
        return -1;
    }
    int min_diff = INT_MAX;
    for(int i=0;i+k-1<n;i++){
        int diff = arr[i+k-1]-arr[i];
        if(diff<min_diff){
            min_diff = diff;
        }
    }
    return min_diff;
}

int main(){
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =5;
    int x = choc(arr,n,k);
    cout<<x;
    return 0;
}