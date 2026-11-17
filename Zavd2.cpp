#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> numList;

    numList.push_front(8);
    numList.push_front(3);
    numList.push_front(12);
    numList.push_front(7);
    numList.push_front(10);
    numList.push_front(5);
    numList.push_front(4);
    numList.push_front(9);

    cout << "Початковий список чисел: ";
    for (int number : numList) {
        cout << number << " ";
    }
    cout << endl;

    forward_list<int> result;
    for (int number : numList) {
        if (number % 2 != 0) {
            result.push_front(number);
        }
    }

    cout << "Список після видалення парних чисел: ";
    for (int number : result) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}