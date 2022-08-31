#include <iostream>
using namespace std;

void uandi(int arr1[],int arr2[], int n1, int n2){
    int i = 0, j = 0, count=0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            count++;
        }
            
        else if (arr2[j] < arr1[i]){
            cout<<arr2[j]<<" ";
            j++;
            count++;
        }
           
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
            count++;
        }
    }
    while(i<n1){
        cout<<arr1[i]<<" ";
        i++;
        count++;
    }
    while(j<n2){
        cout<<arr2[j]<<" ";
        j++;
        count++;
    }
    cout<<endl;
    cout<<count;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,3,4,6,7,8,9};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    uandi(arr1,arr2,n1,n2);
    return 0;
}