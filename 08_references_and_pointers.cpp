// 08_references_and_pointers.cpp
// -----------------------------------------
// 참조(reference)와 포인터(pointer) 아주 기초
// 초보 단계에서 "차이"를 감 잡는 것이 핵심입니다.

#include <iostream>

using namespace std;

// 참조를 사용해 원본 값을 직접 수정하는 함수
void increaseByReference(int& value) {
    value += 10;
}

// 포인터를 사용해 원본 값을 직접 수정하는 함수
void increaseByPointer(int* ptr) {
    if (ptr != nullptr) {
        *ptr += 20;
    }
}

int main() {
    int num = 100;

    // 참조: 기존 변수의 "별명"처럼 동작
    int& ref = num;
    ref += 1;  // num이 직접 바뀜

    cout << "참조 사용 후 num: " << num << endl;

    // 포인터: 변수의 "주소"를 저장
    int* p = &num;

    // *p는 p가 가리키는 실제 값(역참조)
    *p += 2;

    cout << "포인터 사용 후 num: " << num << endl;

    increaseByReference(num);
    cout << "함수(참조) 후 num: " << num << endl;

    increaseByPointer(&num);
    cout << "함수(포인터) 후 num: " << num << endl;

    return 0;
}
