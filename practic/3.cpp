#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// Функция для транспонирования матрицы
vector<vector<int>> transpose(const vector<vector<int>>& matrix, int n, int m) {
    vector<vector<int>> transposed(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

bool compare(const vector<int>& a, const vector<int>& b){
    return *min_element(a.begin(), a.end()) < *min_element(b.begin(), b.end());
}

int main() {
    int n, m;
    
    cout << "Введите количество строк (n) и столбцов (m): ";
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    

    vector<vector<int>> transposedMatrix = transpose(matrix, n, m);
    
    sort(transposedMatrix.begin(), transposedMatrix.end(), compare);
    
    vector<vector<int>> sortedMatrix = transpose(transposedMatrix, m, n);
    
    cout << "Матрица после сортировки столбцов:" << endl;
    for (const auto& row : sortedMatrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    
    return 0;
}
