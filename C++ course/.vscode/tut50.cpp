

//  object oriented programming;  


#include <iostream>
using namespace std;
class cars
{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    void setData(string cname, string mname, string ftype, float m, double p)
    {

        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void displayData()
    {
        cout << "car properties : " << endl;
        cout << "car company name : " << company_name << endl;
        cout << "car model : " << model_name << endl;
        cout << "car fuel type : " << fuel_type << endl;
        cout << "car mileage : " << mileage << endl;
        cout << "car price : " << price << endl;
    }
};
int main()
{

    cars car1;
    car1.setData("tayota", "altis", "petrol", 15.5, 150000);
    car1.displayData();
    return 0;
}