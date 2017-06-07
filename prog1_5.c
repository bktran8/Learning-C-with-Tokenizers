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
    int  i;
    int  strcount;
    int  intcount;
 
    printf("Assignment #1-5, Brenda Tran, bktran8@gmail.com\n");
    
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
            if(charcount>65){
                    printf("ERROR! Input string too long.\n");
                    count = 0;
                    charcount=0;
            }else if (str2[0] == '\n' || str2[0] == ' '||count>2 ){
                printf("ERROR! Incorrect number of tokens found.\n");
                count=0;
                charcount = 0;
            
            }else{
    intcount=0;
    strcount=0;
    ptr = strtok(str2, " \n");
    while (ptr != '\0'){
        if(strcasecmp(ptr, "quit") ==0 && count ==1){
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
 }
 return 0;
 }
