#include <iostream>
#include <string>
using namespace std;

string reverseString(string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    return s;
}

int main() {
    string str = "Geeks";
    cout << "Original string: " << str << endl;

    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
