#include <stdio.h>
void swap(int *valL,int *valK);
int main(){
    int lahore[]={11, 22, 33, 44, 55};
    int karachi[] = {66, 77, 88, 99, 100};
    printf("Before Swaping\n");
    printf("Lahore\tKarachi\n");
    for(int i=0;i<5;i++){
        printf("%d\t%d\n",lahore[i],karachi[i]);
    }

    for(int i=0;i<5;i++){
        swap(&lahore[i],&karachi[i]);
    }

    printf("\nAfter Swaping\n");
    printf("Lahore\tKarachi\n");
    for(int i=0;i<5;i++){
        printf("%d\t%d\n",lahore[i],karachi[i]);
    }
    return 0;
}
void swap(int *valL,int *valK){
    int temp=*valL;
    *valL=*valK;
    *valK=temp;
}
