// Problem: Strings
// Link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
// Language: C++
// Solution by: @yigiterzen

#include <iostream>
#include <string>
using namespace std;

int main() {

    string a, b;

    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;

    cout << a + b << endl;

    string a2, b2;

    a2 = a;
    b2 = b;

    b2[0] = a[0];
    a2[0] = b[0];

    cout << a2 << " " << b2 << endl;

    return 0;
}
