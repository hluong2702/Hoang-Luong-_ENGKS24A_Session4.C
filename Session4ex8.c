#include<stdio.h>

int main(){

    float a, b, c;

    printf("Moi ban nhap vao canh a cua tam giac ");
    scanf("%f",&a);

    printf("Moi ban nhap vao canh b cua tam giac ");
    scanf("%f",&b);

    printf("Moi ban nhap vao canh c cua tam giac ");
    scanf("%f",&c);

    if(a + b > c && a + c > b && c + b > a){
        printf("La 3 canh tam giac");
    }else{
        printf("Khong phai 3 canh tam giac");
    }
    return 0;
}