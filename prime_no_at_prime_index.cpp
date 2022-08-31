#include <iostream>
#include <vector>
#include <utility>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

void primeatprime(int arr[], int n){
    int flag;
    for(int i=0;i<n;i++){
        
    }
    for(int i=1;i<n;i++){
        flag =0;
        if(isprime(i)){
            if(isprime(arr[i])){
            flag=1;}
        }
        if(flag==1){
            cout<<arr[i]<<" "<<i;
            cout<<endl;
        }
    }

}

int main(){
    int arr[] = {1,2,3,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    primeatprime(arr,n);
    return 0;
}
