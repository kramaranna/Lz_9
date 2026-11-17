#include <iostream>
#include <forward_list>
#include <iomanip>
using namespace std;

int main() {
    forward_list<double> numberList;

    numberList.push_front(10.5);
    numberList.push_front(15.0);
    numberList.push_front(22.3);
    numberList.push_front(7.2);
    numberList.push_front(18.6);
    numberList.push_front(14.9);

    cout << "Список дійсних чисел: ";
    for (double number : numberList) {
        cout << setprecision(1) << fixed << number << " ";
    }
    cout << endl;

    double sum = 0;
    for (double number : numberList) {
        if (number >= 15) {
            sum += number;
        }
    }

    cout << "Сума елементів, більших або рівних 15: " << setprecision(1) << fixed << sum << endl;

    return 0;
}