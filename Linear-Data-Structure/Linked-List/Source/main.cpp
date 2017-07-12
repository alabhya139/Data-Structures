#include<iostream>
#include<string>
#include"../LinkedList.h"
using namespace std;

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
