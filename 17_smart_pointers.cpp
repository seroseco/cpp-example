// 17_smart_pointers.cpp
// -----------------------------------------
// 스마트 포인터 기초 (메모리 관리 자동화)
// - unique_ptr: 소유권 1개(복사 불가, 이동만 가능)
// - shared_ptr: 참조 카운트 기반 공유 소유

#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Person {
public:
    string name;

    Person(const string& n) : name(n) {
        cout << "Person 생성: " << name << endl;
    }

    ~Person() {
        cout << "Person 소멸: " << name << endl;
    }
};

int main() {
    // 1) unique_ptr
    {
        // make_unique로 객체 생성(권장)
        unique_ptr<Person> up = make_unique<Person>("Unique Kim");
        cout << "unique_ptr가 가리키는 이름: " << up->name << endl;

        // unique_ptr는 복사 불가
        // unique_ptr<Person> up2 = up; // 컴파일 에러

        // 이동(move)으로 소유권 이전 가능
        unique_ptr<Person> up2 = move(up);
        if (!up) {
            cout << "up은 이제 소유권이 없습니다." << endl;
        }
        cout << "up2가 소유: " << up2->name << endl;
    }

    cout << endl;

    // 2) shared_ptr
    {
        shared_ptr<Person> sp1 = make_shared<Person>("Shared Lee");
        cout << "sp1 use_count: " << sp1.use_count() << endl;

        {
            shared_ptr<Person> sp2 = sp1;  // 소유권 공유
            cout << "sp1 use_count: " << sp1.use_count() << endl;
            cout << "sp2 use_count: " << sp2.use_count() << endl;
        }  // sp2 소멸 -> 카운트 감소

        cout << "블록 후 sp1 use_count: " << sp1.use_count() << endl;
    }

    return 0;
}
