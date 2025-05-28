#include <iostream>
#include "../include/stack.h"

using namespace std;

string decimalToBinary(int num) {
    if (num == 0) return "0";

    Stack s(100);
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
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary number: " << decimalToBinary(num) << endl;
    return 0;
}
