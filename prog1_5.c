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
    int  strcount;
    int  intcount;
 
    printf("Assignment #1-5, Brenda Tran, bktran8@gmail.com\n");
    
    for(;;){
    printf(">");
    fgets(str, 66, stdin);
        while(str[b]){
            count=1;
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
    intcount=0;
    strcount=0;
    ptr = strtok(str, " \n");
    while (ptr != '\0'){
        if(strcasecmp(ptr, "quit") ==0){
            exit(1);
        }
        while(ptr != '\0') {
            if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')){
                strcount++;
            }else if(*ptr >= '0' && *ptr <= '9'){
                if(strpbrk(ptr,str1)){ 
                    strcount++;
                }else if(strchr(ptr,'.')){
                    strcount++;
                }else{
                    intcount++;
                }
            }
        ptr = strtok('\0', " \n");
        }
    if(intcount == 2 ||strcount == 2 ){
        printf("ERROR! Expected STR INT.\n");
        }else if (intcount ==1 && strcount ==1){
            printf("STR INT\n");
            continue;
        }
    if(intcount==1 && strcount ==0){
        printf("ERROR! Expected STR.\n");
        }else if(intcount == 0 && strcount ==1){
            printf("STR\n");
        }else{
            continue;
     
        }
    }
  }
 return 0;
 }
