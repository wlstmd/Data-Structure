#include "iostream"
#include "queue"

using namespace std;

int main() {
    queue<int> q;	// 큐
    int n;		// 명령어의 개수
    string command;	// 명령어
    int num;	// push시, 큐에 저장될 정수
    int result = 0;	// 각 명령어의 결과값

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push") {
            cin >> num;
            q.push(num);	// num을 큐에 저장
        }

        else if (command == "pop") {
            if (q.size() == 0) {	// 큐가 비어있으면
                result = -1;	// -1 출력
                cout << result << endl;
            }
            else {
                result = q.front();	// 아니라면 가장 앞의 값 출력
                cout << result << endl;
                q.pop();	// 출력후 pop
            }
        }

        else if (command == "size") {
            cout << q.size() << endl;
        }

        else if (command == "empty") {
            if (q.size() == 0) {	// 큐가 비어있으면 1 출력
                result = 1;
                cout << result << endl;
            }
            else {	// 큐가 비어있지않으면 0 출력
                result = 0;
                cout << result << endl;
            }
        }

        else if (command == "front") {
            if (q.size() == 0) {	// 큐가 비어있으면
                result = -1;	// -1 출력
                cout << result << endl;
            }
            else {
                result = q.front();	// 아니라면, front값 출력
                cout << result << endl;
            }
        }

        else if (command == "back") {
            if (q.size() == 0) {	// 큐가 비어있으면
                result = -1;	// -1 출력
                cout << result << endl;
            }
            else {
                result = q.back();	// 아니라면, back값 출력
                cout << result << endl;
            }
        }
    }
}