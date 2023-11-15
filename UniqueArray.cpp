/* CODE TO COUNT AND PRINT DISTICNT OR UNQIUE ELEMENT IN ARRAY */


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,5};
    std::vector<int> stored;
    int len=sizeof(arr)/sizeof(arr[1]);
    int sorted[len];
    sort(arr,arr+len);
    int count=0,temp;
    for(int i=0;i<len;i++){
        temp=arr[i];
        if(arr[i+1]==temp){
            count++;
            temp=arr[i+1];
            
        }
        else{
            stored.push_back(temp);
        }
    }
    for(int i=0;i<stored.size();i++){
         cout<<stored[i];
    }
   
    
    
    

    return 0;
}
