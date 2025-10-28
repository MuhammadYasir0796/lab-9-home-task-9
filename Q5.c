#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void displayGrid(int grid[][8]);
int main(){
    int grid[8][8],random,max=255,min=0,diff;
    srand(time(0));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            random=(rand()%(max-min+1))+min;
            grid[i][j]=random;
        }
    }
    printf("Original Image\n");
    displayGrid(grid);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            diff=255-grid[i][j];
            if(diff>=10){
                grid[i][j] += 10;
            }else{
                grid[i][j] += diff;
            }
        }
    }
    printf("\nBrightened Image\n");
    displayGrid(grid);
    return 0;
}
void displayGrid(int grid[][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }
}