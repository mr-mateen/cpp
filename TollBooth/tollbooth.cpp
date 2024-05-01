#include <iostream>
#include <conio.h>
using namespace std;

class TollBooth {
    private:
        unsigned int totalCars;
        double totalAmount;
    public:
        TollBooth() {
            totalCars = 0;
            totalAmount = 0;
        }
        void payingCar() {
            totalCars++;
            totalAmount += 0.50;
        }
        void nopayCar() {
            totalCars++;
        }
        void display() const {
            cout << "Total cars: " << totalCars << endl;
            cout << "Total amount collected: $" << totalAmount << endl;
        }
};

int main() {
    TollBooth booth;
    char key;
    while (true) {
        cout << "Press 'p' to count a paying car, 'n' to count a nonpaying car, or 'Esc' to exit." << endl;
        key = _getch();
        if (key == 'p') {
            booth.payingCar();
        } else if (key == 'n') {
            booth.nopayCar();
        } else if (key == 27) { 
            booth.display();
            break;
        }
    }
    return 0;
}
