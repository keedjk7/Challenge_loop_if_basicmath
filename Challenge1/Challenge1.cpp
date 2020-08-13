#include<stdio.h>
#include<math.h>

int main() {
	int num1, num2,sum=0;
	double aver,N,  SD=0;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		for (int i = num1; i >= num2; i--) {
			printf("%d ", i);
			sum += i;
		}
		printf("\n");
		N = num1 - num2 + 1 ;
		aver = float(sum / N);
		for (int i = num2; i <= num1; i++) {
			SD +=  pow((i - aver), 2);
		}
		SD = sqrt(SD / (N - 1));
	}
	else {
		for (int i = num1; i <= num2; i++) {
			printf("%d ", i);
			sum += i;
		}
		printf("\n");
		N = num2 - num1 + 1;
		aver = float(sum / N);
		for (int i = num1; i <= num2; i++) {
			SD += pow((i - aver), 2);
		}
		SD = sqrt(SD / (N - 1));
	}
	printf("%.1lf\n%.2lf", aver, SD);
}