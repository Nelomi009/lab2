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
    
  temperature = 600;

  //от 600 до 900 мы прибовляем по  услвию 100 по задачи 
  while (temperature <= 900 ) {
    pressure = pow(10.0, ((-8920.0 / (temperature + 273)) + 7.54));
        
    cout << fixed; cout.precision(3);
    cout << "T= " << temperature;
    cout << "\t\P= " << pressure <<endl; 

    //от 600 до 900 мы прибовляем по  услвию 100 по задачи 
    temperature += 100;
  }

  do { 
    pressure = pow(10, ((-8920.0 / (temperature + 273)) + 7.54));
        
    cout << fixed;
    //в ответе нужно 3 знака после запятой
    cout.precision(3);
    cout << "T= " << temperature;
    cout <<"\t\P = " << pressure<<endl;

    //от 1000 до 1100  мы прибовляем по 50  услвию по задачи 
    temperature += 50;

    //от 1000 до 1100  мы прибовляем по  услвию 50 по задачи 
    } while (temperature <= 1100);
    
  return 0;
}

