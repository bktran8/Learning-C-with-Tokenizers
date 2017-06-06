#include <stdio.h>
#include <string.h>

int main(){
    char str[256];
    char *ptr;
    char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str2[256];
    int  count=1;
    int  b=0;
    
    printf("Assignment #1-3, Brenda Tran, bktran8@gmail.com\n");
    
    while(str[b]!= '\0'){
    printf(">");
    fgets(str, 66, stdin);
    strcpy(str2,str);
    ptr = strtok(str, " \n");
    while(ptr != '\0'){
        count++;
        ptr = strtok('\0', " \n");
    }
            if(str2[0] == '\n' || str2[0] == ' '||count>2 ){
                printf("ERROR! Incorrect number of tokens found.\n");
                count=0;
        }else{
        ptr = strtok(str2, " \n");
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
}
   }
