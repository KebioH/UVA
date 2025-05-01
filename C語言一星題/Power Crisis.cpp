#include <iostream>
using namespace std;

int josephus(int n, int m) {
    if (n == 1) return 0;
    return (josephus(n - 1, m) + m) % n;
}

int main() {
    int N;
    while (cin >> N && N != -1) {
        int n = N - 1;
        int ans = -1;

        for (int m = 1; m <= n; m++) {
            if (josephus(n, m) == 11) {
                ans = m;
                break;
            }
        }

        if (ans != -1) {
            cout << ans << endl << endl;
        }
        else {
            cout << "no answer\n\n";
        }   
    }
}
