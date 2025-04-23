#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
Cout<<"Roma krytoy"<<;
    srand(time(0));
    int number = rand() % 99 + 1;

    if (number % 2 == 0) {
        std::cout << "×åòíîå ÷èñëî." << std::endl;
    }
    else {
        std::cout << "Íå÷åòíîå ÷èñëî." << std::endl;
    }

    if (number < 10) {
        std::cout << "Îäíîçíà÷íîå" << std::endl;
    }
    else {
        std::cout << "Äâóõçíà÷íîå" << std::endl;
    }
