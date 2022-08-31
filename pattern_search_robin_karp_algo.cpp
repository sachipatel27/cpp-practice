#include <iostream>
#include <cstring>
using namespace std;

void pattern_search(char *s1, char *s2){
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int i, j;
    for(i=0;i<=n1-n2;i++){
        for(j=0;j<n2;j++)
            if(s1[i+j]!=s2[j])
            break;
        if(j==n2)
            cout<<"pattern at "<<i<<endl;
        
    } 
}

int main(){
    char s1[] = "AABAACAADAABAAABAA";
    char s2[] = "ABAA";
    pattern_search(s1,s2);
    return 0;
}