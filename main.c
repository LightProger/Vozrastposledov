#include <stdio.h>

int main() {
    int number, a, i, digit = 0;
    scanf("%d", &a);

    for(i = 0; i < a; i++)
    {
        scanf("%d", &number);
        if(digit != number) printf("%d ", number);
        digit = number;
    }

    return 0;
}