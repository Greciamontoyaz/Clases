#include <iostream>
#include <cstring>
using namespace std;

struct car {
    string make;
    string model;
    int year;
    double mileage;
    string color; 
};

void display_car (car &Cars);
void paint_car(car &Car,string new_color);
int main() {
    int N=3;
    car cars[N];

    // Get car data from user or other source (replace with your actual data input)
     cars[0] = {"Toyota", "Camry", 2020, 35000,"Red"};
     cars[1] = {"Honda", "Civic", 2022, 12000,"Blue"};
     cars[2] = {"Ford", "Escape", 2018, 48000,"Black"};

     cout<<&cars[0]<<endl;

    display_car(cars[0]);
    paint_car (cars[0],"Blue");
    display_car(cars[0]);

    return 0;
}
void display_car (car &Cars){
    cout<<&Cars<<endl;
    cout << "Make: " << Cars.make << endl;
    cout << "Model: " << Cars.model << endl;
    cout << "Year: " << Cars.year << endl;
    cout << "Mileage: " << Cars.mileage << endl;
    cout << "Color: " << Cars.color << endl;

}
void paint_car(car &Car,string new_color)
{
    Car.color= new_color;
}