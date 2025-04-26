// Problem: For Loop
// Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Language: C++
// Solution by: @yigiterzen

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a;
    int b;

    cin >> a >> b;

    string numbers[9] = { "one","two","three","four","five","six","seven","eight","nine" };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << numbers[i - 1] << endl;
        }
    }

    for (int i = a; i <= b; i++) {

        if (i > 9) {
            if (i % 2 == 0) {
                cout << "even" << endl;
            }
            else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}