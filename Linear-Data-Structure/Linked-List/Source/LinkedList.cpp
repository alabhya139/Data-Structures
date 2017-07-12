#include<iostream>
#include "LinkedList.h"

using namespace std;

void insert_at_beggining(Node **head_ref,int data)
{
    Node *temp=new Node;
    temp->data=data;
    temp->next=*head_ref;
    *head_ref=temp;
}

void insert_after(Node **head_ref,int n,int data)
{
    if(n==0)
    {
        insert_at_beggining(head_ref,data);
    }
     Node* temp=*head_ref;
     Node *new_node=new Node;
     Node *prev_node=new_node;
     while(n--)
     {
         if(temp==NULL)
         {
             cout<<"ERROR:Out Of Range(OAR)!Try Again!"<<endl;
             return;
         }
         if(n==0)
         {
             prev_node=temp;
         }
         temp=temp->next;
         if(n==0)
         {
             new_node->data=data;
             new_node->next=temp;
             prev_node->next=new_node;

         }
     }
}

void delete_node(Node **head_ref ,int position)
{
    Node *temp=*head_ref;
    Node *prev_node=new Node;
    if(temp==NULL)
    {
        cout<<"The List Is Empty"<<endl;
    }
    if(position==0)
    {
        *head_ref=temp->next;
        delete temp;
    }
    while(position--)
    {
        if(position==0)
        {
            prev_node=temp;
            temp=temp->next;
            prev_node->next=temp->next;
            delete temp;
        }
    }
}

void traverse_ll(Node* head)
{
    if(head==NULL)
    {
        cout<<"Nothing to show!Insert something and Try Again!"<<endl;
    }
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
