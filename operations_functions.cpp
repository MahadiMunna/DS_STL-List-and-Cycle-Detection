#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,50,10,30,20,20,60,10,40,30};
    myList.remove(10);//remove all
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.sort();//sort in accending order
    // myList.sort(greater<int>());//sort in decending order
    cout<<endl<<"After sort"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.unique();//if sorted then can find unique value and complexity O(N) else NlogN
    cout<<endl<<"After unique sort"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.reverse();//make reverse of the list
    cout<<endl<<"After reverse"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }

    return 0;
}