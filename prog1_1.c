#include <stdio.h>
#include <string.h>

int main(void){
    char str[66];
    char *ptr;
  
    printf("Assignment #1-1, Brenda Tran, bktran8@gmail.com\n");
    fgets (str, 66, stdin);
    
    ptr = strtok(str, " \n");
    while (ptr != NULL){
        printf("=%s=\n",ptr);
        ptr = strtok(NULL, " \n");
    }   
   return 0;
        
}

