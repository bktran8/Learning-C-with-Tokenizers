#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[256];
    char *ptr;
    char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int  count=1;
    int  charcount = 0;
    int  b=0;
    int  d=0;
    
    printf("Assignment #1-4, Brenda Tran, bktran8@gmail.com\n");
    
    for(;;){
    printf(">");
    fgets(str, 21, stdin);
        while(str[b]){
            count = 1;
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
                fgets(str, 256, stdin);
                continue;
             }
             charcount = 0;
                while(str[d] != '\0'){
                    charcount++;
                    d++;
                }   
             charcount--;
                if (charcount>20){
                    printf("ERROR! Input string too long.\n");
                    printf(">");
                    fgets(str, 256, stdin);
                    continue;
                }
        }
    ptr = strtok(str, " \n");
    while (ptr != '\0'){
        if(strcasecmp(str, "quit") ==0){
            exit(1);
        }
    if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')){
        printf("STR ");
    }else if(*ptr >= '0' && *ptr <= '9'){
        if(strpbrk(ptr,str1)){ 
            printf("STR ");
        }else if(strchr(ptr,'.')){
            printf("STR "); 
        }else{
            printf("INT ");
        }
    }
    ptr = strtok('\0', " \n");
    }      
    printf("\n");  
    }
return 0; 
 }
