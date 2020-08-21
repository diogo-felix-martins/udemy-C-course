#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

// Receives a struct pointer and fills its members with data from the user input.
void readItem(struct item *pitem){
    printf("\nInsert the following values about the item:");
    printf("\nName: ");
    scanf("%s", pitem->itemName);
    printf("\nQuantity: ");
    scanf("%d", &pitem->quantity);
    printf("\nPrice: ");
    scanf("%f", &pitem->price);
    pitem->amount = pitem->price * pitem->quantity;
}

// Receives a struct pointer and prints its data.
void print(struct item *pitem){
    printf("\nName: %s", pitem->itemName);
    printf("\nQuantity: %d", pitem->quantity);
    printf("\nPrice: %.2f", pitem->price);
    printf("\nAmount: %.2f", pitem->amount);
}

int main(){
    struct item item1, *pitem1 = &item1;

    if(!pitem1){
        printf("Memory allocation failed.");
        return 0;
    }

    pitem1->itemName = (char *) malloc(50 * sizeof(char));

    readItem(pitem1);
    print(pitem1);

    return 0;
}