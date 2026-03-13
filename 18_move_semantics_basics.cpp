// 18_move_semantics_basics.cpp
// -----------------------------------------
// 이동 의미론(move semantics) 기초 감 잡기
// - 복사(copy): 데이터를 "복제"
// - 이동(move): 리소스 소유권을 "이전"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 큰 문자열이라고 가정해봅시다.
    string original = "This is a long string for move semantics demo.";

    // 1) 복사
    string copied = original;
    cout << "복사 후 original: " << original << endl;
    cout << "복사 후 copied  : " << copied << endl;

    // 2) 이동
    // move(original)은 "이 값을 이동해도 된다"는 의도를 전달합니다.
    string moved = move(original);

    cout << "\n이동 후 moved   : " << moved << endl;
    // moved로 리소스가 넘어간 뒤 original은 "유효하지만 값은 불특정" 상태입니다.
    cout << "이동 후 original: " << original << endl;

    // vector에서도 move는 자주 쓰입니다.
    vector<string> v;
    v.push_back("one");
    v.push_back("two");

    string temp = "three";
    v.push_back(move(temp));

    cout << "\nvector 내용: ";
    for (const auto& s : v) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
