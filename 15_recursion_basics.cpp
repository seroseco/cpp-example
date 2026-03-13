// 15_recursion_basics.cpp
// -----------------------------------------
// 재귀 함수(recursion) 기초
// - 함수가 자기 자신을 다시 호출하는 방식
// - 반드시 "종료 조건"이 있어야 무한 호출을 막을 수 있음

#include <iostream>

using namespace std;

// n! (팩토리얼) 계산
// 예: 5! = 5 * 4 * 3 * 2 * 1 = 120
long long factorial(int n) {
    // 종료 조건(base case)
    if (n <= 1) {
        return 1;
    }

    // 재귀 관계(recursive case)
    return static_cast<long long>(n) * factorial(n - 1);
}

int main() {
    int n;
    cout << "정수 n 입력 (0 이상): ";
    cin >> n;

    if (n < 0) {
        cout << "0 이상만 입력하세요." << endl;
        return 1;
    }

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
