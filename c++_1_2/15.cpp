#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// вычисление суммы составных значений в строке
int sumComposite(const vector<int>& row) {
    int sum = 0;
    for (int num : row) {
        if (num > 1) {
            bool comp = false;
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    comp = true;
                    break;
                }
            }
            if (comp) {
                sum += num;
            }
        }
    }
    return sum;
}

bool sortcol(vector<int>v1, vector<int>v2)
{
    return v1[1] < v2[1];
}

int main() {
    int n;
    cout << "Введите размерность матрицы: ";
    cin >> n;

    vector<vector<int>> A(n, vector<int>(n));
    vector<int> B(n);

    cout << "Введите элементы матрицы A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    sort(A.begin(), A.end(), sortcol);
    for (int i = 0; i < n / 2; ++i) {
        int t;
        t = A[i][i];
        A[i][i] = A[n-i-1][n-i-1];
        A[n-i-1][n-i-1] = t;

    }

    cout << "Измененная матрица A:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        B[i] = sumComposite(A[i]);
    }

    cout << "Вектор B:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << B[i] << " ";
    }

    system("pause");
    return 0;
}
