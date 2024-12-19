#include <stdio.h>
#include <string.h>

#define MAX 100

void nhapChuoi(char *str) {
    printf("Nhap vao chuoi: ");
    getchar();
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void inChuoi(const char *str) {
    printf("Chuoi vua nhap: %s\n", str);
}

int demChuCai(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    return count;
}

int demChuSo(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    return count;
}

int demKyTuDacBiet(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[MAX] = "";
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapChuoi(str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", demChuCai(str));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", demChuSo(str));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", demKyTuDacBiet(str));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 6);

    return 0;
}
