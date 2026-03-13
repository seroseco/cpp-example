// 16_stl_map_and_set.cpp
// -----------------------------------------
// STL의 map과 set 기초
// - map: key -> value 형태의 연관 컨테이너
// - set: 중복 없는 값 집합

#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    // 1) map 예시: 과목 -> 점수
    map<string, int> scores;

    // [] 연산자로 값 삽입/수정
    scores["math"] = 95;
    scores["english"] = 88;
    scores["science"] = 91;

    cout << "[map] 과목별 점수" << endl;
    for (const auto& pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // key 존재 여부 확인
    if (scores.find("math") != scores.end()) {
        cout << "math 과목이 존재합니다." << endl;
    }

    cout << endl;

    // 2) set 예시: 중복 제거
    set<int> numbers;
    numbers.insert(3);
    numbers.insert(1);
    numbers.insert(3);  // 중복 값 -> 무시됨
    numbers.insert(2);

    cout << "[set] 중복 제거 + 자동 정렬 결과" << endl;
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
