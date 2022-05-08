//singly linked list creation
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
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
    
   	print_linked_list(head);
}
