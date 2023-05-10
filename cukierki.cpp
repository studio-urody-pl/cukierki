#include <iostream>
// first program in C++ course
using namespace std;

int classmates, sweets, given, forJohnny;

int main() {
    cout << "How many classmates are in your class? : ";
    cin >> classmates;

    cout << "How many sweets did mom buy? : ";
    cin >> sweets;

    given = sweets / (classmates - 1);

    cout << "Sweets fo each classmate : " << given;

    forJohnny = sweets - given * (classmates - 1);

    cout << endl << "Sweets left for Johnny: " << forJohnny;

    return 0;
}
