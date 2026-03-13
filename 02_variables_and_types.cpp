// 02_variables_and_types.cpp
// -----------------------------------------
// 변수(Variable)와 자료형(Type)의 기본 개념
// - int: 정수
// - double: 실수
// - char: 문자 1개
// - bool: 참/거짓
// - string: 문자열

#include <iostream>
#include <string>  // string을 쓰기 위해 필요

using namespace std;

int main() {
    // 변수 선언 + 초기화
    // "자료형 변수이름 = 값;" 형태를 기본으로 기억하면 됩니다.
    int age = 20;                 // 정수
    double height = 172.5;        // 실수
    char grade = 'A';             // 문자 1개(작은따옴표)
    bool isStudent = true;        // true 또는 false
    string name = "Kim";    // 문자열(큰따옴표)

    // 변수의 값을 출력해봅니다.
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "height: " << height << endl;
    cout << "grade: " << grade << endl;

    // bool 출력은 기본적으로 1(true), 0(false) 형태입니다.
    cout << "isStudent (default): " << isStudent << endl;

    // boolalpha를 쓰면 true/false 문자로 출력됩니다.
    cout << boolalpha;
    cout << "isStudent (boolalpha): " << isStudent << endl;

    return 0;
}
