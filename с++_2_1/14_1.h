#include <iostream>
using namespace std;


class Equal {
    // По условию закрытые
    private:
    int a;
    int b;

    public:
    Equal(int x, int y) {
        a = x;
        b = y;
    }

    // Перегрузка оператора ==
    bool operator==(const Equal& other) {
        return (a == other.a && b == other.b);
    }
};
