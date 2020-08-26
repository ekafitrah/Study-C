#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *nextPtr;
}*statNode;

void createNodeList(int n);
void displayList();
void createNode(int data, int pos);
int main()
{
   int n,num,pos;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    printf("\n Input data to insert in the middle of the list : ");
    scanf("%d", &num);
    printf(" Input the position to insert new node : \n" );
    scanf("%d", &pos);
    createNode(num, pos);
    displayList();
    return 0;

}
void createNode(int data, int pos){
    struct node *mainNode, *tmpNode;
    mainNode=(struct node*)calloc(1,sizeof(struct node));
    if(mainNode==NULL)printf("no memory is allocated");
    else{
        mainNode->data=data;
        mainNode->nextPtr=NULL;
        tmpNode=statNode; //head of node
        for(int i=2;i<=pos-1;i++){

            tmpNode=tmpNode->nextPtr;
            
        }
        mainNode->nextPtr=tmpNode->nextPtr;
        tmpNode->nextPtr=mainNode; 
    }
}

void createNodeList(int n){
    struct node *mainNode, *tmpNode;
    int data, i;
    statNode=(struct node*)calloc(1,sizeof(struct node));
    if(statNode==NULL)printf("no memory is allocated");
    else{
        //input data keyboar
        printf("input data node 1: ");
        scanf("%d",&data);
        statNode->data=data; //head of the Node
        statNode->nextPtr=NULL; //link address make NULL;
        tmpNode=statNode;
        for(i=2;i<=n;i++){
            mainNode=(struct node*)calloc(1,sizeof(struct node));
            if(mainNode==NULL)printf("no memory is allocated");
            else{
                printf("\ninput data node %d: ",i);
                scanf("%d",&data);
                mainNode->data=data;
                mainNode->nextPtr=NULL;
                //printf("\n%d %d %d,",tmpNode->data, tmpNode->nextPtr,tmpNode);
                tmpNode->nextPtr=mainNode;
                //printf("%d %d %d,",tmpNode->data, tmpNode->nextPtr,tmpNode);
                tmpNode=tmpNode->nextPtr;
                //printf("%d %d %d,",tmpNode->data, tmpNode->nextPtr,tmpNode);
            }
        }
    }
}
    
void displayList(){
    struct node *tmpNode;
    if(statNode==NULL)printf("no memory is allocated");
    else{
        tmpNode=statNode;
        while(tmpNode!=NULL){
            printf(" Data = %d\n", tmpNode->data);   // prints the data of current node
            tmpNode = tmpNode->nextPtr;                 // advances the position of current node
        }
    }
}
