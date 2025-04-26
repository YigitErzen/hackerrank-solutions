// Problem: Pointer
// Link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Language: C++
// Solution by: @yigiterzen

#include <stdio.h>
#include<cmath>

void update(int* a, int* b) {
    int i = *a;
    *a = *a + *b;

    *b = abs(i - *b);

}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
