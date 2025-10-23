 #include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* link;
}node;
node* insertPos(int val,int pos,node* head)
{
    int currPos=0;
    node* ptr1=head;
    node* ptr2=malloc(sizeof(node));
    ptr2->data=val;
    ptr2->link=NULL;
    // Insert at beginning
    if(pos==0)
    {
        ptr2->link=head;
        head=ptr2;
        printf("Inserted %d successfully at position %d.\n\n",val,pos);
        return head;
    }
    while(ptr1!=NULL && currPos<pos-1)
    {
        ptr1=ptr1->link;
        currPos++;
    }
    // Invalid position
    if(ptr1==NULL)
    {
        printf("INVALID POSITION.\nTRY AGAIN.\n\n");
        return head;
    }
    // Inserting at pos
    ptr2->link=ptr1->link;
    ptr1->link=ptr2;
    printf("Inserted %d successfully at position %d.\n\n",val,pos);
    return head;
}
void listPrinter(node* head)
{
    node* ptr=head;
    if(ptr==NULL)
    {
        printf("The linked list is empty.\n");
        return;
    }
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    int wish=1,val,pos;
     node* head=NULL;
     while(wish==1)
     {
         printf("Enter value you want to insert : ");
         scanf("%d",&val);
         printf("Enter the position at which you want to insert : ");
         scanf("%d",&pos);
         printf("OK! Inserting %d.......\n",val);
         head=insertPos(val,pos,head);
         printf("Want to insert another number?\n1.Yes(1)\n2.No(2)\n");
         scanf("%d",&wish);
         printf("Linked List : ");
         listPrinter(head);
         printf("\n");
     }
     
}
