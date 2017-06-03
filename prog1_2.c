#include <stdio.h>
#include <string.h>

int main(void){
    char str[66];
    char *ptr;
    
    printf("Assignment #1-2, Brenda Tran, bktran8@gmail.com\n");
    
    printf(">");
    fgets(str, 66, stdin);
   
    ptr = strtok(str, " \n");
    while (ptr != '\0'){
        if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')){
            printf("STR ");
        } else if(*ptr >= '0' && *ptr <= '9'){
            printf("INT ");
        }
        ptr = strtok('\0', " \n");
    }   
   printf("\n");
   return 0;
}

