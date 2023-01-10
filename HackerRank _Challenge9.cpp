#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    char temp;
    cin>>a>>b;
    cout<<a.size()<<' '<<b.size()<<"\n";
    cout<<a+b<<"\n";
    temp=a.front();
    a.front()=b.front();
    b.front()=temp;
    cout<<a<<' '<<b<<"\n";
  
    return 0;
}
