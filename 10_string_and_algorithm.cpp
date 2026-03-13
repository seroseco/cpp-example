// 10_string_and_algorithm.cpp
// -----------------------------------------
// 문자열(string)과 알고리즘(algorithm) 기초

#include <algorithm>  // sort
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // 1) 문자열 기본 조작
    string text = "cpp beginner";

    cout << "문자열: " << text << endl;
    cout << "길이: " << text.size() << endl;

    // 문자열 이어 붙이기
    string msg = text + " course";
    cout << "이어 붙이기: " << msg << endl;

    // 특정 위치 문자 접근 (0부터 시작)
    cout << "첫 글자: " << text[0] << endl;

    // 2) sort 알고리즘
    vector<int> nums = {5, 1, 4, 2, 3};

    sort(nums.begin(), nums.end());  // 오름차순 정렬

    cout << "정렬 결과: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
