#include<stdio.h>
int main(){
	int rating;

	printf("\tEnter you rating 1-5 : ");
	scanf("%d",&rating);

	switch(rating)
	{
		case 1: printf("your rating is 1");
			break;

		case 2: printf("your rating is 2");
			break;

		case 3: printf("your rating is 3");
			break;

		case 4: printf("your rating is 4");
			break;

		case 5: printf("your rating is 5");
			break;

		default: printf("Invalid inpute");
			break;
	}
	return 0;
}