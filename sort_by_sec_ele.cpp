#include <iostream>
#include <vector>
#include <utility>
#include<algorithm>
using namespace std;

void sortrev(int age[], float height[], int n){
    vector <pair<int,float>> v;
    for(int i=0;i<n;i++)
    v.push_back({height[i],age[i]});
    sort(v.begin(),v.end(),greater<pair<int,float>>());
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" "<<v[i].first;
        cout<<endl;
    }
}

int main(){
    int age[] = {12,28,21,25,45};
    float height[] = {5,6,5.5,5.7,5.9};
    int n = sizeof(age)/sizeof(age[0]);
    sortrev(age,height,n);
    return 0;
}