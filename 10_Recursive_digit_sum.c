#include <stdio.h>

int digitSum(int n) {
    if (n < 10)
        return n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return digitSum(sum);
}

int main() {
    char str[1000];
    int k, total = 0;
    scanf("%s %d", str, &k);
    
    for (int i = 0; str[i]; i++)
        total += str[i] - '0';
    
    total *= k;
    printf("%d", digitSum(total));
    return 0;
}