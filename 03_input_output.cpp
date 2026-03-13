// 03_input_output.cpp
// -----------------------------------------
// 사용자 입력과 출력의 기본
// - cin  : 콘솔 입력
// - cout : 콘솔 출력

#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string name;

    // 출력 후 사용자가 입력할 수 있게 안내합니다.
    cout << "이름을 입력하세요: ";

    // getline은 "공백 포함 문자열" 입력에 적합합니다.
    // 예: "Kim Roi" 처럼 띄어쓰기가 있어도 전체를 읽습니다.
    getline(cin, name);

    cout << "나이를 입력하세요: ";
    cin >> age;  // 정수 1개 입력

    cout << "\n--- 입력 결과 ---" << endl;
    cout << "안녕하세요, " << name << "님!" << endl;
    cout << "내년 나이는 " << (age + 1) << "살이 됩니다." << endl;

    return 0;
}
