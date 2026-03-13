// 20_template_basics.cpp
// -----------------------------------------
// 템플릿(template) 기초
// - "자료형"을 나중에 정하는 함수/클래스 틀
// - 코드 재사용성을 크게 높여줌

#include <iostream>
#include <string>

using namespace std;

// 함수 템플릿: T라는 타입에 대해 동작
// T는 호출 시 전달한 인자 타입으로 자동 추론됩니다.
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // int 버전
    cout << "max(3, 7) = " << getMax(3, 7) << endl;

    // double 버전
    cout << "max(2.5, 1.2) = " << getMax(2.5, 1.2) << endl;

    // string 버전 (사전순 비교)
    cout << "max(apple, banana) = " << getMax(string("apple"), string("banana")) << endl;

    return 0;
}
