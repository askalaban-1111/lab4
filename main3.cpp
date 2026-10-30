#include <iostream>
using namespace std;

int main() {
    int heroHP = 20;
    int monsterHP = 15;
    int choice;

    cout << "=== БОЙ ГЕРОЯ И МОНСТРА ===" << endl;
    cout << "\nЗдоровье:" << endl;
    cout << "Герой: " << heroHP << endl;
    cout << "Монстр: " << monsterHP << endl;

    do {
        cout << "\nЧто вы хотите сделать?" << endl;
        cout << "1 — Ударить монстра (4 урона)" << endl;
        cout << "2 — Излечить героя (не более 20)" << endl;
        cout << "0 — Закончить игру" << endl;
        cout << "Введите ваш выбор: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }
        else if (choice == 1) {
            monsterHP -= 4;
            cout << "\nВы ударили монстра! Он получил 4 урона." << endl;
        }
        else if (choice == 2) {
            int healAmount = 3;
            if (heroHP + healAmount > 20) {
                healAmount = 20 - heroHP;
            }
            heroHP += healAmount;
            cout << "\nВы излечились на " << healAmount << " HP." << endl;
        }
        else {
            cout << "\nНеверный выбор! Введите 0, 1 или 2." << endl;
            continue;
        }

        if (monsterHP > 0) {
            heroHP -= 2;
            cout << "Монстр атаковал вас! Вы получили 2 урона." << endl;
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