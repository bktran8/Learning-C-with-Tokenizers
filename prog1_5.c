#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char str[256];
    char *ptr;
    int  count=1, b=0, d=0, strcount = 0, intcount = 0;
    
    printf("Assignment #1-5, Brenda Tran, bktran8@gmail.com\n");
    for(;;){
    printf(">");
    fgets(str, 256, stdin);
    
    count=1;
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
                fgets(str, 256, stdin);
                continue;
        }
        count = 1;
            while(str[d] != '\0'){
                count++;
                d++;
            }   
            count--;
            if (count>65){
                printf("ERROR! Input string too long.\n");
                printf(">");
                fgets(str, 256, stdin);
                
         }
         continue;
    }
    intcount=0;
    strcount=0;
    ptr = strtok(str, " \n");
    while (ptr != '\0'){
        if(strcasecmp(str, "quit") ==0){
            exit(1);
        }
        while(ptr != '\0') {
        if((*ptr >= 'A' && *ptr <= 'Z')||(*ptr >= 'a' && *ptr <= 'z')){
            printf("STR ");
            strcount++;
        }else if(*ptr >= '0' && *ptr <= '9'){
            printf("INT ");
            intcount++;
        }
        ptr = strtok('\0', " \n");
        
    }
    printf("\n");
    if(strcount>=2 && intcount >=2 ||intcount>1 && strcount == 0 ){
            printf("ERROR! Expected STR INT.\n");
        }else if(intcount>0 && strcount ==0){
            printf("ERROR! Expected STR.\n");
    }
     
}
    continue;
 }
 return 0;
 }