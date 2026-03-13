// 19_lambda_basics.cpp
// -----------------------------------------
// 람다(lambda) 함수 기초
// - 이름 없는 "짧은 함수"를 바로 만들어 사용
// - 정렬 기준 전달, 간단 계산 등에 매우 유용

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 3};

    // 1) 기본 람다: 매개변수 2개를 받아 더한 값을 반환
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "add(3, 4) = " << add(3, 4) << endl;

    // 2) 람다를 정렬 기준으로 사용
    // 내림차순 정렬: 앞 값이 뒤 값보다 크면 true
    sort(nums.begin(), nums.end(), [](int x, int y) {
        return x > y;
    });

    cout << "내림차순 정렬: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    // 3) 캡처(capture) 기초
    int base = 10;
    auto plusBase = [base](int x) {
        // [base]는 바깥 변수 base를 값으로 복사해 사용
        return x + base;
    };

    cout << "plusBase(5) = " << plusBase(5) << endl;

    return 0;
}
