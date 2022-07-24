
/* Program which returns substring address if prsent in a parent string, else returns NULL*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void* substrptr(char s1[], char s2[]){
    char *p1, *p2, *p3;
    bool flag = false;
    
    p1 = s1;
    p2 = s2;

    for(int i = 0; i < strlen(s1); i++){
        if(*p1 == *p2){
            p3 = p1;
            for(int j = 0; j < strlen(s2); j++){
                if(*p3 == *p2){
                    p3++;
                    p2++;
                    flag = true;
                }   
                else{
                    flag = false;
                    break;
                }
            }
            p2 = s2;
            if(flag == true)
                return p1;
        }
        p1++;
    }
    if(!flag)
        return NULL;
}

int main(){
    char s1[20];
    char s2[20];

    printf("Enter the string : ");
    scanf("%s", s1);

    printf("Enter the substring : ");
    scanf("%s", s2);

    printf("The address of substring is : %d\n", substrptr(s1, s2));
}