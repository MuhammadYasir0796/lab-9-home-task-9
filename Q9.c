#include <stdio.h>
#include <string.h>

int *calculateBill(int quanities[],int prices[],int itemNumbers);

int main(){
    char name[20];
    int numOfItems;
    printf("Customer Name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("Number of items: ");
    scanf("%d",&numOfItems);
    getchar();
    char itemNames[numOfItems][30],tempItemName[20];
    int quantityOfItems[numOfItems], pricesOfItems[numOfItems];
    for(int i=0;i<numOfItems;i++){
        printf("Item number %d name: ",i+1);
        fgets(tempItemName,sizeof(tempItemName),stdin);
        tempItemName[strcspn(tempItemName,"\n")]='\0';
        strcpy(itemNames[i],tempItemName);
        printf("Item number %d quantity: ",i+1);
        scanf("%d",&quantityOfItems[i]);
        printf("Item number %d price: ",i+1);
        scanf("%d",&pricesOfItems[i]);
        getchar();
    }
    int *totalPrices=calculateBill(quantityOfItems,pricesOfItems,numOfItems);
    int totalBill=0;
    printf("\nCustomer: %s\nTotal Bill\n",name);
    for(int i=0;i<numOfItems;i++){
        printf("Item %s has total price of %d\n",itemNames[i],totalPrices[i]);
        totalBill += totalPrices[i];
    }
    printf("\nTotal:\t\t%d",totalBill);
    return 0;
}
int *calculateBill(int quanities[],int prices[],int itemNumbers){
    static int totalPrices[100];
    for(int i=0;i<itemNumbers;i++){
        totalPrices[i]=quanities[i]*prices[i];
    }
    return totalPrices;
}