#include <stdio.h>
int main()
{
   int *a,i,j,tmp,n;
    int vow=0;
    int conso=0;

   char inWord[50];
   char outWord[50];
   char *arr;
   char *rever;
   arr=inWord;
   rever=outWord;
   
 	printf("\n\n Pointer : Sort an array using pointer :\n"); 
	printf("--------------------------------------------\n");	   
   
   printf(" Input the number of elements to store in the array : ");
   //fgets(inWord,sizeof(inWord),stdin);
   scanf("%s",inWord);
    printf("%s\n",inWord);
  // a=(int*)calloc(n,sizeof(int));
   i=-1;
   while(*arr){
       if(*(arr)=='a'||*(arr)=='i'||*(arr)=='u'||*(arr)=='e'||*(arr)=='o')vow=vow+1;
       else conso=conso+1;
       arr++;
       i++;
   }
   printf("\nconso : %d, vowel : %d, wors size %d\n\n",vow,conso,sizeof(inWord));
   
   //reverse string
   while(i>=0){
       arr--;
       *rever=*arr;
       
       rever++;
       i--;
   }
  *rever='\0';
   printf("%s %s",rever,arr);

}
