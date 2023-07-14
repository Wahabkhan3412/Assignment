/*
    Name wahab 
    Father name  khudai rahim
    class Bscs 1samister *
    /




#include<stdio.h>
int isprime(int num) {
    if (num < 2) {
       return 0;
}
    for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
       return 0;
}
}
       return 1;
}

int main() {
    int n;
    while (1) {
    printf("Enter a number between 2 and 100: ");
    scanf("%d", &n);
    if (n < 2 || n > 100) {
    printf("Number out of range,\n press 1 to try again: ");
    int choice;
    scanf("%d", &choice);
    if (choice != 1) {
    break;
} 
} else {
    int result = isprime(n);
    printf("function returns: %d",isprime(n));break;
}
}
     return 0;
}
