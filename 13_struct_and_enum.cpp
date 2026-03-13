// 13_struct_and_enum.cpp
// -----------------------------------------
// struct와 enum 기초
// - struct: 관련된 데이터를 하나로 묶는 사용자 정의 자료형
// - enum  : 미리 정한 값 집합에 "이름"을 붙이는 자료형

#include <iostream>
#include <string>

using namespace std;

// enum class를 사용하면 이름 충돌을 줄이고, 타입 안정성이 좋아집니다.
enum class Grade {
    A,
    B,
    C,
    D,
    F
};

// struct는 여러 데이터를 하나의 "레코드"처럼 묶어 관리할 때 유용합니다.
struct Student {
    string name;
    int age;
    Grade grade;
};

// enum 값을 사람이 읽기 좋은 문자열로 바꿔주는 함수
string gradeToString(Grade g) {
    switch (g) {
        case Grade::A: return "A";
        case Grade::B: return "B";
        case Grade::C: return "C";
        case Grade::D: return "D";
        case Grade::F: return "F";
        default:       return "Unknown";
    }
}

int main() {
    // struct 변수(객체) 생성
    Student s1;
    s1.name = "Kim";
    s1.age = 20;
    s1.grade = Grade::B;

    cout << "이름: " << s1.name << endl;
    cout << "나이: " << s1.age << endl;
    cout << "등급: " << gradeToString(s1.grade) << endl;

    return 0;
}
