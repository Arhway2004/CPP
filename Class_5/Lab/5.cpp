// #include <iostream>

// class PopolationGrowth{
// public:
//     double Cal(double CurrentPopulation, double Growth_percent){
//         double annual_growth =  CurrentPopulation * Growth_percent/100;
//         return annual_growth;
//     };
// };

// int main(){
//     double num; 
//     double percent;
//     int cout =1;
//     double storge;
//     std::cout << "Enter the current world population: ";
//     std:: cin >> num;
//     if(!std::cin){
//         std::cout << "Please enter number";
//         return 1;
//     }
//     std::cout << "Enter the annual growth rate (percentage): ";
//     std:: cin >> percent;
//     if(!std::cin){
//         std::cout << "Please enter number";
//         return 1;
//     }
//     std::cout <<"Year    Project Population    Annual Increase" ;
//     for(int cout =1;cout <75; cout++){
//         double AnnualIncrease =PopolationGrowth.Cal(num,percent);
//         double ProjectPopulation = 
//         std::cout << cout << ProjectPopulation << AnnualIncrease ;
//     }
// }
















#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class PopulationGrowth {
private:
    double population;
    double growth_rate;
    int years;

public:
    PopulationGrowth(double population, double growth_rate, int years) {
        this->population = population;
        this->growth_rate = growth_rate;
        this->years = years;
    }

    double get_population() {
        return population;
    }

    double get_growth_rate() {
        return growth_rate;
    }

    int get_years() {
        return years;
    }

    int get_year_population_doubles() {
        return ceil(log(2) / log(1 + growth_rate / 100.0));
    }

    void compute_population_growth() {
        cout << "Year\tPopulation\tAnnual increase" << endl;
        for (int i = 1; i <= years; i++) {
            double annual_increase = population * (growth_rate / 100.0);
            population += annual_increase;

            cout << setw(4) << i << "\t" << fixed << setprecision(0) << population << "\t\t" << annual_increase << endl;
        }
    }
};

int main() {
    double initial_population, growth_rate;

    cout << "Enter the initial population: ";
    cin >> initial_population;

    cout << "Enter the annual growth rate (percentage): ";
    cin >> growth_rate;

    PopulationGrowth world_population(initial_population, growth_rate, 75);
    world_population.compute_population_growth();

    int year_population_doubles = world_population.get_year_population_doubles();
    if (year_population_doubles <= 75) {
        cout << "\nPopulation is projected to double in year " << year_population_doubles << "." << endl;
    } else {
        cout << "\nPopulation does not double within the next 75 years." << endl;
    }

    return 0;
}