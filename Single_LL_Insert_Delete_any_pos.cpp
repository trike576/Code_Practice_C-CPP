#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node* link;
}node;

// To print list
void listPrinter(node* head)
{
printf("Linked list : ");
node* ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->link;
}
printf("\n");
}

// To delete any node of the list
void deletePos(node** head,int pos)
{
    // Empty linked list
    if(*head==NULL)
    {
        printf("The linked list is already empty.\n");
        return;
    }
    node* prev=*head;
    node* curr=*head;
    // Delete first node
    if(pos==1)
    {
        *head=curr->link;
        free(curr);
        curr=NULL;
    }
    // Delete any node other than first
    else
    {
        while(pos!=1 && curr->link!=NULL)
        {
            prev=curr;
            curr=curr->link;
            pos--;
        }
        if(pos!=1)
        {
            printf("INVALID POSITION. TRY AGAIN.\n");
            return;
        }
        prev->link=curr->link;
        free(curr);
        curr=NULL;
        
    }
}

// To insert new node at any position in the list
void insertPos(node **head,int pos,int val)
{
    int currPos=1;
    node* ptr1=malloc(sizeof(node));
    node* ptr2=*head;
    ptr1->data=val;
    ptr1->link=NULL;
// Insertion at first position
    if(pos==1)
    {
        ptr1->link=*head;
        *head=ptr1;
    }
    else
    {
        while(ptr2!=NULL && currPos<pos-1)
        {
            ptr2=ptr2->link;
            currPos++;
        }
        if(currPos!=pos-1)
        {
            printf("INVALID POSITION. TRY AGAIN.\n");
            free(ptr1);
            return;
        }
        ptr1->link=ptr2->link;
        ptr2->link=ptr1;
    }
}

int main()
{
    node* head=NULL;
    insertPos(&head,1,1);
    insertPos(&head,2,2);
    insertPos(&head,3,3);
    insertPos(&head,4,4);
    insertPos(&head,3,100);
    listPrinter(head);
    deletePos(&head,1);
    deletePos(&head,1);
    deletePos(&head,1);
    deletePos(&head,1);
    deletePos(&head,1);
    listPrinter(head);
    
}
