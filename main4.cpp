#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Введите размеры поля 'строки' и 'колонны' (от 3 до 9): ";
    cin >> r >> c;

    if (r < 3 || r > 9 || c < 3 || c > 9) {
        cout << "Размер должен быть от 3 до 9!" << endl;
        return 1;
    }

    int count_X = 0;
    int count_DOT = 0;

    for (int i = 1; i <= c; i++) {

        for (int j = 1; j <= r; j++) {

            if (i == 1 && j == 1) {

                cout << "S ";

            } else if (i == c && j == r) {

                cout << "F";

            } else if ((i * j) % 7 == 0) {

                cout << "X ";
                count_X++;

            } else {

                cout << ". ";
                count_DOT++;

            }

        }
        cout << endl;
    }

    cout << "Количесвто препятствий: " << count_X << endl;
    cout << "Количесвто точек: " << count_DOT << endl;

    return 0;
}