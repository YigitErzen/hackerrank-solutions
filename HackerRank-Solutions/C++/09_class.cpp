// Problem: Classes
// Link: https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
// Language: C++
// Solution by: @yigiterzen

#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int age;
    int standard;
    string first_name, last_name;

public:

    void set_age(int a) {
        age = a;
    }
    void set_standard(int s) {
        standard = s;
    }
    void set_first_name(string fn) {
        first_name = fn;
    }
    void set_last_name(string ln) {
        last_name = ln;
    }
    int get_age() {
        return age;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    int get_standard() {
        return standard;
    }

    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
