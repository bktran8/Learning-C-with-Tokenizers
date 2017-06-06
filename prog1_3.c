#include <stdio.h>
#include <string.h>

int main(){
    char str[256];
    char *ptr;
    char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int  count=1;
    int  b=0;
    
    printf("Assignment #1-3, Brenda Tran, bktran8@gmail.com\n");
    
    while(str[b]!= '\0'){
    printf(">");
    fgets(str, 66, stdin);
        if (str[0] == '\n'){
            printf("ERROR! Incorrect number of tokens found.\n");
                continue;
        }
        if(str[0] == ' '){
            printf("ERROR! Incorrect number of tokens found.\n");
                continue;
        } 
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
                fgets(str, 66, stdin);
                continue;
        }
    }
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
