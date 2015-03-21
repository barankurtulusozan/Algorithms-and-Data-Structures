//Reading from a file
#include <stdio.h>
int main()
{
   int n;
   FILE *fptr;
   if ((fptr=fopen("C:\\program.txt","r"))==NULL){
       printf("Error! opening file");
       exit(1);         /* Program exits if file pointer returns NULL. */
   }
   fscanf(fptr,"%d",&n);
   printf("Value of n=%d",n); 
   fclose(fptr);   
   return 0;
}

//writing to a file
#include <stdio.h>
int main()
{
   int n;
   FILE *fptr;
   fptr=fopen("C:\\program.txt","w");
   if(fptr==NULL){
      printf("Error!");   
      exit(1);             
   }
   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);   
   fclose(fptr);
   return 0;
}