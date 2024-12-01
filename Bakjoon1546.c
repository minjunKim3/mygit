#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	int max = 0;
	double sum = 0;
	double newjum = 0;
	scanf("%d", &a);
	double* arr = (double*)malloc(a * sizeof(double));
	for (int i = 0;i < a;i++) {
		scanf("%d", &b);
		arr[i] = b;
	}
	for (int j = 0; j < a; j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
	}
	for (int k = 0; k < a;k++) {
		arr[k] = (arr[k] / max) * 100;
	}
	for (int l = 0; l < a; l++) {
		sum += arr[l];
	}
	printf("%.9f", sum / a);
		return 0;
}