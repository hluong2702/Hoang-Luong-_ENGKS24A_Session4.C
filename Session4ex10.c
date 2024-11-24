#include <stdio.h>

int main(){
    int a, b, c;

    printf("Nhập vào số thứ nhất: ");
    scanf("%d", &a);
    printf("Nhập vào số thứ hai: ");
    scanf("%d", &b);
    printf("Nhập vào số thứ ba: ");
    scanf("%d", &c);

    if (a > b) {
       
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a > c) {
        
        a = a + c;
        c = a - c;
        a = a - c;
    }
    if (b > c) {

        b = b + c;
        c = b - c;
        b = b - c;
    }

    printf("Các số theo thứ tự từ nhỏ đến lớn là: %d, %d, %d\n", a, b, c);

    return 0;
}
