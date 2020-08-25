#include <iostream>
#include <fstream>


using namespace std;


int main() {
    const int length = 5;;

    int amountOfTemperaturesUnder10 = 0;
    int amountOfTemperaturesBetween10And20 = 0;
    int amountOfTemperaturesOver20 = 0;

    cout << "Please write 5 temperatures" << endl;


    for (int i = 1; i <= length; i++) {
        double temperatureInput;
        cout << "Temperature " << i << ": ";
        cin >> temperatureInput;
        if (temperatureInput < 10) {
            amountOfTemperaturesUnder10 += 1;
        } else if (temperatureInput >= 10 && temperatureInput <= 20) {
            amountOfTemperaturesBetween10And20 += 1;
        } else {
            amountOfTemperaturesOver20 += 1;
        }
    }

    cout << "Amount under 10: " << amountOfTemperaturesUnder10 << endl;
    cout << "Amount between 10 and 20: " << amountOfTemperaturesBetween10And20 << endl;
    cout << "Amount over 20: " << amountOfTemperaturesOver20 << endl;


    return 0;
}
