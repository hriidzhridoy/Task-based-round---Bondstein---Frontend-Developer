#include <stdio.h>

void findTwoIndices(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("Indices: %d and %d\n", left, right);
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    printf("No indices found that add up to %d\n", target);
}


int main() {
    int numbers[] = {2, 3, 5, 7, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int targetSum = 9;

    printf("Given numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    findTwoIndices(numbers, size, targetSum);

    return 0;
}

