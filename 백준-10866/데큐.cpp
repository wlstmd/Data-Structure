#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, number;
    string cmd;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "push_back") {
            cin >> number;
            v.push_back(number);
        } else if (cmd == "push_front") {
            cin >> number;
            v.insert(v.begin(), number);
        } else if(cmd == "pop_back") {
            if (!v.empty()) {
                cout << v.back() << "\n";
                v.pop_back();
            } else {
                cout << -1 << "\n";
            }
        } else if(cmd == "pop_front") {
            if (!v.empty()) {
                cout << v.front() << "\n";
                v.erase(v.begin());
            } else {
                cout << -1 << "\n";
            }
        } else if (cmd == "front") {
            if (!v.empty()) {
                cout << v.front() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if(cmd == "back") {
            if (!v.empty()) {
                cout << v.back() << "\n";
            } else {
                cout << -1 << "\n";
            }
        } else if(cmd =="size") {
            cout << v.size() << "\n";
        } else if(cmd == "empty") {
            if (!v.empty()) {
                cout << 0 << "\n";
            } else {
                cout << 1 << "\n";
            }
        }
    }
}