#include <stdio.h>
#include <string.h>

int main(){
    char str[256];
    char *ptr;
    char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    printf("Assignment #1-2, Brenda Tran, bktran8@gmail.com\n");
    printf(">");
    fgets (str, 66, stdin);
    ptr = strtok(str, " \n");
    
    while (ptr != '\0'){
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
    return 0;
}

