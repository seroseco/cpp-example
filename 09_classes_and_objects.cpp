// 09_classes_and_objects.cpp
// -----------------------------------------
// 클래스(Class)와 객체(Object) 기초
// - 클래스: 설계도
// - 객체: 설계도로 만든 실제 데이터

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    // private: 클래스 내부에서만 직접 접근 가능
    string name;
    int age;

public:
    // 생성자(constructor): 객체가 만들어질 때 자동 호출
    Student(const string& studentName, int studentAge)
        : name(studentName), age(studentAge) {}

    // public 메서드로 정보를 출력
    void printInfo() const {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }

    // public 메서드로 age 값 변경
    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        }
    }
};

int main() {
    // Student 타입의 객체 생성
    Student s1("Kim", 20);

    s1.printInfo();

    // 객체의 상태 변경
    s1.setAge(21);
    s1.printInfo();

    return 0;
}
