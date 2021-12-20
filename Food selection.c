include<stdio.h>
int main()
{
	int choice;
	printf("pick an item: \n1.pizza \n 2.Burger \n 3.pasta \n 4.french fries \n 5.sandwich \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		    printf("Food Item- Pizza \n Price-239");
		    break;
		case 2:
		    printf("Food Item- Burger \n Price-129");
		    break;
		case 3:
		    printf("Food Item- Pasta \n Price-179");
		    break;
		case 4:
		    printf("Food Item- Frenchfries \n Price-99");
		    break;
		case 5:
		    printf("Food Item- Sandwich \n Price-149");
		default	:
		   printf("invalid choice");
	}
	
	
}
