#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");

    srand(time(0));
    int number = rand() % 99 + 1;

    if (number % 2 == 0) {
        std::cout << "������ �����." << std::endl;
    }
    else {
        std::cout << "�������� �����." << std::endl;
    }

    if (number < 10) {
        std::cout << "�����������" << std::endl;
    }
    else {
        std::cout << "�����������" << std::endl;
    }