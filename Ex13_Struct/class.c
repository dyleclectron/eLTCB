#include <stdio.h>
#include <conio.h>

struct thong_ke {
    char ten_hang[100];
    int so_luong;
    int don_gia;
    int thanh_tien;
};
int main() {
    struct thong_ke hang[100];
    int n,tong_tien = 0;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        getchar();
        printf("\nMat hang thu  %d\n", i + 1);
        printf("Nhap ten hang: ");
        scanf("%[^\n]", hang[i].ten_hang);
        printf("Nhap so luong: ");
        scanf("%d", &hang[i].so_luong);
        printf("Nhap don gia: ");
        scanf("%d", &hang[i].don_gia);
        hang[i].thanh_tien = hang[i].so_luong * hang[i].don_gia;
        tong_tien += hang[i].thanh_tien;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hang[i].ten_hang < hang[j].ten_hang) {
                struct thong_ke temp = hang[i];
                hang[i] = hang[j];
                hang[j] = temp;
            }
        }
    }

    printf("\n          SO LIEU BAN HANG \n");
    printf("STT\tTen hang\t\tSo luong\tDon gia\t\tThanh tien\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-20s\t%d\t\t%d\t\t%d\n", i + 1, hang[i].ten_hang, hang[i].so_luong, hang[i].don_gia, hang[i].thanh_tien);
    }
    printf("\n \t\t\t\t\t\tTong tien: %d", tong_tien);
    return 0;
}