#include <stdio.h>
#include <string.h>

int main(int argc, char**argv){
    char str[256];
    char *ptr;
  
    printf("Assignment #1-1, Brenda Tran, bktran8@gmail.com\n");
    fgets (str, 66, stdin);
    ptr = strtok(str, " \n");
    
    while (ptr != '\0'){
        printf("=%s=\n",ptr);
        ptr = strtok('\0', " \n");
    } 
      
   return 0;
        
}

