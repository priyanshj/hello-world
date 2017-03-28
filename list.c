#include<stdio.h>
#include<stdlib.h>
#include"list.h"

struct node* head=NULL;

void insert_front(int x)
{
struct node* temp = (struct node*)malloc(sizeof(struct node*));
temp->data=x;
temp->next=head;
head=temp;
}



void insert_rear(int x)
{
struct node* temp = (struct node*)malloc(sizeof(struct node*));

temp=head;
 
 while(temp->next != NULL)
  {
   temp=temp->next;
  }
  temp->data=x;
  temp->next=NULL;
//  head=temp;
}


void print()
{
 struct node* temp;
 temp=head;
// printf("%d\n",temp->data);
 
 while(temp->next != NULL)
 {
  printf("%d\n",temp->data);
  temp=temp->next; 
 }
  printf("%d\n",temp->data);
}


void search(int x)
{
 struct node* temp;
 temp=head;
 
 while(temp->next != NULL)
 {
  temp=temp->next;
   if(temp->data == x)
   {
    printf("yes\n");
    break;
   }
 }

}

