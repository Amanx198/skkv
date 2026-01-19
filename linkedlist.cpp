// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;
//     node(int val){
//         data=val;
//         next=nullptr;
//     }
  
// };
//   void inseartathead(node*&head,int val){
//     node*temp= new node(val);
//     temp->next=head;
//     head=temp;
//     }
//     void printlist(node*head){
//         node*temp=head;
//         while(temp!=nullptr){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//         }
//         cout<<"nullptr"<<endl;
//         }
//         void inseartattail(node*&tail,int val){
//             node*temp=new node(val);
//             tail->next =temp;
//             tail=tail->next;

//         }
// int main()
// {
//  node*node1=new node(7);
//  cout<<node1->data<<"->";
//  cout<<node1->next<<endl;
//  node*head=node1;
//  printlist(head);
//  inseartathead(head,1);
//  printlist(head);
//  node*tail=node1;
//  inseartattail(tail,9);
//  printlist(head);
// }



//for single


// #include<iostream>
// using namespace std;

// class node{
// public:
// int data;
// node*next;
// node(int val){
//     data=val;
//     next=nullptr;
// }

// };

// int main(){
//     node*n1 =new node(7);
//     cout<<n1->data;
// }



//for array reverse order


// #include<iostream>
// using namespace std;

// class node{
// public:
// int data;
// node*next;
// node(int val){
//     data=val;
//     next=nullptr;
// }

// };

// int main(){
//     int arr[4]={2,4,6,3};
//     node*head;
//     head=nullptr;
//     for(int i=0;i<4;i++){
//     if(head==nullptr)
//     {
//         head=new node(arr[i]);

//     }
//     else
//     {
//         node*temp=new node(arr[i]);
//         temp->next=head;
//         head=temp;

//     }
//     }
//     node*temp=head;
//     while(temp!=0){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }


//array normal order
#include<iostream>
using namespace std;

class node{
public:
int data;
node*next;
node(int val){
    data=val;
    next=nullptr;
}

};

int main(){
    int arr[4]={2,4,6,3};
    node*head;
    head=nullptr;
    for(int i=0;i<4;i++){
    if(head==nullptr)
    {
        head=new node(arr[i]);

    }
    else
    {
        node*tail=head;
        // tail=NULL;
        while(tail->next!=nullptr){
            tail=tail->next;
        }
        tail->next=new node(arr[i]);
        // node*temp=new node(arr[i]);     //bad way
        // tail->next=temp;
        // tail=temp;
    }
    }
    node*temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
