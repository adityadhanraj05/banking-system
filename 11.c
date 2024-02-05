#include <stdio.h>
int amount=0;
void add_amount(int b)
{	
	amount=amount+b;
	printf("%d",amount);
}
void display(){
	printf("\nTotal amount willbe %d",amount);
}
void withdraw(int sub){
	amount=amount-sub;
	printf("Total amount will be%d",amount);
}
void main()
{
	int a,b,sub;
	
	printf("welcome to SBI E-corner or Net banking");
	while(1)
	{
		
	printf("\nAdd money press 1\n");
	printf("Display money press 2\n");
	printf("withdraw money press 3\n");
	printf("Exit press 4\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Enter amount\n");
			scanf("%d",&b);
			printf("Amount is added");
			add_amount(b);
			break;
		case 2:
		printf("Amount displayed");
		display(b);
		break;
		case 3:
	   printf("Enter Deduted value");
		  scanf("%d",&sub);
		  printf("Amount Debuted");
		  withdraw(sub);
		  break;
		case 4:
		   printf("Thank for coming \nNow you can exit");
					exit(0);  
		default :
			printf("Invalid");
			break;
	}
	}
}
