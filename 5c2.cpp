#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int b; 
    string N; 
    cin >> b >> N;

    int decimalValue = 0; 

    // Обходим каждую цифру числа N
    for (int i = 0; i < N.length(); i++) {
        char digit = N[i];
        int value;

        // Определяем числовое значение символа
        if (isdigit(digit)) {
            value = digit - '0'; 
        }
        else {
            value = digit - 'a' + 10; 
        }

        decimalValue = decimalValue * b + value;
    }

    cout << decimalValue;

    return 0;
}
