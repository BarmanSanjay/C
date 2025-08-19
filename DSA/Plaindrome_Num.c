//Only for Numbers 
#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int num){
    if(num < 0) return false; // Negative numbers are not palindromes

    int temp = num;
    int rev = 0;
    while(temp != 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return rev == num;
}

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if(isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
