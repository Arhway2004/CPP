// #include <iostream>
// #include <string>

// class CarbonFootprint {
// public:
//     virtual double getCarbonFootprint() const = 0;
//     virtual void inputData() = 0;
//     virtual ~CarbonFootprint() {}
// };

// class Building : public CarbonFootprint {
// private:
//     double energyConsumption;
//     int numberOfOccupants;

// public:
//     void inputData() override {
//         std::cout << "Enter Building's energy consumption (kWh) and number of occupants: ";
//         std::cin >> energyConsumption >> numberOfOccupants;
//     }

//     double getCarbonFootprint() const override {
//         // Assume a fixed conversion factor for simplicity
//         const double conversionFactor = 0.5; // kg CO2 per kWh
//         return energyConsumption * conversionFactor / numberOfOccupants;
//     }
// };

// class Car : public CarbonFootprint {
// private:
//     double fuelConsumption;
//     double fuelEfficiency;

// public:
//     void inputData() override {
//         std::cout << "Enter Car's fuel consumption (liters) and fuel efficiency (km/liter): ";
//         std::cin >> fuelConsumption >> fuelEfficiency;
//     }

//     double getCarbonFootprint() const override {
//         // Assume a fixed conversion factor for simplicity
//         const double conversionFactor = 2.3; // kg CO2 per liter of fuel
//         return fuelConsumption * conversionFactor / fuelEfficiency;
//     }
// };

// class ElectricCar : public CarbonFootprint {
// private:
//     double energyConsumption;
//     double chargeEfficiency;

// public:
//     void inputData() override {
//         std::cout << "Enter Electric Car's energy consumption (kWh), charge efficiency (ratio): ";
//         std::cin >> energyConsumption >> chargeEfficiency;
//     }

//     double getCarbonFootprint() const override {
//         // Assume a fixed conversion factor for simplicity
//         const double conversionFactor = 0.3; // kg CO2 per kWh
//         return energyConsumption * conversionFactor / chargeEfficiency;
//     }
// };

// class Factory : public CarbonFootprint {
// private:
//     int productionHours;
//     double energyPerHour;
//     double wastePerHour;

// public:
//     void inputData() override {
//         std::cout << "Enter Factory's production hours, energy per hour (kWh), and waste per hour (kg): ";
//         std::cin >> productionHours >> energyPerHour >> wastePerHour;
//     }

//     double getCarbonFootprint() const override {
//         // Assume a fixed conversion factor for simplicity
//         const double energyConversionFactor = 0.5; // kg CO2 per kWh
//         const double wasteConversionFactor = 0.1; // kg CO2 per kg of waste
//         double energyEmissions = energyPerHour * productionHours * energyConversionFactor;
//         double wasteEmissions = wastePerHour * productionHours * wasteConversionFactor;
//         return energyEmissions + wasteEmissions;
//     }
// };

// class ComplexBicycle : public CarbonFootprint {
// private:
//     double manufacturingEmissions;

// public:
//     void inputData() override {
//         std::cout << "Enter Bicycle's manufacturing emissions (kg CO2): ";
//         std::cin >> manufacturingEmissions;
//     }

//     double getCarbonFootprint() const override {
//         return manufacturingEmissions;
//     }
// };

// int main() {
//     Building building;
//     Car car;
//     ElectricCar electricCar;
//     Factory factory;
//     ComplexBicycle bicycle;

//     building.inputData();
//     car.inputData();
//     electricCar.inputData();
//     factory.inputData();
//     bicycle.inputData();

//     std::cout << "Building Carbon Footprint: " << building.getCarbonFootprint() << " kg of CO2" << std::endl;
//     if((building.getCarbonFootprint()||car.getCarbonFootprint()|| electricCar.getCarbonFootprint()||factory.getCarbonFootprint()||bicycle.getCarbonFootprint() )<0.0){
//         std::cout << "This building is not eco-friendly" << std::endl;
//     }
//     else{
//         std::cout << "This building is eco-friendly" << std::endl;
//     }   
//     std::cout << "Car Carbon Footprint: " << car.getCarbonFootprint() << " kg of CO2" << std::endl;
//     std::cout << "Electric Car Carbon Footprint: " << electricCar.getCarbonFootprint() << " kg of CO2" << std::endl;
//     std::cout << "Factory Carbon Footprint: " << factory.getCarbonFootprint() << " kg of CO2" << std::endl;
//     std::cout << "Bicycle Carbon Footprint: " << bicycle.getCarbonFootprint() << " kg of CO2" << std::endl;

//     return 0;
// }