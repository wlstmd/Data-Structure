#include "iostream"
#include "stack"

using namespace std;

int main() {
    stack<int> s;   // 스택
    int n;          // 명령어의 개수
    string command; // 명령어
    int num;        // push 시, 스택에 저장될 정수
    int result = 0; // 각 명령어의 결과값

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push") {
            cin >> num;
            s.push(num);    // num을 스택에 저장
        }

        else if (command == "pop") {
            if (s.empty()) { // 스택이 비어있으면
                result = -1; // -1 출력
                cout << result << endl;
            }
            else {
                result = s.top(); // 아니라면 가장 위의 값 출력
                cout << result << endl;
                s.pop();          // 출력 후 pop
            }
        }

        else if (command == "size") {
            cout << s.size() << endl;
        }

        else if (command == "empty") {
            if (s.empty()) {    // 스택이 비어있으면 1 출력
                result = 1;
                cout << result << endl;
            }
            else {              // 스택이 비어있지 않으면 0 출력
                result = 0;
                cout << result << endl;
            }
        }

        else if (command == "top") {
            if (s.empty()) {    // 스택이 비어있으면
                result = -1;    // -1 출력
                cout << result << endl;
            }
            else {
                result = s.top(); // 아니라면, top 값 출력
                cout << result << endl;
            }
        }
    }
}
