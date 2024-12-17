#include <stdio.h>
#include <string.h>
int isAlpha(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isDigit(char c){
    return c >= '0' && c <= '9';
}

void cn1(char *arr, int *n){
    printf("\nNhap so luong ptu (toi da 50): ");
    scanf("%d", n);
    
    if (*n > 50){
        printf("So luong phan tu vuot qua gioi han cho phep. Vui long nhap lai.\n");
        *n = 50;
    }

    getchar();
    for (int i = 0; i < *n; i++){
        printf("Nhap ky tu thu %d: ", i + 1);
        scanf("%c", &arr[i]);
        getchar();
    }
}

void cn2(char *arr, int n){
    printf("\nKy tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

void cn3(char *arr, int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (isAlpha(arr[i])) count++;
    }
    printf("\nSo ky tu chu cai trong mang: %d", count);
}

void cn4(char *arr, int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (isDigit(arr[i])) count++;
    }
    printf("\nSo ky tu chu so trong mang: %d", count);
}

void cn5(char *arr, int n){
    int countA = 0, countD = 0;
    for (int i = 0; i < n; i++) {
        if (isAlpha(arr[i])) {
            countA++;
        } else if (isDigit(arr[i])) {
            countD++;
        }
    }
    printf("\nSo ky tu dac biet trong mang: %d", n - countA - countD);
}

int main(){
    char arr[50];
    int choice, check = -1, n;

    do {
        printf("\nMENU\n");
        printf("\n1. Nhap vao chuoi: ");
        printf("\n2. In ra chuoi: ");
        printf("\n3. Dem so luong ky tu chu cai: ");
        printf("\n4. Dem so luong ky tu chu so: ");
        printf("\n5. Dem so luong ky tu dac biet: ");
        printf("\n6. Thoat");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1: {
                check = 1;
                cn1(arr, &n);
                break;
            }
            case 2: {
                if (check == -1){
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn2(arr, n);
                }
                break;
            }
            case 3: {
                if (check == -1){
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn3(arr, n);
                }
                break;
            }
            case 4: {
                if (check == -1){
				
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn4(arr, n);
                }
                break;
            }
            case 5: {
                if (check == -1){
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn5(arr, n);
                }
                break;
            }
            case 6: {
                printf("\nBan chon thoat!");
                break;
            }
            default: {
                printf("\nMoi nhap lai: ");
                break;
            }
        }
    } while (choice != 6);

    return 0;
}
