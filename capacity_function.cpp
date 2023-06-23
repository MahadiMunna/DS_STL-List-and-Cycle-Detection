#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {1,2,3,4};
    // cout<<myList.max_size();
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl;
    // myList.clear();//remove all value
    // myList.resize(2);//will be 2 value only
    myList.resize(2);
    myList.resize(6,10);//rest of the value will be 10 
    for(int val:myList){
        cout<<val<<" ";
    }
    cout<<endl<<myList.empty();//return true/false
    return 0;
}