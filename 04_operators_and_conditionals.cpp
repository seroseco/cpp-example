// 04_operators_and_conditionals.cpp
// -----------------------------------------
// 연산자와 조건문(if / else if / else) 기초

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 3;

    // 1) 산술 연산자
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (정수 나눗셈)" << endl;
    cout << "a % b = " << (a % b) << " (나머지)" << endl;

    // 2) 비교 연산자 결과는 bool(true/false)
    cout << boolalpha;
    cout << "a > b ? " << (a > b) << endl;
    cout << "a == b ? " << (a == b) << endl;

    // 3) 조건문
    int score;
    cout << "\n점수를 입력하세요 (0~100): ";
    cin >> score;

    // if-else if-else는 위에서 아래로 조건을 검사합니다.
    if (score >= 90) {
        cout << "등급: A" << endl;
    } else if (score >= 80) {
        cout << "등급: B" << endl;
    } else if (score >= 70) {
        cout << "등급: C" << endl;
    } else {
        cout << "등급: D 이하" << endl;
    }

    return 0;
}
