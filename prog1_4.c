#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[256];
    char *ptr;
    char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str2[256];
    int  count=1;
    int  charcount;
    int i;
    
    printf("Assignment #1-4, Brenda Tran, bktran8@gmail.com\n");
    
    for(;;){
    printf(">");
    fgets(str, 256, stdin);
    strcpy(str2,str);
    charcount = 0;
    i=0;
    while(str[i] != '\0'){
        for(i = 0; str[i]; i++){
        charcount++;
        }
    }
    charcount--;
    ptr = strtok(str, " \n");
    count =0;
    while(ptr != '\0'){
        count++;
        ptr = strtok('\0', " \n");
    }
            if(charcount>20){
                    printf("ERROR! Input string too long.\n");
                    count = 0;
                    charcount=0;
            }else if (str2[0] == '\n' || str2[0] == ' '||count>2 ){
                printf("ERROR! Incorrect number of tokens found.\n");
                count=0;
                charcount = 0;
            
            }else{
        ptr = strtok(str2, " \n");
        while (ptr != '\0'){
        if(strcasecmp(str, "quit") ==0 && count==1){
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
}
return 0;
   }
