#include<stdio.h>

int main(){
    int month;

    printf("Moi ban nhap vao mot thang trong nam ");
    scanf("%d",&month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
           printf("Thang nay co 31 ngay\n");
           break;
        case 4:
        case 6:
        case 9:
        case 11:
           printf("Thang nay co 30 ngay\n");
           break;
        case 2:
           printf("Thang nay co 28 hoặc 29 ngày (nam nhuan co 29 ngay)");
        default:
        printf("So thang khong le\n");
    }
    return 0;
}