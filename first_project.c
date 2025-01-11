//A shopkeeper's billing process

#include<stdio.h>
#include<string.h>
/*
A shopkeeper bills the total price of a customer's cart after applying a discount, which is applicable when the cart's value is Rs.99 or above.
 */
int main(){
    char ItemName[20]; //Name of the item
    int ItemCount=0; //Total no.of items in the cart
    float ItemPrice=0.0; //Price of each item
    float CartPrice=0.0; //Price of the total items in the cart
    float TotalPrice=0.0; //Ater discount price
    
    printf("Enter the number of items: ");
    scanf("%d", &ItemCount);
    //Using iteration statement for no.of items
    for(int i=0;i<ItemCount;i++){
    	printf("Enter the name of Item %d: ",i+1);
    	scanf("%s", ItemName);
    	printf("Enter the price of %s: Rs.", ItemName);
    	scanf("%f", &ItemPrice);
    	if(ItemPrice<=0){
    		printf("Please enter a valid price for the item.\n");
    		i--; //decrement the Item count
    		continue; //skip the current iteration
    	}
    	 
    	CartPrice += ItemPrice;
    }
    printf("The cart price is : Rs. %.2f\n", CartPrice);
    //Checking the applicable discount based on the cart's value
    if(CartPrice<999.00 && CartPrice>=799.00){
    	printf("Congrats! you are eligible for a discount of Rs.50.\n");
    	float Discount=50.00;
    	TotalPrice=CartPrice-Discount;
    }
    else if(CartPrice>=999.00 && CartPrice<1399.00){
    	printf("Congrats! you are eligible for a discount of Rs.100.\n");
    	float Discount=100.00;
    	TotalPrice=CartPrice-Discount;
    }
    else if(CartPrice>=1399.00 && CartPrice<1999.00){
    	printf("Congrats! you are eligible for a discount of Rs.150.\n");
    	float Discount=150.00;
    	TotalPrice=CartPrice-Discount;
    }
    else if(CartPrice>=1999.00 && CartPrice<2599.00){
    	printf("Congrats! you are eligible for a discount of Rs.200.\n");
    	float Discount=200;
    	TotalPrice=CartPrice-Discount;
    }
    else if(CartPrice>=2599.00 && CartPrice<5499.00){
    	printf("Congrats! you are eligible for a discount of Rs.500.\n");
    	float Discount=500;
    	TotalPrice=CartPrice-Discount;
    }
    else if(CartPrice>=5499.00 && CartPrice<9999.00){
    	printf("Congrats! you are eligible for a discount of Rs.1000.\n");
    	float Discount=1000.00;
    	TotalPrice=CartPrice-Discount;
    }
    else if(CartPrice>=9999.00){
    	printf("Congrats! you are eligible for a discount of Rs.2500.\n");
    	float Discount=2500.00;
    	TotalPrice=CartPrice-Discount;
    }
    else
        TotalPrice=CartPrice;
        
    printf("Final price is: Rs. %.2f\n", TotalPrice);
    return 0;
}