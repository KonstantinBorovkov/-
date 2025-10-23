#include <iostream>
#include <string>

using namespace std;

int main() {
    int month, day;

    cout << "[ + ] Календарь" << endl;
    cout << "[ 1 ] Январь" << endl;
    cout << "[ 2 ] Февраль" << endl;
    cout << "[ 3 ] Март" << endl;
    cout << "[ 4 ] Апрель" << endl;
    cout << "[ 5 ] Май" << endl;
    cout << "[ 6 ] Июнь" << endl;
    cout << "[ 7 ] Июль" << endl;
    cout << "[ 8 ] Август" << endl;
    cout << "[ 9 ] Сентябрь" << endl;
    cout << "[ 10 ] Октябрь" << endl;
    cout << "[ 11 ] Ноябрь" << endl;
    cout << "[ 12 ] Декабрь" << endl;
    cout << "[ + ] Выберите месяц: ";
    cin >> month;

    string monthName;

    switch (month) {
    case 1: monthName = "Январь"; break;
    case 2: monthName = "Февраль"; break;
    case 3: monthName = "Март"; break;
    case 4: monthName = "Апрель"; break;
    case 5: monthName = "Май"; break;
    case 6: monthName = "Июнь"; break;
    case 7: monthName = "Июль"; break;
    case 8: monthName = "Август"; break;
    case 9: monthName = "Сентябрь"; break;
    case 10: monthName = "Октябрь"; break;
    case 11: monthName = "Ноябрь"; break;
    case 12: monthName = "Декабрь"; break;
    default:
        cout << "[ ! ] Ошибка: неверный номер месяца!" << endl;
        return 1;
    }

    cout << "[ + ] Выбран месяц - \"" << monthName << "\"" << endl;
    cout << "[ + ] Выберите день месяца: ";
    cin >> day;

    switch (day) {
    case 1: cout << "[ + ] Календарь: 1 " << monthName << "." << endl; break;
    case 2: cout << "[ + ] Календарь: 2 " << monthName << "." << endl; break;
    case 3: cout << "[ + ] Календарь: 3 " << monthName << "." << endl; break;
    case 4: cout << "[ + ] Календарь: 4 " << monthName << "." << endl; break;
    case 5: cout << "[ + ] Календарь: 5 " << monthName << "." << endl; break;
    case 6: cout << "[ + ] Календарь: 6 " << monthName << "." << endl; break;
    case 7: cout << "[ + ] Календарь: 7 " << monthName << "." << endl; break;
    case 8: cout << "[ + ] Календарь: 8 " << monthName << "." << endl; break;
    case 9: cout << "[ + ] Календарь: 9 " << monthName << "." << endl; break;
    case 10: cout << "[ + ] Календарь: 10 " << monthName << "." << endl; break;
    case 11: cout << "[ + ] Календарь: 11 " << monthName << "." << endl; break;
    case 12: cout << "[ + ] Календарь: 12 " << monthName << "." << endl; break;
    case 13: cout << "[ + ] Календарь: 13 " << monthName << "." << endl; break;
    case 14: cout << "[ + ] Календарь: 14 " << monthName << "." << endl; break;
    case 15: cout << "[ + ] Календарь: 15 " << monthName << "." << endl; break;
    case 16: cout << "[ + ] Календарь: 16 " << monthName << "." << endl; break;
    case 17: cout << "[ + ] Календарь: 17 " << monthName << "." << endl; break;
    case 18: cout << "[ + ] Календарь: 18 " << monthName << "." << endl; break;
    case 19: cout << "[ + ] Календарь: 19 " << monthName << "." << endl; break;
    case 20: cout << "[ + ] Календарь: 20 " << monthName << "." << endl; break;
    case 21: cout << "[ + ] Календарь: 21 " << monthName << "." << endl; break;
    case 22: cout << "[ + ] Календарь: 22 " << monthName << "." << endl; break;
    case 23: cout << "[ + ] Календарь: 23 " << monthName << "." << endl; break;
    case 24: cout << "[ + ] Календарь: 24 " << monthName << "." << endl; break;
    case 25: cout << "[ + ] Календарь: 25 " << monthName << "." << endl; break;
    case 26: cout << "[ + ] Календарь: 26 " << monthName << "." << endl; break;
    case 27: cout << "[ + ] Календарь: 27 " << monthName << "." << endl; break;
    case 28: cout << "[ + ] Календарь: 28 " << monthName << "." << endl; break;
    case 29: cout << "[ + ] Календарь: 29 " << monthName << "." << endl; break;
    case 30: cout << "[ + ] Календарь: 30 " << monthName << "." << endl; break;
    case 31: cout << "[ + ] Календарь: 31 " << monthName << "." << endl; break;
    default:
        cout << "[ ! ] Ошибка: неверный день месяца!" << endl;
        return 1;
    }

    return 0;
}
