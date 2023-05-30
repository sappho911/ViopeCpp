#include <iostream>
#include <string>
using namespace std;

class Vehicle

{

public:
    int weight;

    int top_speed;

    long driven_km;

    Vehicle(int weight, int top_speed, long driven_km);

    void Drive(int journey);

    int InputWeight();

    int InputTopSpeed();

    long InputDrivenKM();
};

// Class contains only one initializing method, where the characteristics of Vehicle are

// relayed as parameters right after creating the object.

Vehicle::Vehicle(int Aw, int Ats, long Akm)

{

    weight = Aw;

    top_speed = Ats;

    driven_km = Akm;
}

void Vehicle::Drive(int journey)

{

    driven_km += journey;
}

int Vehicle::InputWeight()

{

    return weight;
}

int Vehicle::InputTopSpeed()

{

    return top_speed;
}

long Vehicle::InputDrivenKM()

{

    return driven_km;
}

// Car class and its method (your implementation)

//

//

// Class characteristics: (data type in parentheses)

class Car : public Vehicle
{
public:
    string brand;
    string model;
    string register_no;
    bool running;

    Car(int weight, int speed, long km, string car_brand, string car_model, string car_register_no, bool car_running);
    void turn_on();
    void turn_off();
    void check_up();
};

Car::Car(int weight, int speed, long km, string car_brand, string car_model, string car_register_no, bool car_running) : Vehicle(weight, speed, km)
{
    brand = car_brand;
    model = car_model;
    register_no = car_register_no;
    running = car_running;
}

void Car::turn_on()
{
    running = 1;
}

void Car::turn_off()
{
    running = 0;
}

void Car::check_up()
{
    cout << "car info:\n"
         << "brand:" << brand << endl
         << "model:" << model << endl
         << "Kilometres:" << driven_km << endl
         << "weight:" << weight << endl
         << "Top speed:" << top_speed << endl
         << "License plate:" << register_no << endl;
    if (running == 1)
    {
        cout << "car is running." << endl;
    }
    else if (running == 0)
    {
        cout << "car is not running." << endl;
    }
}

// main program
////////////////////////////////////////

int main()

{

    int weight, speed;

    long km;

    string brand, model, license;

    // ask information about car

    cout << "Input car brand: ";

    cin >> brand;

    cout << "Input car model: ";

    cin >> model;

    cout << "Input car license plate number: ";

    cin >> license;

    cout << "Input car weight: ";

    cin >> weight;

    cout << "Input car top speed: ";

    cin >> speed;

    cout << "Input distance traveled by car: ";

    cin >> km;

    cout << endl;

    Car carX(weight, speed, km, brand, model, license, 0);

    carX.check_up();

    carX.turn_on();

    carX.Drive(95);

    cout << endl;

    carX.check_up();
}