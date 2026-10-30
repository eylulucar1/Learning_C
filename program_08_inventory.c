/* Program 8: Inventory record implemented with a structure */
#include <stdio.h>

struct Item {
    char name[30];
    int quantity;
    double price;
};

int main(void) {
    struct Item item;
    printf("Item name: ");
    if (scanf("%29s", item.name) != 1) return 1;
    printf("Quantity and unit price: ");
    if (scanf("%d %lf", &item.quantity, &item.price) != 2) return 1;
    printf("%s: %d units x %.2f = %.2f\n",
           item.name, item.quantity, item.price,
           item.quantity * item.price);
    return 0;
}
