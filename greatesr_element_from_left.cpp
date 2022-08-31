#include <iostream>
#include <vector>
using namespace std;

int main(){
int flag;
vector <int> v {4, 3, 5, 2, 6,7,2,3,1,8};
for(int i=1;i<v.size();i++)
{
    for(int j=i-1;j>=0;j--){
        flag =0;
        if(v[i]>v[j]){
            flag = 1;          
        }
    }
    if(flag==1){
        cout<<i<<" ";
    }
}
return 0;
}