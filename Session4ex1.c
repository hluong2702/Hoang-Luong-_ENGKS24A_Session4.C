#include<stdio.h>

int main(){
    int number;

    printf("Moi ban nhap vao mot so nguyen: ");
    scanf("%d",&number);

    if(number>0){
        printf("%d là số dương\n",number);
    }else{
        printf("%d là số âm\n",number);
    }
    return 0;
}