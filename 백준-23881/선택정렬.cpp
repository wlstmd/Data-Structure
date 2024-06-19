#include <iostream>
using namespace std;

int arr[10000];
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num = 0;
    for (int i = n - 1; i >= 0; i--) {
        int m = arr[0];
        int max = 0;
        for (int j = 0; j < i; j++) {
            if (m < arr[j]) {
                m = arr[j];
                max = j;
            }
        }

        int a, b;
        if (arr[max] > arr[i]) {
            int cnt = arr[i];
            arr[i] = arr[max];
            arr[max] = cnt;
            a = arr[max], b = arr[i];
            num++;
            if (num == k) {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
}