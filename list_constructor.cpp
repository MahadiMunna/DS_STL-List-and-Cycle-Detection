#include <bits/stdc++.h>
using namespace std;

int main(){
    // list <int> myList;//1
    // list<int> myList(10,5);//2
    // list<int> list2={1,2,3,4,5,6};//3
    // list<int> myList(list2);
    // int a[5]={1,2,3,4,5};//4
    // list<int> myList(a,a+5);
    vector<int> v = {1,2,3,4,5};//5
    list<int> myList(v.begin(),v.end());
    // for(auto it=myList.begin();it!=myList.end();it++){//when you need pointer use this ,else shortcut loop
    //     cout<<*it<<endl;
    // }
    for(int val:myList){
        cout<<val<<endl;
    }
    return 0;
}