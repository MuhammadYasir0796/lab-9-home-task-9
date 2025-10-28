#include <stdio.h>
#include <string.h>

int stringLength(char word[]);

int main(){
    char string[1024];
    printf("string: ");
    fgets(string,sizeof(string),stdin);
    string[stringLength(string)-1]='\0';
    int size=stringLength(string);
    printf("Size of string is: %d",size);
    return 0;
}
int stringLength(char string[]){
    int length=0;
    while(string[length] != '\0'){
        length++;
    }
    return length;
}