// 12_exception_basics.cpp
// -----------------------------------------
// 예외 처리(exception) 기초
// - try: 예외가 발생할 수 있는 코드
// - throw: 예외 발생
// - catch: 예외 처리

#include <iostream>
#include <stdexcept>  // runtime_error

using namespace std;

double divide(double a, double b) {
    if (b == 0.0) {
        // 0으로 나누기 같은 "오류 상황"을 예외로 알림
        throw runtime_error("0으로 나눌 수 없습니다.");
    }
    return a / b;
}

int main() {
    double x = 10.0;
    double y = 0.0;

    try {
        double result = divide(x, y);
        cout << "결과: " << result << endl;
    } catch (const runtime_error& e) {
        // e.what()은 예외 메시지를 문자열로 반환
        cout << "예외 발생: " << e.what() << endl;
    }

    cout << "프로그램은 예외를 처리하고 계속 진행할 수 있습니다." << endl;

    return 0;
}
