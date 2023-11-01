/* Code for getiing HCF and LCM 
  Euclidean algorithm */
#include <bits/stdc++.h>
using namespace std;
int FindHCF(int a, int b) {
  int reminder=0;           
  while(b>0){        //Here first divide Max from Min and then set reminder to Min and Min to Max till the reminder or Min>0;
    reminder=a%b;
    a=b;
    b=reminder;
  }
  return b;
};
int FindLCM(int a, int b){
  return a*b/FindHCF(a,b);
}
int main(){
  int num1=40, num2=20;
  int Max=0,Min=0;
  (num1>num2)?(Max=num1,Min=num2):(Max=num2,Min=num1);
  cout<<"The HCF of Two Numbers "<<num1<<" and "<<num2<<" is "<<FindHCF(Max,Min)<<"\n";
  cout<<"The LCM of Two Numbers "<<num1<<" and "<<num2<<" is "<<FindLCM(Max,Min)<<"\n";
}
