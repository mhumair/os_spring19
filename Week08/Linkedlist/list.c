#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
        int value;
        struct Node *next;
        struct Node *prev;
}node;

node *head = NULL;

void list_Creater(int value)
{
        node *newnode  = malloc(sizeof(node));
        newnode->value = value;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        
}
void print()
{
    node *temp = head;
    while(temp !=NULL)
    {
        printf("The value is %d\n",temp->value);
        if(temp->next==NULL)
        {
            return;
        }
        
        temp=temp->next;
    }
}
int main(int argc, char *argv[])
{
        list_Creater(1);
        list_Creater(2);
        list_Creater(3);
        list_Creater(4);
        print();
        return 0;
}
