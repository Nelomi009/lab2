/**************************
* Автор: Черненко Никита. *
* Дата: 18.09.2025        *
* Вариант 15              *
***************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double temperature;
  double pressure;
  double threeDecimalPlaces;
  double temperatureUpToNineHundred;
  double temperatureUpToAThousand;
  double increaseTheTemperatureByOneHundred;
  double increaseTemperatureByFifty;
    
  temperature = 600.0;
  threeDecimalPlaces = 3.0;
  temperatureUpToNineHundred = 900.0;
  increaseTheTemperatureByOneHundred = 100.0;
  temperatureUpToAThousand = 1100.0;
  increaseTemperatureByFifty = 50.0;

  while (temperature <=  temperatureUpToNineHundred ) {
    pressure = pow(10.0, ((-8920.0 / (temperature + 273.0)) + 7.54));
        
    cout << fixed; cout.precision(threeDecimalPlaces);
    cout << "T= " << temperature;
    cout << "\t\P= " << pressure <<endl; 

    temperature += increaseTheTemperatureByOneHundred;
  }

  do { 
    pressure = pow(10, ((-8920.0 / (temperature + 273.0)) + 7.54));
        
    cout << fixed;
    cout.precision(threeDecimalPlaces);
    cout << "T= " << temperature;
    cout <<"\t\P = " << pressure<<endl;
 
    temperature += increaseTemperatureByFifty;

    } while (temperature <= temperatureUpToAThousand);
    
  return 0;
}


