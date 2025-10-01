#include <iostream>
using namespace std;
int main() {

    int n, i, j, t;
    cout << "Qual'è il numero di cifre?" << endl;
    cin >> n;
    int r[n];
    i = 0;
    while (i < n) {
        r[i] = rand() % (n * 10);
        i = i + 1;
    }
    bool scambio;
    scambio = true;
    i = 0;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << r[i] << endl;
        i = i + 1;
    }
    return 0;
}