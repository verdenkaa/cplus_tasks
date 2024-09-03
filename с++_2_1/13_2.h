#include <iostream>
#include <algorithm>
using namespace std;

class CoffeM{
    public:
    float coffe, milk, coffe_by_person, milk_by_person;
    int dark_done, capu_done;
    
    // Конструктор
    CoffeM(){
        dark_done = 0;
        capu_done = 0;
    }

    // Деструктор
    ~CoffeM(){
        dark_done = 0;
        capu_done = 0;
    }

    // Сварить тёмный
    void get_dark(int n){
        dark_done++;
        coffe = coffe - coffe_by_person;
    }

    // Сварить копучино
     void get_capu(int n){
        capu_done++;
        coffe = coffe - coffe_by_person;
        milk = milk - milk_by_person;
    }

    // Подсчет остатков
    void how_can_get(){
        cout << "Можно приготовить черного кофе " << coffe / coffe_by_person << endl;
        cout << "Можно приготовить капучино " << min(coffe / coffe_by_person, milk / milk_by_person) << endl;
    
    }
};