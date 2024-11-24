#include<stdio.h>

int main(){

   int number1, number2,  number3;

   printf("Moi ban nhap vao so nguyen thu 1: ");
   scanf("%d",&number1);

   printf("Moi ban nhap vao so nguyen thu 2: ");
   scanf("%d",&number2);

   printf("Moi ban nhap vao so nguyen thu 3: ");
   scanf("%d",&number3);

   if(number3 > number2 && number3 < number1 || number3 < number2 && number1 <number3 ){
    printf("So thu ba %d nằm giữa số thứ hai %d và sô thứ nhất %d\n",number3,number2,number1);
   }else{
    printf("So thu ba %d khong nằm giữa số thứ hai %d và sô thứ nhất %d\n",number3,number2,number1);
   }
    return 0;
}