#include <stdio.h>
#include <stdlib.h>

void writeArrayToFile(int arr[], int n, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n", arr[i]);
    }
    fclose(file);
}

int readArrayFromFile(int arr[], const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    int n = 0;
    while (fscanf(file, "%d", &arr[n]) != EOF) {
        n++;
    }
    fclose(file);
    return n;
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    writeArrayToFile(arr, n, "BAI1.txt");

    int readArr[n];
    int readCount = readArrayFromFile(readArr, "BAI1.txt");

    sortArray(readArr, readCount);

    printf("Sorted array:\n");
    for (int i = 0; i < readCount; i++) {
        printf("%d ", readArr[i]);
    }
    printf("\n");

    writeArrayToFile(readArr, readCount, "BAI2.txt");

    return 0;
}