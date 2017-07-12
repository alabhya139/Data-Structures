#include<iostream>
#include<string>
#include"../LinkedList.h"
using namespace std;

int main()
{
    Node *head=NULL;
    int data,position;
    char choice;
    char choice1;
    string choice2;
    cout<<"                            Welcome Friend, Here you can do insertion in linked list"<<endl;
    cout<<"************************************************************************************************************************\n"<<endl;
    cout<<"Do you want to insert or delete anything(Yes or No):";
    cin>>choice2;
    cout<<endl;
    if(choice2=="no")
    {
        goto en;
    }
    while(choice2!="no"||choice2!="No"||choice2!="NO")
    {
        cout<<"What you want to perform(Insert or Delete or Exit), Press i for Insert, d for Delete x for exit():";
        cin>>choice1;
        cout<<endl;
        switch(choice1)
        {
        case 'i' : {
                   start: cout<<"Where you want to insert(Beginning(Press b) or Elsewhere(Press e):";
                    cin>>choice;
                    switch(choice)
                       {
                       case 'b' :
                           cout<<"Enter Data to insert:";
                           cin>>data;
                           insert_at_beggining(&head,data);
                           break;
                       case 'e' :
                           cout<<"Enter the position where you want to insert:";
                           cin>>position;
                           cout<<endl;
                           cout<<"Enter the Data you want to insert:";
                           cin>>data;
                           insert_after(&head,position,data);
                           break;
                    }
                    cout<<"Want to insert some more data(Yes or No):";
                    cin>>choice2;
                    cout<<endl;
                    if(choice2=="no"||choice2=="NO"||choice2=="No")
                        {
                           cout<<"Do you want to delete any item:";
                           cin>>choice2;
                           cout<<endl;
                           if(choice2=="yes")
                           {
                               goto start1;
                           }
                        }
                    else goto start;
                  }
         case 'd' : {
                     start1:
                     cout<<"Enter the position you want to perform delete on:";
                     cin>>position;
                     cout<<endl;
                     delete_node(&head,position);
                     cout<<"Want to delete more:";
                     cin>>choice2;
                     if(choice2=="yes")
                     {
                         goto start1;
                     }
                     break;
                   }
         case 'x' : goto en;
         default:    cout<<"Invalid response, Try again!"<<endl;
        }
    }
    en:
    cout<<"The Elements in the linked list are as follows:"<<endl;
    traverse_ll(head);
}
