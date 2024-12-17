#include <stdio.h>
#include <string.h>
void cn1(char *arr, int *n){
    printf("\nNhap so luong ptu(1 - 20): ");
    scanf("%d", n);
    while ((*n) > 20 || (*n) < 1){
        printf("\nNhap so luong ptu(1 - 20): ");
        scanf("%d", n);
    }
    getchar();

    for (int i = 0; i < *n; i++){
        printf("Nhap ky tu thu %d: ", i + 1);
        scanf("%c", &arr[i]);

    }
    printf("\nChuoi vua nhap: ");
    for (int i = 0; i < *n; i++){
        printf("%c", arr[i]);
    }
}

void cn2(char *arr, int n){
    char reverseString[30];
    int j = 0;

    for (int i = n - 1; i >= 0; i--){
        reverseString[j++] = arr[i];
    }
    printf("\nChuoi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%c", reverseString[i]);
    }
}

void cn3(char *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isSpace(arr[i]) && (i == 0 || !isSpace(arr[i - 1]))){
            count++;
        }
    }
    printf("\nChuoi co %d tu!", count + 1);
}

void cn4(char *arr, int n) {
    char input[30];
    printf("\nNhap chuoi bat ky: ");
    fgets(input, 30, stdin);
    input[strcspn(input, "\n")] = '\0'; 
    if (n < strlen(input)) {
        printf("\nChuoi 1 ngan hon chuoi 2!");
    } else if (n == strlen(input)) {
        printf("\nChuoi 1 bang chuoi 2!");
    } else {
        printf("\nChuoi 1 dai hon chuoi 2!");
    }
}

void cn5(char *arr, int n){
    printf("\nKet qua: ");
    for (int i = 0; i < n; i++){
        if (arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
        }
        printf("%c", arr[i]);
    }
}

void cn6(char *arr, int n){
    char input[10];
    printf("\nNhap chuoi bat ky: ");
    fgets(input, 10, stdin);
    input[strcspn(input, "\n")] = '\0'; // Xóa k? t? newline
    strcat(arr, input);
    printf("\nChuoi sau khi noi: %s\n", arr);
}

int isSpace(char c){
    return c == ' ';
}

int isAlpha(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
int main(){
    char arr[50];
    int choice;
	int check = -;
	int  n;
    do{
        printf("\nMENU\n");
        printf("\n1. Nhap vao chuoi: ");
        printf("\n2. In ra chuoi dao nguoc: ");
        printf("\n3. Dem so luong tu trong chuoi: ");
        printf("\n4. So sanh chuoi: ");
        printf("\n5. In hoa tat ca chu cai: ");
        printf("\n6. Nhap chuoi va them vao chuoi ban dau: ");
        printf("\n7. Thoat");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1: {
                check = 1;
                cn1(arr, &n);
                break;
            }
            case 2: {
                if (check == -1) {
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn2(arr, n);
                }
                break;
            }
            case 3: {
                if (check == -1) {
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn3(arr, n);
                }
                break;
            }
            case 4: {
                if (check == -1) {
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn4(arr, n);
                }
                break;
            }
            case 5: {
                if (check == -1) {
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn5(arr, n);
                }
                break;
            }
            case 6: {
                if (check == -1) {
                    printf("\nMang rong, vui long chon cn1!");
                } else {
                    cn6(arr, n);
                }
                break;
            }
            case 7: {
                printf("\nBan chon thoat!");
                break;
            }
            default: {
                printf("\nVui long chon dung menu(1-7)!");
                break;
            }
        }
    } while (choice != 7);

    return 0;
}
