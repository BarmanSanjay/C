#include<stdio.h>

void multiplication_table(int num, int multiplier){
    if(multiplier > 10){
        return;
    }
    printf("%d x %d = %d\n", num, multiplier, num * multiplier);
    multiplication_table(num, multiplier + 1);
}

int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    multiplication_table(num,1);

    return 0;
}