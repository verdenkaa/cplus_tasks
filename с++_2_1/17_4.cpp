#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;


struct WeatherReport {
    int day;
    float nightTemp;
    float dayTemp;
    float windSpeed;
    float visibility;
};

// Функция для записи
void write_data() {
    ofstream outFile("weather_reports.bin", ios::binary);

    vector<WeatherReport> reports = {
        {1, -5.0, 1.0, 10.0, 1000.0},
        {2, -10.0, -2.0, 15.0, 600.0},
        {3, -15.0, -5.0, 8.0, 300.0},
        {4, -7.0, 0.0, 12.0, 550.0},
        {5, -3.0, 2.0, 7.0, 700.0},
        {6, -12.0, -3.0, 10.0, 400.0}
    };
    
    for (auto& report : reports) {
        outFile.write(reinterpret_cast<char*>(&report), sizeof(WeatherReport));
    }
    
    outFile.close();
}

// Функция для чтения
vector<WeatherReport> read_data() {
    ifstream inFile("weather_reports.bin", ios::in | ios::binary);
    
    vector<WeatherReport> reports;
    WeatherReport report;
    
    while (inFile.read(reinterpret_cast<char*>(&report), sizeof(WeatherReport))) {
        reports.push_back(report);
    }
    
    inFile.close();
    return reports;
}

// Функция нахождения самого холодного дня с видимостью >= 500 м
void findColdest(vector<WeatherReport> reports) {
    int coldestDayNumber = -1;
    float minNightTemp = 100.0;

    for (WeatherReport report : reports) {
        if (report.nightTemp < minNightTemp && report.visibility >= 500) {
            minNightTemp = report.nightTemp;
            coldestDayNumber = report.day;
        }
    }

    if (coldestDayNumber != -1) {
        cout << "Самый холодный день с видимостью >= 500 м: " << coldestDayNumber << endl;
    } else {
        cout << "Нет подходящих" << endl;
    }
}

// Функция для нахождения дней с минимальной и максимальной температурой
void findMaxMin(vector<WeatherReport> reports) {
    float minAvg = 100;
    float maxAvg = -1;
    float minAvgTemp = 100;
    float maxAvgTemp = -1;

    for (WeatherReport report : reports) {
        float avgTemp = (report.nightTemp + report.dayTemp) / 2;

        if (avgTemp < minAvgTemp) {
            minAvgTemp = avgTemp;
            minAvg = report.day;
        }

        if (avgTemp > maxAvgTemp) {
            maxAvgTemp = avgTemp;
            maxAvg = report.day;
        }
    }

    cout << "День с минимальной среднесуточной температурой: " << minAvg << endl;
    cout << "День с максимальной среднесуточной температурой: " << maxAvg << endl;;
}

int main() {
    
    write_data();

    vector<WeatherReport> loadedReports = read_data();

    // Поиск самого холодного дня с видимостью >= 500 м
    findColdest(loadedReports);

    // Поиск дней с минимальной и максимальной среднесуточной температурой
    findMaxMin(loadedReports);


    return 0;
}
