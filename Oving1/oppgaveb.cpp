#include <iostream>
#include <fstream>


using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    const int length = 5;

    int amountOfTemperaturesUnder10 = 0;
    int amountOfTemperaturesBetween10And20 = 0;
    int amountOfTemperaturesOver20 = 0;


    double temperatures[length];
    read_temperatures(temperatures, length);

    for (int i = 0; i < length; i++) {
        if (temperatures[i] < 10) {
            amountOfTemperaturesUnder10 += 1;
        } else if (temperatures[i] >= 10 && temperatures[i] <= 20) {
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

void read_temperatures(double temperatures[], int length) {
    ifstream file;
    file.open("../temperatures.txt");
    if (!file) {
        cout << "Error while opening file";
        exit(EXIT_FAILURE);
    }
    int number;
    int index = 0;

    while (file >> number) {
        temperatures[index] = number;
        index++;
    }

    file.close();

}