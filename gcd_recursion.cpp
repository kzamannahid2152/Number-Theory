//without using recursion
#include<bits/stdc++.h>
using namespace std;

int  gcd(int firstElement, int secondElement){
    if(secondElement==0)
        return firstElement;
    return gcd(secondElement, firstElement%secondElement);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

    return 0;
}