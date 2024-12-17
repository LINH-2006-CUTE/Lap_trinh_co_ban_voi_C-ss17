#include <stdio.h>
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

void evenNumbers(int *arr, int n){
    printf("Cac phan tu la so chan: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int isPrime(int num){
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return 0;
    }
    return 1;
}

void primeNumbers(int *arr, int n){
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void reverseArr(int *arr, int n);
    printf("Mang dao nguoc: ");
    for (int i = n - 1; i >= 0; i--){
        printf("%d \n", arr[i]);
    }
}

void sortArray(int *arr, int n, ){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++){
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                if  (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchElement(int *arr, int n) {
    int element;
    printf("Nhap phan tu can tim kiem: ");
    scanf("%d", &element);
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] =element) {
            printf("Phan tu %d duoc tim thay tai vi tri %d \n", element, i);
            flag = 1;
        }else{
        	printf("Phan tu %d khong tim thay trong mang\n", element);

		}	 
	}

int main(){
    int choice;
    int arr[30];
    int n;
    do{
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("   a. Tang dan\n");
        printf("   b. Giam dan\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                inputArr(arr, &n);
                break;
            case 2:
                evenNumbers(arr, n);
                break;
            case 3:
                primeNumbers(arr, n);
                break;
            case 4:
                reverseArr(arr, n);
                break;
            case 5:
                {
                    char sortChoice;
                    printf("Cach sap xep (a hoac b) \n");
                    scanf(" %c", &sortChoice);
                    if (sortChoice == 'a') {
                        sortArray(arr, n ); 
                    } 
					break;
					if (sortChoice == 'b'){
                        sortArray(arr, n); 
                    }
                }
                break;
            case 6:
                searchElement(arr, n);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Moi nhap lai\n");
                break;
        }
    } while(choice != 7);

    return 0; 
}

