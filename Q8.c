#include <stdio.h>

int main(){
    int arr[5]={10, 20, 30, 40, 50};
    int *pArr=arr;
    for(int i=0;i<5;i++){
        printf("%d ",*pArr);
        pArr++;
    }
    return 0;
}
