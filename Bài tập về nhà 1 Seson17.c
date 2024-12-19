#include <stdio.h>
#define MAX 100
void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX);
    scanf("%d", n);

    printf("Nhap %d phan tu cua mang:\n", *n);
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int tinhTong(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return tong;
}

int timPhanTuLonNhat(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[MAX];
    int n = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh tong cac phan tu trong mang\n");
        printf("4. Hien thi phan tu lon nhat\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                printf("Tong cac phan tu trong mang la: %d\n", tinhTong(arr, n));
                break;
            case 4:
                printf("Phan tu lon nhat trong mang la: %d\n", timPhanTuLonNhat(arr, n));
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 5);

    return 0;
}
