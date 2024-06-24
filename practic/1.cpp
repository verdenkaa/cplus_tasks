#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Количество элементов в массиве: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Создаем массив, где элементами будут количество повторений индекса элемента
    
    int max = *max_element(arr.begin(), arr.end());
    vector<int> count_arr(max);


    for (int i=0; i < max; i++){
            count_arr[i] = 0;
        }
    for (int num : arr) {
        count_arr[num]++;
    }

    
    // Создаем новый вектор для хранения результата
    vector<int> result;
    for (int num : arr) {
        if (count_arr[num] != 2) {
            result.push_back(num);
        }
    }
    
    // Выводим результат
    cout << "Массив после удаления элементов, встречающихся ровно два раза: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
