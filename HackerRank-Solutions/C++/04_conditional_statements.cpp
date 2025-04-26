// Problem: Conditional Statemenets
// Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true
// Language: C++
// Solution by: @yigiterzen

#include<iostream>
#include<string>
using namespace std;

int main() {

    int number;

    cin >> number;

    string numbers[9] = { "one","two","three","four","five","six","seven","eight","nine" };

    if (number >= 1 && number <= 9) {

        cout << numbers[number - 1];
    }
    else {

        cout << "Greater than 9";
    }

    return 0;


}
