#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    
    //UPPERCASE TO LOWERCASE
    char B = 'B';
    char F = B | ' '; // COMPARING OR WITH SPACE;
    cout<<F<<endl;

    //LOWERCASE TO UPPERCASE
    char b = 'b'; 
    char D = (b&'_'); //comparing AND with UNDERSCORE;
    cout<<D<<endl;

    return 0;
}
