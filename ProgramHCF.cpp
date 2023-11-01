/*Here we are trying to find the HCF of two numbers using Euclidian Algorithms */
#include <iostream>
using namespace std;

int main()
{
    int num1=84,num2=56;
    int Max=0,Min=0;
    if(num1>num2){
        Max=num1;
        Min=num2;
    }
    else{
        Max=num2;
        Min=num1;
    }
    int reminder=0;
    while(Min!=0){
        reminder=Max%Min;
        Max=Min;
        Min=reminder;
    }
    
    cout<<Max<<"\n";
}
