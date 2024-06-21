#include <iostream>
using namespace std;

class CarbonFootprint{
private:
    virtual double getCarbonFootprint() const =0;
    virtual void inputData()=0;//how use =0

};

class Factory:public CarbonFootprint {
private:
    double productionHours;
    double energyPerHour;
    double wastePerHour;
public:
    void inputData() override {
        std::cout << "Enter Factory's production hours, energy per hour (kWh), and waste per hour (kg): ";
        std::cin >> productionHours >> energyPerHour >> wastePerHour;
    }

    double getCarbonFootprint() const override {
        // Assume a fixed conversion factor for simplicity
        const double energyConversionFactor = 0.5; // kg CO2 per kWh
        const double wasteConversionFactor = 0.1; // kg CO2 per kg of waste
        double energyEmissions = energyPerHour * productionHours * energyConversionFactor;
        double wasteEmissions = wastePerHour * productionHours * wasteConversionFactor;
        return energyEmissions + wasteEmissions;
    }
};

class ElectricCar:public CarbonFootprint{
private:
    double IncorporateBattery;
    double chargeEfficiency;
public:
    virtual double getCarbonFootprint() const override;
    virtual void inputData() override;
};

class Building: public CarbonFootprint{
private:
    double energyConsumption;
    int numberOfOccupants;
public:
    double getCarbonFootprint() const override {
        const double conversionFactor = 0.5; // kg CO2 per kWh
        return energyConsumption * conversionFactor / numberOfOccupants;
    }
    void inputData() override {
        std::cout << "Enter Building's energy consumption (kWh) and number of occupants: ";
        std::cin >> energyConsumption >> numberOfOccupants;
    }


};
class Car:public CarbonFootprint{
private:
    double IncorporateBattery;
    double chargeEfficiency;
public:
    virtual double getCarbonFootprint() const override;
    virtual void inputData() override;
};

class Bicycle:public CarbonFootprint{
private:
    double manufacturingEmissions;
public:
    double getCarbonFootprint() const override {
        return manufacturingEmissions;
    }
    void inputData() override {
        std::cout << "Enter Bicycle's manufacturing emissions (kg CO2): ";
        std::cin >> manufacturingEmissions;
    }
};

int main() {
    Building building;
    Car car;
    ElectricCar electricCar;
    Factory factory;
    Bicycle bicycle;

    building.inputData();
    car.inputData();
    electricCar.inputData();
    factory.inputData();
    bicycle.inputData();

    std::cout << "Building Carbon Footprint: " << building.getCarbonFootprint() << " kg of CO2" << std::endl;
    std::cout << "Car Carbon Footprint: " << car.getCarbonFootprint() << " kg of CO2" << std::endl;
    std::cout << "Electric Car Carbon Footprint: " << electricCar.getCarbonFootprint() << " kg of CO2" << std::endl;
    std::cout << "Factory Carbon Footprint: " << factory.getCarbonFootprint() << " kg of CO2" << std::endl;
    std::cout << "Bicycle Carbon Footprint: " << bicycle.getCarbonFootprint() << " kg of CO2" << std::endl;

    return 0;
}
