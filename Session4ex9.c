#include <stdio.h>

int main() {
    int ngay, thang, nam;
    
    // Nhập ngày, tháng, năm
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (thang < 1 || thang > 12) {
        printf("Thang %d khong hop le!\n", thang);
        return 0; 
    }

    int ngay_toi_da = 0;

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        ngay_toi_da = 31;  
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        ngay_toi_da = 30;  
    } else if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            ngay_toi_da = 29; 
        } else {
            ngay_toi_da = 28;  
        }
    }

    if (ngay < 1 || ngay > ngay_toi_da) {
        printf("Ngay %d/%d/%d khong hop le!\n", ngay, thang, nam);
    } else {
        printf("Ngay %d/%d/%d la hop le.\n", ngay, thang, nam);
    }

    return 0;
}
