// 14_const_and_scope.cpp
// -----------------------------------------
// const와 스코프(scope) 기초
// - const: 값 변경 금지
// - scope: 변수가 "유효한 범위"

#include <iostream>

using namespace std;

int main() {
    // const 변수는 초기화 후 값을 바꿀 수 없습니다.
    const double PI = 3.141592;
    cout << "PI: " << PI << endl;

    int x = 10;  // main 함수 전체에서 사용 가능(블록 안 제외)
    cout << "main scope x: " << x << endl;

    {
        // 이 중괄호 블록 안에서만 y가 살아있습니다.
        int y = 20;
        cout << "inner block y: " << y << endl;

        // 바깥의 x는 안쪽에서도 접근 가능
        cout << "inner block can access x: " << x << endl;
    }

    // y는 여기서 이미 소멸되어 사용할 수 없습니다.
    // cout << y << endl;  // 컴파일 에러

    return 0;
}
