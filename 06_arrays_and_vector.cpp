// 06_arrays_and_vector.cpp
// -----------------------------------------
// 배열(array)과 벡터(vector) 기초
// - 배열: 크기가 고정
// - 벡터: 크기를 유연하게 늘리고 줄일 수 있음

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1) 고정 크기 배열
    int scores[5] = {90, 85, 100, 70, 95};

    cout << "배열 원소: ";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // 배열 평균 계산
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }
    cout << "배열 평균: " << (total / 5.0) << endl;

    // 2) vector: 동적 배열
    vector<int> nums;

    // push_back으로 원소 추가
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << "\nvector 원소: ";
    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // range-based for (C++11+) 문법
    cout << "range-based for: ";
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
