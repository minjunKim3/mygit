#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int min = 10000, max = 0;
	int a, b;

	scanf("%d", &a);
	int* arr = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		arr[i] = b;
	}
	for (int j = 0; j < a;j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
		if (arr[j] < min)
		{
			min = arr[j];
		}
	}
	printf("%d", max * min);
	return 0;
}