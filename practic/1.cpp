#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Количество элементов в массиве: ";
    cin >> n;

    int arr[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Находим максимальный элемент, чтобы определить размер count_arr
    int max_element = *std::max_element(arr, arr + n);
    
    // Создаем и инициализируем массив для подсчета количества вхождений элементов
    int count_arr[max_element + 1];
     for (int i = 0; i < max_element + 1; ++i) {
        count_arr[i] = 0;
    }

    
    for (int i = 0; i < n; ++i) {
        count_arr[arr[i]]++;
    }

    // Определяем новый размер массива result
    int new_size = 0;
    for (int i = 0; i < n; ++i) {
        if (count_arr[arr[i]] != 2) {
            new_size++;
        }
    }

  // Создаем новый массив для хранения результата
    int result[new_size];
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (count_arr[arr[i]] != 2) {
            result[index++] = arr[i];
        }
    }

    // Выводим результат
    cout << "Массив после удаления элементов, встречающихся ровно два раза: ";
    for (int i = 0; i < index; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
