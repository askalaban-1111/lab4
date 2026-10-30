#include <iostream>
using namespace std;

int main() {
    int heroHP = 20;
    int monsterHP = 15;
    int choice;

    cout << "\nЗДОРОВЬЕ!" << endl;
    cout << "Герой: " << heroHP << endl;
    cout << "Монстр: " << monsterHP << endl;

    do {
        cout << "\nЧто вы хотите сделать?" << endl;
        cout << "1 — Ударить монстра (4 урона)" << endl;
        cout << "2 — Излечить героя (не более 20)" << endl;
        cout << "0 — Закончить игру" << endl;
        cout << "Введите ваш выбор: ";
        cin >> choice;

        int sum;

        switch (choice) {
            case 1: monsterHP -= 4; break;
            case 2: if (heroHP < 20) {
                heroHP += 3;
                if ((sum = heroHP - 20) > 0) {
                    heroHP -= sum;
                }
            }; break;
                
                default: cout << "Значение введено неверно!" << endl;
        }
        
    } while (choice != 0);

    if (heroHP <= 0) {
        heroHP = 0;
    }
    if (monsterHP <= 0) {
        monsterHP = 0;
    }

    cout << "Оставшееся здоровье героя: " << heroHP << endl;
    cout << "Оставшееся здоровье монстра: " << monsterHP << endl;

    if (heroHP > 0 && monsterHP == 0) {
        cout << "\nПобеда" << endl;
    }
    else if (heroHP == 0 && monsterHP > 0) {
        cout << "\nПроигрыш" << endl;
    }
    else if (heroHP == 0 && monsterHP == 0) {
        cout << "\nНичья" << endl;
    }

    return 0;
}
