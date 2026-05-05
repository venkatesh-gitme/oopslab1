class Vehicle
{
public:
    string make;
};

class Truck : public Vehicle
{
public:
    int load;
};

class RefrigeratedTruck : public Truck
{
public:
    int temp;
};

void q9()
{
    RefrigeratedTruck r;
    r.make="tata";
    r.load=100;
    r.temp=5;
    cout<<r.make<<" "<<r.load<<" "<<r.temp<<endl;
}
