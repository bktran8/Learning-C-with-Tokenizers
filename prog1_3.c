#include <stdio.h>
#include <string.h>

int main(void){
    char str[66];
    char *ptr;
    int  count=1, b=0;
    
    printf("Assignment #1-1, Brenda Tran, bktran8@gmail.com\n");
    printf(">");
    fgets(str, 66, stdin);
    
    while(str[b]){
        while(str[b] != '\0') {
            if(str[b] == ' ' || str[b] == '\n'){
                count++;
            }
            b++;
        }
        count--;
            if(count>2){
                printf("ERROR! Incorrect number of tokens found.\n");
                printf(">");
                fgets(str, 66, stdin);
                continue;
        }
    }
    ptr = strtok(str, " \n");
    while (ptr != '\0'){
        if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'B')){
            printf("STR ");
        }else if(*ptr >= '0' && *ptr <= '9'){
            printf("INT ");
        }
        ptr = strtok('\0', " \n");
        
    }   
   printf("\n");
   return 0;  
 }
