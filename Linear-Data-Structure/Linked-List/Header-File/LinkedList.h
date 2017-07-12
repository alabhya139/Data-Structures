#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

class Node{
public:
   int data;
   Node *next;
};
void insert_at_beggining(Node **head_ref,int data);

void insert_after(Node **head_ref,int n,int data);

void traverse_ll(Node* head);

#endif // LINKEDLIST_H_INCLUDED
