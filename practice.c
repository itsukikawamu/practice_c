#include <stdio.h>

void printArray(int arr[], int n);
void bubbleSort(int arr[], int n);

int main(void){
    int array[]={1,6,5,98,55,13,5,49,11,21,51};
    int size = sizeof(array)/sizeof(array[0]);

    printf("元の配列: \n");
    printArray(array, size);
    bubbleSort(array, size);
    printf("昇順にソート: \n");
    printArray(array, size);

    


    return 0;
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int i=0, j=0, tmp=0;
    for (i=0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
