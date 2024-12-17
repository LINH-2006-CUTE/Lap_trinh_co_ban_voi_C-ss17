#include<stdio.h>
//1 
void inputArr(int *arr, int *length){
    printf("\nNhap so ptu cho mang: ");
    scanf("%d", length);
    for (int i = 0; i < *length; i++){
        printf("Nhap tung phan tu vao mang: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < *length; i++) {
        printf("Phan tu %d: %d\n", i + 1, arr[i]);
    }
}
//2 
void showElement(int *arr, int length){
    printf("Hien thi cac phan tu trong mang: ");
    for (int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//3 
int sizeArr(int length){
    return length;
}
//4 
int sumArr(int *arr, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
//5 
void elementMax(int *arr, int length){
    int Max = arr[0];
    for (int i = 1; i < length; i++){
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", Max);
}

int main() {
    int arr[100];
    int length = 0;
    int choice;
    do{
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai cua mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. THOAT\n");
        scanf("%d", &choice);

        switch (choice){
            case 1: {
                inputArr(arr, &length);
                break;
            }
            case 2: {
                showElement(arr, length);
                break;
            }
            case 3: {
                printf("Do dai cua mang: %d\n", sizeArr(length));
                break;
            }
            case 4: {
                printf("Tong cac phan tu trong mang la: %d\n", sumArr(arr, length));
                break;
            }
            case 5: {
                elementMax(arr, length);
                break;
            }
            case 6: {
                printf("Thoat chuong trinh.\n");
                return 0;
            }
            default: {
                printf("Moi nhap lai.\n");
                break;
            }
        }

    } while (choice != 6);

    return 0;
}

