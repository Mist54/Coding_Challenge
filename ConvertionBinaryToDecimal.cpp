/*this is the program to convert binary to decimal and vise varsa */

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
//function to convert Binary to decimal 
long long BinaryToDecimal(long long number){
    long long decimal=0,digit=0;
    long long base=1;
    while(number!=0){
        digit=number%10; // to get  last digit % 10 // Reverse technique 
        decimal=decimal+digit*base;
        number=number/10;
        base=base*2; /// base is multiplied by 2
    }
    return  decimal;
}
//function to convert Decimal to Binary
long long DemcimalToBinary(long long number){
    long long binary=0,reminder=0;
    long long base=1;
    while(number!=0){
        reminder=number%2;    /// reminder % 2 
        binary=binary+reminder*base;
        number=number/2;
        base=base*10; /// base is multiplied by 10 
        
    }
    return binary;
}

int main(){
    long long binary=10100;
    long long decimal=20;
    cout<<"Decimal value to : "<<binary<<" is "<<BinaryToDecimal(binary)<<endl;
    cout<<"binary value of :"<<decimal<<" is "<<DemcimalToBinary(decimal)<<endl;
    
}
