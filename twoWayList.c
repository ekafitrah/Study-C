#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *nextPtr;
    struct node *prePtr;
}*stNode, *enNode;

void doubleList(int n);
void displayList(int menu,int n);

int main(void){
    // Here your code !
    int n;
   
    stNode=NULL;
    enNode=NULL;
    
    printf("\n\n Doubly Linked List : Create and display a doubly linked list :\n");
	printf("-------------------------------------------------------------------\n");	   	

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    doubleList(n);
    displayList(1,n);
    displayList(2,n);
    
    return 0;
    
}

void doubleList(int n){
    int data;
    struct node *mainNode;
    stNode=(struct node*)calloc(1,sizeof(struct node));
    if(stNode==NULL)printf("no memory alocation");
    else{
        printf("input data for node 1 : ");
        scanf("%d",&data);
        stNode->data  =data;
        stNode->nextPtr=NULL;
        stNode->prePtr=NULL;
        enNode  = stNode;
        for(int i=2;i<=n;i++){
            mainNode=(struct node*)calloc(1,sizeof(struct node));
            printf("input data for node %d : ",i);
            scanf("%d",&data);
            mainNode->data=data;
            mainNode->nextPtr=NULL;
            mainNode->prePtr=enNode; // new node is linking with the previous node
            
            enNode->nextPtr=mainNode;   // previous node is linking with the new node
            enNode=mainNode;            // assign new node as last node
        }
    }
}

void displayList(int menu,int n){
    struct node *temp;
    if (menu==1){
        temp=stNode;
        printf("\n\n Data entered on the list are :\n");
        for(int i=1;i<=n;i++){
            printf("data at node %d : %d\n",i,temp->data);
            temp=temp->nextPtr;
        }
    }
    else if(menu==2){
        temp=enNode;
        printf("\n\n Data entered  from the end are :\n");
        for(int i=n;i>=1;i--){
            printf("data at node %d : %d\n",i,temp->data);
            temp=temp->prePtr;
        }
    }
}
