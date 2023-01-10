#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    int s=1;
    for(int i=0;i< str.size();i++){
        if(str[i] == ','){
            str[i]=' ';
            s++;
        }
    }
    istringstream stream(str);
    vector<int> vec(s);
    for(int i=0;i<str.size();i++){
        stream>>vec[i];
    }
    return vec;
}



int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
