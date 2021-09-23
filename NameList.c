#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int main()
{
 char *ptr[MAX];
char name[MAX];
int length;
printf(" Enter the Names to add the list \n");
printf("Enter the length of the list \n");
scanf("%d",length);
for(int i=0;i<length;i++)
{

gets(name);
ptr[i]=malloc(strlen(name));
free(ptr[i]);
strcat(ptr[i],name);


}
system("cls");
for(int i=0;i<length;i++)
{
   
printf("ptr[%d]: %s\n ",i,ptr[i]);


       
}

return 0;    

    
    
    
}