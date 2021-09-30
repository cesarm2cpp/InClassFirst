#include <stdio.h>

int main()
{
    int x; //takes input
    int percent; //takes tax percent
    int percent2; //takes tip percent
    double tax; //takes tax output
    double current; //takes food + tax
    double tip; //takes tip output
    //print the menu and an option to select which item
    printf("\n1)Salad:$9.95");
    printf("\n2)Soup:$4.55");
    printf("\n3)Sandwhich:$13.25");
    printf("\n4)Pizza:$22.35");
    printf("\nSelect a number 1-4 to purchase meal: ");
    scanf("%d", &x);
    
    
    //each food item grabs percentage of tax based on input 
    //calculates the current price of food + tax
    //ask percentage tip of the current price
    //grand total output the result of adding food, tip, and tax 
    if(x == 1)
    {
        double salad = 9.95;
        printf("\nWhat is your tax percentage: ");
        scanf("%d", &percent);
        printf("What is your tip percentage: ");
        scanf("%d", &percent2);
        
        tax = ((percent)/100.0 * salad);
        current = salad + tax;
        tip = ((percent2)/100.0 * current);
        double grand = salad + tip + tax;
        
        printf("\n-----BILL-----");
        printf("\nSalad:$9.95");
        printf("\nTaxes:$%.2f",tax);
        printf("\nTip:$%.2f", tip);
        printf("\nThe grand total is:$%.2f", grand);
    }
    if(x == 2)
    {
        double soup = 4.55;
        printf("\nWhat is your tax percentage: ");
        scanf("%d", &percent);
        printf("\nWhat is your tip percentage: ");
        scanf("%d", &percent2);
        
        tax = ((percent)/100.0 * soup);
        current = soup + tax;
        tip = ((percent2)/100.0 * current);
        double grand = soup + tip + tax;
        
        printf("\n-----BILL-----");
        printf("\nSoup:$4.55");
        printf("\nTaxes:$%.2f",tax);
        printf("\nTip:$%.2f", tip);
        printf("\nThe grand total is:$%.2f", grand);
    }
    if(x == 3)
    {
        double Sandwhich = 13.25;
        printf("\nWhat is your tax percentage: ");
        scanf("%d", &percent);
        printf("\nWhat is your tip percentage: ");
        scanf("%d", &percent2);
        
        tax = ((percent)/100.0 * Sandwhich);
        current = Sandwhich + tax;
        tip = ((percent2)/100.0 * current);
        double grand = Sandwhich + tip + tax;
        
        printf("\n-----BILL-----");
        printf("\nSalad:$13.25");
        printf("\nTaxes:$%.2f",tax);
        printf("\nTip:$%.2f", tip);
        printf("\nThe grand total is:$%.2f", grand);
    }
    if(x == 4)
    {
        double pizza = 22.35;
        printf("\nWhat is your tax percentage: ");
        scanf("%d", &percent);
        printf("\nWhat is your tip percentage: ");
        scanf("%d", &percent2);
        
        tax = ((percent)/100.0 * pizza);
        current = pizza + tax;
        tip = ((percent2)/100.0 * current);
        double grand = pizza + tip + tax;
        
        printf("\n-----BILL-----");
        printf("\nPizza:$22.35");
        printf("\nTaxes:$%.2f",tax);
        printf("\nTip:$%.2f", tip);
        printf("\nThe grand total is:$%.2f", grand);
    }    

    return 0;
}
