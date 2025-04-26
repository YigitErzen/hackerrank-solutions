// Problem: Basic Data Types
// Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
// Language: C++
// Solution by: @yigiterzen

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);
    printf("%.9lf\n", d);

    return 0;
}
