// 05_loops.cpp
// -----------------------------------------
// 반복문 기초
// - for   : 횟수가 명확할 때 자주 사용
// - while : 조건이 참인 동안 반복

#include <iostream>

using namespace std;

int main() {
    // 1) for문: 1부터 5까지 출력
    // 구조: for (초기식; 조건식; 증감식)
    cout << "[for] 1부터 5까지: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2) while문: 합계 계산 예제
    int n = 1;
    int sum = 0;

    // n이 5 이하인 동안 반복
    while (n <= 5) {
        sum += n;  // sum = sum + n
        n++;       // n을 1 증가
    }

    cout << "[while] 1~5 합계: " << sum << endl;

    // 3) break / continue 간단 예시
    cout << "[for + continue] 짝수만 출력: ";
    for (int x = 1; x <= 10; x++) {
        if (x % 2 != 0) {
            continue;  // 홀수면 아래 코드를 건너뛰고 다음 반복으로
        }
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
