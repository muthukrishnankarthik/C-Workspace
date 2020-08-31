/*Program:
 Reversing a string from command line through singly linked list
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node{
   char c;
   struct node *next;
}*string;

void printList(struct node *ptr)
{
    if(ptr==NULL)
        return;
    else
        printList(ptr->next);
    printf("%c  ",ptr->c);
}

int main(int argc, char *argv[])
{   struct node *ptr;
   int i,len;
   if(argc>=1)
   {
       len=strlen(argv[1]);
       
       string=(struct node*)malloc(len*sizeof(struct node));
       for(i=0;i<len;i++)
           {
               string[i].c=argv[1][i];
               if(i==len-1)
               {
                   string[i].next=NULL;
                   
               }
               else
              {
                   
                   string[i].next=&string[i+1];
              }
           }
   }
   printf("output :");
   printList(string);
   return 0;
}