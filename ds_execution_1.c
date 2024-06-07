#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node *next;
};
int main(){
struct node *node1=(struct node*)malloc(sizeof(struct node));
struct node *node2=(struct node*)malloc(sizeof(struct node));
struct node *node3=(struct node*)malloc(sizeof(struct node));
struct node *node4=(struct node*)malloc(sizeof(struct node));
struct node *node5=(struct node*)malloc(sizeof(struct node));
struct node *head=node1;
node1->data='R';
node2->data='G';
node3->data='U';
node4->data='K';
node5->data='T';
node1->next=node2;
node2->next=node3;
node3->next=node4;
node4->next=node5;
node5->next=node1;
printf("Circular linked list :");
struct node *temp=head;
do
{
    printf("%c->",temp->data);
    temp=temp->next;
}
while(temp!=head);
}