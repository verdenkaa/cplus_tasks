#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumBetweenMinMax(vector<int> numbers) {
    auto min = min_element(numbers.begin(), numbers.end());
    auto max = max_element(numbers.begin(), numbers.end());

    int minIndex = distance(numbers.begin(), min);
    int maxIndex = distance(numbers.begin(), max);

    // Если минимальный элемент находится после максимального, меняем их местами
    if (minIndex > maxIndex) {
        swap(minIndex, maxIndex);
    }

    int sum = 0;
    for (int i = minIndex; i <= maxIndex; i++) {
        sum += numbers[i];
    }

    return sum;
}

int main() {
    vector<int> numbers = {3, 1, 6, 9, 2, 4, 5};

    int sum = sumBetweenMinMax(numbers);

    cout << "Сумма элементов между минимальным и максимальным значениями: " << sum << endl;

    return 0;
}
