#include<iostream>
#include<string>
using namespace std;

class Node{
public:
   int data;
   Node *next;
};
template <class data_type>
void insert_at_beggining(Node **head_ref,data_type data)
{
    Node *temp=new Node;
    temp->data=data;
    temp->next=*head_ref;
    *head_ref=temp;
}

template<class data_type>
void insert_after(Node **head_ref,int n,data_type data)
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

int main()
{
    Node* head=NULL;
    int data,position;
    string choice;
    here:
    cout<<"                            Welcome Friend, Here you can do insertion in linked list"<<endl;
    cout<<"************************************************************************************************************************\n"<<endl;
    cout<<"Do you want to insert or delete anything(Yes or No):";
    cin>>choice;
    cout<<endl;
    if(choice=="no")
    {
        goto en;
    }
    while(choice!="no"||choice!="No"||choice!="NO")
    {
        if(choice=="Yes"||choice=="YES"||choice=="yes")
        {
                    cout<<"Where you want to insert(Beginning(beg) or Elsewhere(ew):";
                    cin>>choice;
               if(choice=="beg")
                    {
                        cout<<"Enter Data to insert:";
                        cin>>data;
                        insert_at_beggining(&head,data);
                    }
                else if(choice=="ew")
                    {
                        cout<<"Enter the position where you want to insert:";
                        cin>>position;
                        cout<<endl;
                        cout<<"Enter the Data you want to insert:";
                        cin>>data;
                        insert_after(&head,position,data);
                    }
                cout<<"Want to insert some more data(Yes or No):";
                cin>>choice;
                cout<<endl;
                if(choice=="no"||choice=="NO"||choice=="No")
                {
                    break;
                }
                else continue;
        }
    }
    cout<<"The Elements in the linked list are as follows:"<<endl;
    en:
    traverse_ll(head);
}
