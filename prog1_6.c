#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char str[256];
char *ptr;
char *temp;
char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int  count=1;
int  charcount = 0;
int  b=0;
int  d=0;
int  strcount;
int  intcount;
int  N;
int  i=0;

int main(int argc, char *argv[]){
    printf("Assignment #1-6, Brenda Tran, bktran8@gmail.com\n");
    if(argc >=3 || argc == 0 || argc ==1){
        printf("ERROR! Program 6 accepts 1 command line argument.\n");
        return 0;
    }else if((atoi(argv[1])) == 0){
        printf("ERROR! Expected integer argument.\n");
        return 0;
    }
    int N = (atoi(argv[1]));
    
    while(i<=N){
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
                i++;
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
                    i++;
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
        i++;
        printf("ERROR! Expected STR INT.\n");
        }else if (intcount ==1 && strcount ==1){
            i++;
            printf("STR INT\n");
            continue;
        }
    if(intcount==1 && strcount ==0){
        i++;
        printf("ERROR! Expected STR.\n");
        }else if(intcount == 0 && strcount ==1){
            printf("STR\n");
        }else{ 
            continue;
     
        }
    }
    i++;
  }
 return 0;
 }
