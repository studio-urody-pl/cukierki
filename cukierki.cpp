#include <iostream>

using namespace std;

int uczniowie, cukierki, dostac, zostac;

int main() {
    cout << "Ilu uczniow jest w Twojej klasie: ";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama: ";
    cin >> cukierki;

    dostac = cukierki/(uczniowie-1);

    cout << "Cukierkow dla kazdego ucznia: " <<dostac;

    zostac = cukierki-dostac*(uczniowie-1);

    cout <<endl<< "Dla Jasia na wieczor: " <<zostac;

    return 0;
}
