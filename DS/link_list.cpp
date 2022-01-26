#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;

struct node{

    int data;  //data part
    node *next; // address part

};

Node *create_node(int data,Node *next){

    Node *temp=(Node *)malloc(sizeof(Node));

    if(temp==NULL)
        cout<<"Error in memory allocation"<<endl;

    temp->data=data;
    temp->next=next;

    return temp;

}

Node *prepend(int data,Node *head){

    Node *new_node=create_node(data,head);

    return new_node;

}

void print(Node* head){

    while(head->next!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main(){
    Node* head;
    int t,a;
    head=create_node(0,NULL); // empty node

    cout<<"How many data? ";
    cin>>t;
    cout<<"Input: "<<endl;

    for(int i=0;i<t;i++){
        cin>>a;
        head=prepend(a,head);
    }

    cout<<"Output: "<<endl;
    print(head);


	return 0;
}
