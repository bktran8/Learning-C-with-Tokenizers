#include <stdio.h>
#include <string.h>

int main(void){
    char str[66];
    char *ptr;
    int num;
    int let;
    
    printf("Assignment #1-2, Brenda Tran, bktran8@gmail.com\n");
    
    printf(">");
    fgets(str, 66, stdin);
   
    ptr = strtok(str, " \n");
    while (ptr != '\0'){
    num = 0;
    let = 0;
        if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')){
            let++;
            //printf("STR ");
        }else if(*ptr >= '0' && *ptr <= '9'){
            num++;
            //printf("INT ");
        
        }
        if(num>let){
            printf("INT ");
        }else{
            printf("STR ");
        }
  
        ptr = strtok('\0', " \n");
    }   
   printf("\n");
   return 0;
}

