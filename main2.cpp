#include <iostream>
using namespace std;
int main() {

    int n;

    cout << "Введите число ( от 2 до 10000): " << endl;
    cin >> n;

    if ( n > 10000 || n < 2) {
        cout << "Некорректное число";
        return 1;
    }

    int i = 1;
    int sum = 0;

    while (i < n) {
        if ( n % i == 0 ) {
            sum += i;
        }
        i++;
    }

    if (sum == n) {
        cout << "Сумма: " << sum << "\nДа, совершенное!" << endl;
    } else if (sum != n) {
        cout << "Сумма: " << sum << "\nНет, не совершенное!" << endl;
    }


}