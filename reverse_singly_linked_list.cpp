#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,long long int v){
    Node* newNode = new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print(Node* &head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

void reverse(Node* &head, Node *cur){
    if(cur->next==NULL){
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        long long int x;cin>>x;
        if(x==-1) break;
        insert_at_tail(head,tail,x);
    }
    reverse(head,head);
    print(head);
    return 0;
}