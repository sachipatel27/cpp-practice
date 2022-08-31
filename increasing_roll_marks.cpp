#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void sortinc(int roll[], int marks[], int id[], int n){
    vector <pair<int, pair<int,int>>> v;
    for(int i=0;i<n;i++){
        v[i].first = roll[i];
        v[i].second.first = marks[i];
        v[i].second.second = id[i];
    }
    sort(v.begin(),v.end());
    for(auto x :v){
        cout<<x.first<<" "<<x.second.first<<" "<<x.second.second;
        cout<<endl;
    }
}

int main(){
    int roll[] {1,2,1,2};
    int marks[] = {3,4,4,4};
    int id[] = {1,3,2,4};
    int n = sizeof(roll)/sizeof(roll[0]);
    sortinc(roll,marks,id,n);
    return 0;
}