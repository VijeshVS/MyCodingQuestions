#include <iostream>

using namespace std;


int main(){
    int n = 4;

    // Input for question
    char arr[5] = {'b','d','d','c','a'};
    int ans = 0;

    for(int i = 0;i < n+1;i++){
        int k = arr[i] - 'a';
        ans = ans ^ (k+1) ;
    }

    for(int i = 1;i<=n;i++){
        ans = ans ^ i;
    }

    char ch = 'a' + ans - 1;
    
    cout<< ch; // ans 

}