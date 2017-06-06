#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char str[256];
char *ptr;
char str1[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char str2[256];
int  count=1;
int  charcount;
int  strcount;
int  intcount;
int  N;
int  i;
int  b;

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
   
   while(b<N){
   printf(">");
    fgets(str, 256, stdin);
    strcpy(str2,str);
    ptr = strtok(str, " \n");
    count =0;
    while(ptr != '\0'){
        count++;
        ptr = strtok('\0', " \n");
    }
    charcount = 0;
    for(i = 0; str[i]; i++){
        if(str[i] != ' '){
        charcount++;
        }
    }
            if(str2[0] == '\n' || str2[0] == ' '||count>2 ){
                printf("ERROR! Incorrect number of tokens found.\n");
                count=0;
                charcount = 0;
                
            }else if (charcount>66){
                    printf("ERROR! Input string too long.\n");
                    count = 0;
                    charcount=0;
            
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
  b++;
  }
 return 0;
 }
