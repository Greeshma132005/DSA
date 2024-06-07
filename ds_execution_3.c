#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
};
struct node *insertatbegin(struct node*head,char data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return head;
    }
    newnode->next=head;
    head=newnode;
    return head;
}
struct node *insertatend(struct node *head,char data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return head;
    }
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
struct node *deleteatbegin(struct node *head){
	struct node *temp=head;
	if(head==NULL)
	{
		printf("Linked list is empty\n");
		return NULL;
	}
	else{
		head=head->next;
		free(temp);
		return head;
	}
}
struct node *deleteatend(struct node *head){
	if(head==NULL){
		printf("LInked list is empty");
		return NULL;
	}
	else if(head->next==NULL){
		free(head);
		return head;
	}
	else{
		struct node *temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
		return head;
	}
}
void printlist(struct node* head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%c->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

int main(){
    struct node *head=NULL;
    printf("initial single linked list : NULL \n");
    head=insertatbegin(head,'U');
    head=insertatbegin(head,'G');
    head=insertatbegin(head,'R');
    printf("after insertion of three nodes at beginning \n");
    printlist(head);
    head=insertatend(head,'K');
    head=insertatend(head,'T');
    printf("after inserton of two nodes at ending \n");
    printlist(head);
    head=deleteatbegin(head);
    head=deleteatbegin(head);
    printf("after deleting two nodes at begin \n");
    printlist(head);
    head=deleteatend(head);
    head=deleteatend(head);
    printf("after deleting two nodes at endoing \n");
    printlist(head);  
}
