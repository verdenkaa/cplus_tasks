#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// Функция для замены точек и запятых на пробелы
string replaceDelimiters(string str) {
    for (char a : str) {
        if (a == '.' || a == ',') {
            a = ' ';
        }
    }
    return str;
}

// Функция для разделения через поток
vector<string> split(string str) {
    vector<string> words;
    istringstream iss(str);
    string word;
    
    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}

// Функция для нахождения трех коротких слов
string shortestWords(vector<string> words) {
    vector<string> sortedWords = words;
    sort(sortedWords.begin(), sortedWords.end(), [](string a, string b) {
        return a.length() < b.length();
    });

    string result;
    for (int i = 0; i < 3; i++) {
        result += sortedWords[i] + " ";
    }
    return result;
}

// Функция для подсчета слов
int countWordsEndingWithLastLetter(vector<string> words) {
    char lastRus = 'z';  // заменить на я
    char lasEng = 'z';
    int count = 0;

    for (string word : words) {
        char lastChar = tolower(word.back());
        if (lastChar == lastRus || lastChar == lasEng) {
            ++count;
        }
    }

    return count;
}

int main() {
    string input = "Здесь пример строки, с некоторыми словами. сбуквойЯ и СБуквойz";

    input = replaceDelimiters(input);

    // Разделение строки на слова по пробелам
    vector<string> words = split(input);

    // Нахождение трех самых коротких слов
    string ShortestWords = shortestWords(words);
    cout << "Три самых коротких слова: " << ShortestWords << endl;

    // Подсчет слов, заканчивающихся на последнюю букву алфавита
    int count = countWordsEndingWithLastLetter(words);
    cout << "Количество слов, заканчивающихся на 'я' или 'z': " << count << endl;

    return 0;
}
