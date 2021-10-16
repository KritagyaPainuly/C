#include <stdio.h>

int main() {
   int v=0,c=0,ch,i=0;
   FILE *fp;
   fp = fopen("file.txt", "w"); 
   char para3[100];
   while (i<3){
     printf("\nEnter Paragraph %d: ",i+1);
     fgets(para3, 100, stdin);
     fputs (para3, fp) ;
     i++;
    }
   fclose(fp);
   fp = fopen("file.txt", "r");
   while((ch=fgetc(fp)) != EOF) 
   {
   	  if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') 
   	  	v++;
      else
       c++;      
   }
   printf("Number of consonant: %d vowels:  %d \n", c,v);
   fclose(fp);
   return 0;
}