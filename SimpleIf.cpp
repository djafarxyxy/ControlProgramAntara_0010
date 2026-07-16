#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int X;
    srand(time(0));
    X = rand() % 10;
    if (X == 5) {
        X = X + 1;
        cout << "nilai X sudah dikoreksi menjadi " << X << endl;
    }
    cout << "Bilangan yang diberikan = " << X << endl;
    return 0;
}
