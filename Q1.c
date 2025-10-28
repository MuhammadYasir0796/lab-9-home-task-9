#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
char* toBinary(int code);
int main(){
    srand(time(0));
    int max=100,min=10;
    int dNCode=10;
    int dCode[dNCode];
    char binaryCode[dNCode][33];
    bool isUnique=true;
    for(int i=0;i<dNCode;i++){
        isUnique=true;
        int random=(rand()%max)+min;
        for(int i=0;i<dNCode;i++){
            if(random==dCode[i]) isUnique=false;
        }
        if(!isUnique){ 
            i--;
            continue;
        }else{
            dCode[i]=random;
        }
    }
    printf("Random generated codes for %d employees are: \n",dNCode);
    for(int i=0;i<dNCode;i++){
        printf("%d ",dCode[i]);
    }
    for(int i=0;i<dNCode;i++){
        char *bin=toBinary(dCode[i]);
        //binaryCode[i][33]=*bin;
        strcpy(binaryCode[i],bin);
    }
    printf("\nThere binaries are: \n");
    for(int i=0;i<dNCode;i++){
        printf("The binary value of %d is %s\n",dCode[i],binaryCode[i]);
    }
    return 0;
}
char* toBinary(int code){
    static char binary[33];
    int i=0;
    while(code>0){
        binary[i]=(code%2)+'0';
        code /=2;
        i++;
    }
    binary[33]='\0';
    for(int j=0;j<(i/2);j++){
        char temp=binary[j];
        binary[j]=binary[i-j-1];
        binary[i-j-1]=temp;
    }
    return binary;
}