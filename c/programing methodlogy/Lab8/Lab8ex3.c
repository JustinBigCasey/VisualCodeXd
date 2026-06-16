#include <stdio.h>
#include <stdlib.h>


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}


void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char filename[100];
    FILE *fp;
    int arr[1000];
    int size = 0;
    int choice;
    int target;
    int position;


    printf("Enter a filename: ");
    scanf("%s", filename);


    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

  
    while (fscanf(fp, "%d", &arr[size]) == 1) {
        size++;
    }
    fclose(fp);

    printf("Read %d numbers from file.\n", size);

 
    printf("\n--- Search Algorithms ---\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (auto sort)\n");

    printf("Choose one of these search algorithms: ");
    scanf("%d", &choice);

 
    printf("Enter a value to search for: ");
    scanf("%d", &target);


    if (choice == 1) {
        position = linearSearch(arr, size, target);
    } 
    else if (choice == 2) {
        sortArray(arr, size); 
        position = binarySearch(arr, size, target);
    } 
    else {
        printf("Invalid choice!\n");
        return 1;
    }

   
    if (position != -1) {
        printf("Found at position: %d\n", position);
    } else {
        printf("Not found\n");
    }

    return 0;
}