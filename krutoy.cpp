#include <iostream>
using namespace std;

int main() {
    cout << "[ - ] Программа \"Времена года\"" << endl;
    cout << endl;
    cout << "[ 1 ] Лето" << endl;
    cout << "[ 2 ] Осень" << endl;
    cout << "[ 3 ] Зима" << endl;
    cout << "[ 4 ] Весна" << endl;
    cout << endl;

    int choice;
    cout << "[ - ] Введите значение: ";
    cin >> choice;

    cout << endl;
    if (choice == 1) {
        cout << "[ - ] Сейчас лето, можно одеться легко и наслаждаться солнцем!" << endl;
    }
    else if (choice == 2) {
        cout << "[ - ] Сейчас осень, следует одеться тепло и взять с собой зонт." << endl;
    }
    else if (choice == 3) {
        cout << "[ - ] Сейчас зима, нужно тепло одеться и не забыть перчатки с шапкой!" << endl;
    }
    else if (choice == 4) {
        cout << "[ - ] Сейчас весна, можно одеться полегче, но лучше взять куртку на случай дождя." << endl;
    }
    else {
        cout << "[ - ] Внимание! Такого времени года нет в списке." << endl;
    }

    return 0;
}
