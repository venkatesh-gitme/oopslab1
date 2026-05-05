class Speedometer
{
public:
    int speed;
};

class FuelGauge
{
public:
    int fuel;
};

class Thermometer
{
public:
    int temp;
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer
{
public:
    void show()
    {
        cout << speed << " " << fuel << " " << temp << endl;
    }
};

void q7()
{
    CarDashboard c;
    c.speed = 80;
    c.fuel = 50;
    c.temp = 30;
    c.show();
}
