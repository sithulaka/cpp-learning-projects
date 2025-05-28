#include <iostream>
#include "Stack/Stack.cpp"

using namespace std;


string decimalToBinary(int num) {
    if (num == 0) return "";

    int remain;
    string result = "";

    while (num > 0) {
        remain = num % 2;
        num = num / 2;
        s.push(to_string(remain));

        if (num == 0) {
            while (!s.isEmpty()) {
                result += s.pop();
            }
        }
    }

    return result;
}

int main() {
    Stack s(100);
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary number: " << decimalToBinary(num) << endl;
}
