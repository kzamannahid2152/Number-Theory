#include<bits/stdc++.h>
using namespace std;

int binary_Expo_Recur(int a, int b){
    if(b==0){
        return 1;
    }

    long long res = binary_Expo_Recur(a,b/2);
    if(b&0){ //b&0 means number will be odd //
        return res * res;
    }else{
        return a * res * res;
    }
}

int main(){

    int a, b;
    cin>>a>>b;

    int recursive_method = binary_Expo_Recur(a,b); //calling binary_Expo_Recur from main function
    cout<<recursive_method<<endl;

    return 0;
}