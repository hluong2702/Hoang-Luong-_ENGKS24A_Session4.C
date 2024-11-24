#include <stdio.h>

int main() {
    int cu, moi, tien_dien;
    
    printf("Nhap chi so cong to dien o dau thang: ");
    scanf("%d", &cu);
    printf("Nhap chi so cong to dien o cuoi thang: ");
    scanf("%d", &moi);

    if (moi < cu) {
        printf("Chi so cong to moi khong hop le! Vui long kiem tra lai.\n");
        return 1;
    }

    int so_dien_tieu_thu = moi - cu;

    if (so_dien_tieu_thu <= 50) {
        tien_dien = so_dien_tieu_thu * 10000; 
    } else if (so_dien_tieu_thu <= 100) {
        tien_dien = 50 * 1000 + (so_dien_tieu_thu - 50) * 15000;
    } else if (so_dien_tieu_thu <= 150){
        tien_dien = 50 * 1000 + 50 * 15000 + (so_dien_tieu_thu - 100) * 20000;
    }else if(so_dien_tieu_thu <200){
        tien_dien = 50 * 1000 + 50 * 15000 + (so_dien_tieu_thu - 100) * 25000;
    }else {
        tien_dien = 50 * 1000 + 50 * 15000 + (so_dien_tieu_thu - 100) * 30000;
    }

    printf("So dien tieu thu trong thang la: %d kWh\n", so_dien_tieu_thu);
    printf("Tien dien phai tra trong thang la: %d VND\n", tien_dien);

    return 0;
}
