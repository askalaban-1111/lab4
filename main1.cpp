#include <iostream>

using namespace std;

int main() {

    int rounds;
    int max_score = 0;
    int best_round_num = 0;

    cout << "Введите раунды (от 1 до 20):" << endl;
    cin >> rounds;

    if (rounds > 20 || rounds < 1) {
        cout << "Знаечение введено неверно!" << endl;
    }

    int change = 0;
    int current_score = 0;

    for ( int r = 1; r <= rounds; ++r ) {
        cout << "\nВведите счёт за " << r << " раунд (от -100 до 300): " << endl;
        cin >> change;


        if ( change < -100 || change > 300 ) {
            cout << "Счёт введен неверно!\n" << endl;
            r = r - 1;
        } else {
            current_score = change;

            cout << "Текущий счёт: " << current_score << endl;
        }


        if ( current_score > max_score ) {
            max_score = current_score;
            best_round_num = r;
        }

    }

    cout << "\nМаксимальный счёт: " << max_score << endl;
    cout << "\nЛучший раунд: " << best_round_num << endl;




}
