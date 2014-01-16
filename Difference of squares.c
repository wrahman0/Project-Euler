#include <stdio.h>
#include <math.h>


int main(void)
{
	int sumOne = 0, sumOnetoHund = 0;
	int i = 1;
	for (; i <= 100; i++){
		sumOne += pow(i, 2);
	}
	printf("%d\n", sumOne);
	i = 0;
	for (; i <= 100; i++){
		sumOnetoHund += i;
	}
	
	printf("%d\n",sumOnetoHund);
	int total = pow(sumOnetoHund, 2) - sumOne;
	printf("%d\n", total);

	return 0;
}

