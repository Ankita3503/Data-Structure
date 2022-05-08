// singly linked list insertion at beginning
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
void insert_at_beginning(node **head ,int value )
{
    	//1. create a new node .
    	node* temp=NULL ;
    	temp=new node() ;
    	//2.insert at beg .
    	temp->data=value ;
    	temp->next=*head ;
        *head=temp;
}
 void print_linked_list(node* n)
 {
 	while(n!=NULL)
 	 {
 		cout<<n->data<<" ";
 		n=n->next;
	 }
 }

int main()
{
   node* head=NULL;
   node* second=NULL;
   node* third=NULL;
   node* four=NULL;
   node* five=NULL;
   
  
   
    head=new node();
    second=new node();
    third=new node();
    four=new node();
    five=new node();
    
    
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=four;
    
    four->data=4;
    four->next=five;
    
    
    five->data=5;
    five->next=NULL;
    
    insert_at_beginning(&head,10);
     insert_at_beginning(&head,20);
   	print_linked_list(head);
}
