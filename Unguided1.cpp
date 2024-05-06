#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> s;
    for (char c : kalimat) {
        s.push(c);
    }
    string reversed;
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    return kalimat == reversed;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    cin >> kalimat;
    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
}