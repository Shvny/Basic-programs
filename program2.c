
#include<stdio.h>
#include<math.h>

/*
Sum of two or three digit negative elements; int elements loaded from the keyboard.
Value encountered = end, ends program; no more than n elements
*/

int main(void) {
int sum=0, number, n, end;
int i=0;

printf("The program counts the sum of numbers in a range [-10 - -999]\n");

printf("Enter the maximum number of numbers: ");
scanf("%d", &n);

printf("Enter the number you want the algorithm to end with: ");
scanf("%d", &end);


do {
	scanf("%d", &number);

	i++;

	if(number > -1000 && number < -9) {
		sum += number;

		printf("Number [%d] correctly added to the calculation!\n", number);

		if(i==n){
			break;
		}


	}else {
		printf("Number [%d] is out of range\n", number);
	}

} while(number != end);



printf("Sum of read numbers equals [%d]", sum);

return 0;
}

