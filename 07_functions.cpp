// 07_functions.cpp
// -----------------------------------------
// 함수(Function) 기초
// - 코드를 "기능 단위"로 나눠 재사용하기 좋게 만듭니다.
// - 입력값(매개변수)와 반환값(return)을 가질 수 있습니다.

#include <iostream>

using namespace std;

// 함수 선언(프로토타입)
int add(int a, int b);
void printLine();

int main() {
    printLine();

    int x = 5;
    int y = 7;

    // add 함수 호출
    int result = add(x, y);

    cout << x << " + " << y << " = " << result << endl;

    printLine();
    return 0;
}

// 함수 정의
int add(int a, int b) {
    // 전달받은 두 수의 합을 반환
    return a + b;
}

void printLine() {
    cout << "----------------------" << endl;
}
