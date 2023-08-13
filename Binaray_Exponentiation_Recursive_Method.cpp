#include<bits/stdc++.h>
using namespace std;

int Bin_expo_Recuresive(int a, int b){
    if(b==0) return 1;
    long long  res = Bin_expo_Recuresive(a,b/2);
    if(b&1){
        return a * res * res;
    }else{
        return res * res;
    }

}

int main(){
   
    int a=2, b=13;

    cout<<Bin_expo_Recuresive(a,b)<<endl;

    return 0;
}