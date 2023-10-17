#include<stdio.h>

int main() {

	int size;
    printf("Enter size: ");
	scanf("%d",size);

	int arr[size];

    printf("Enter array elements: ");
	for(int i = 0;i < size;i++)
	{
		scanf("%d", &arr[i]);
	} 

	if (size == 0) {
        return 0;
    }

    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < size; i++) {
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        max_sum = (max_sum > current_sum) ? max_sum : current_sum;
    }

	printf("Sum = %d\n", max_sum);
}