/**************************
* Автор: Черненко Никита. *
* Дата: 18.09.2025        *
* Вариант 15              *
***************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int temperature;
  double pressure;
    
  temperature = 600;
    
  while (temperature <= 900 ) {
    pressure = pow(10, ((-8920.0 / (temperature + 273)) + 7.54));
        
    cout<<fixed; cout.precision(3);
    cout<<"T= " <<temperature;
    cout<<"\t\P= " <<pressure <<endl; 
        
    temperature += 100;
  }

  do { 
    pressure=pow(10, ((-8920.0 / (temperature + 273)) + 7.54));
        
    cout<<fixed; cout.precision(3);
    cout<<"T= " <<temperature;
    cout<<"\t\P = " <<pressure<<endl;
        
    temperature += 50;
        
    } while (temperature <= 1100);
    
  return 0;
}
