#include <iostream>
#include <forward_list>
using namespace std;
int main(){
    forward_list <int> l;
    l.assign({1,2,3,4,5});
    int n =5;
    l.reverse();
    for(auto x:l)
    cout<<x<<" ";
    return 0;
}