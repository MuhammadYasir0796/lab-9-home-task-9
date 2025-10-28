#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int anagramChecker(char word1[],char word2[]);
int frequnecyOfChars(char word[], char Char,int sameLen);
int main(){
    char word1[20],word2[20];
    printf("Word 1: ");
    fgets(word1,sizeof(word1),stdin);
    word1[strlen(word1)-1]='\0';
    printf("Word 2: ");
    fgets(word2,sizeof(word2),stdin);
    word2[strlen(word2)-1]='\0';
    if(anagramChecker(word1,word2)){
        printf("The words are anagrams");
    }else{
        printf("The words are not anagrams");
    }
    return 0;
}
int anagramChecker(char word1[],char word2[]){
    int lenWord1=strlen(word1);
    int lenWord2=strlen(word2);
    if(lenWord1!=lenWord2) return 0;
    int sameChar=0;
    int sameLen=lenWord1;
    bool CharactersAreSame=true;
    for(int i=0;i<sameLen;i++){
        int frequencies1=frequnecyOfChars(word1,word1[i],sameLen);
        int frequencies2=frequnecyOfChars(word2,word1[i],sameLen);
        if(frequencies1!=frequencies2) CharactersAreSame=false;
    }
    if(!CharactersAreSame) return 0;
    for(int i=0;i<sameLen;i++){
        for(int j=0;j<sameLen;j++){
            if(word1[i]==word2[j]) sameChar++;
        }
    }
    if(sameChar==sameLen) return 1;
    else return 0;
}
int frequnecyOfChars(char word[], char Char,int sameLen){
    int freq=0;
    for(int i=0;i<sameLen;i++){
        if(word[i]==Char){
            freq++;
        }
    }
    return freq;
}