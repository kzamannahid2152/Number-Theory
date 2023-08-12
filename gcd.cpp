#include<bits/stdc++.h>
using namespace std;

int  gcd(int firstElement, int secondElement){
    if(firstElement==0){
        return secondElement;
    }

    if(secondElement==0){
        return firstElement;
    }

    while(firstElement != secondElement){
        if(firstElement  > secondElement){
            firstElement = firstElement - secondElement;
        }else{
            secondElement = secondElement - firstElement;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

    return 0;
}