// 11_file_io.cpp
// -----------------------------------------
// 파일 입출력 기초
// - ofstream: 파일에 쓰기
// - ifstream: 파일에서 읽기

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const string fileName = "memo.txt";

    // 1) 파일에 쓰기
    {
        ofstream outFile(fileName);

        if (!outFile) {
            cout << "파일을 열 수 없습니다: " << fileName << endl;
            return 1;
        }

        outFile << "C++ 파일 입출력 예제" << endl;
        outFile << "첫 번째 줄" << endl;
        outFile << "두 번째 줄" << endl;
    }  // 블록 종료 시 outFile 자동 닫힘

    // 2) 파일에서 읽기
    {
        ifstream inFile(fileName);

        if (!inFile) {
            cout << "파일을 읽을 수 없습니다: " << fileName << endl;
            return 1;
        }

        cout << "파일 내용:" << endl;

        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
    }  // 블록 종료 시 inFile 자동 닫힘

    return 0;
}
