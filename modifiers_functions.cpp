#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {1,2,3};
    list<int> newList;
    // myList = newList;//1
    newList.assign(myList.begin(),myList.end());//2
    cout<<endl<<"assign with assign function"<<endl;
    for(int val:newList){
        cout<<val<<" ";
    }
    myList.push_back(10);
    cout<<endl<<"after push_back"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.pop_back();
    // myList.pop_front();
    // myList.pop_front();
    cout<<endl<<"after pop_back"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.insert(next(myList.begin(),2),{100,200,300});
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());//List insert
    cout<<endl<<"after insert"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    cout<<endl<<"after erase"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    replace(myList.begin(),myList.end(),3,100);
    cout<<endl<<"after replace"<<endl;
    for(int val:myList){
        cout<<val<<" ";
    }
    auto it = find(myList.begin(),myList.end(),2);
    if(it==myList.end()){
        cout<<"Not Found"<<endl;
    }
    else cout<<"Found"<<endl;
    return 0;
}