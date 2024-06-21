// #include <iostream>
// #include <vector>
// using namespace std;

// class Pokemon{
//     string name, sound,type,power;
//     int speed;

// public: // nessary when need to use inheritance
//     Pokemon(string name, string sound, string type, string power, int speed):name(name),sound(sound),type(type),power(power),speed(speed){} 
    
//     void GTN(string name){
//         this->name =name;
//     }
//     void GTS(string sound){
//         this->sound =sound;
//     }
//     void GTT(string type){
//         this->type =type;   
//     }
//     void GTP(string power){
//         this->power =power;
//     }
//     void GTS(int speed){
//         this->speed =speed;
//     }
// };

// class WildPokemon: public Pokemon{
//     int catchRate;
//     WildPokemon(string name, string sound, string type, string power, int speed,int catchRate) : Pokemon(name,sound,type,power,speed),catchRate(catchRate){}
//     void GTCR(int catchRate){
//         this->catchRate =catchRate;
//     }
//     void attemptEscape(int CatchRate){
//         int escapeRate = rand()%100+1;
//         if (CatchRate > escapeRate){
//             cout << "Pokemon Escaped"<<endl;
//         }else {
//             cout << "Pokemon was caught"<<endl;
//         }
//     }
// };

// class PallPokemon: public Pokemon{
//     bool isCompanion;
//     PallPokemon(string name, string sound, string type, string power, int speed): Pokemon(name,sound,type,power,speed),isCompanion(true) {}
// public:
//     bool isCompanion(bool isCompanion) const{
//         // bool isCompanion = true;
//         return isCompanion;
//     }
//     void setCompanion(bool companion){
//         isCompanion = companion;
//     }
// };

// class Pokeball{
//     string name;
//     int efficiency;
//     Pokeball(string name, int efficency):name(name),efficiency(efficiency){}
// public:
//     bool catchPokemon() {
//         // Generate a random number between 1 and 100 to simulate catching probability
//         int chance = rand() % 100 + 1;

//         // Compare the chance with the efficiency of the Pokeball
//         if (chance <= efficiency) {
//             std::cout << "You caught the wild Pokémon!" << std::endl;
//             return true; // Successfully caught the Pokémon
//         } else {
//             std::cout << "The wild Pokémon broke free!" << std::endl;
//             return false; // Failed to catch the Pokémon
//         }
//     }
//     string getName(){
//         return name;
//     }
//     int getefficiency(){
//         return efficiency;
//     }

// };

// class Barry{
//     string name;
//     int effcetiveness;
//     Barry(string name, int effcetiveness):name(name),effcetiveness(effcetiveness){}
// public:
//     void applyEffient(int bonus){
//         effcetiveness += bonus;
//     }
//     void removeEfficient(int bonus){
//         effcetiveness -= bonus;
//     }
//     void getEffient(){
//         cout << "Effient: " << effcetiveness << endl;
//     }
// };

// class Player{
//     vector<Pokeball> PokeBallCollection;
//     Pokeball pokeball;
//     vector<Barry> berryCollection;
//     Player(Pokeball pokeball):pokeball(pokeball){}

//     void addpokeball(Pokeball pokeball){
//         PokeBallCollection.push_back(pokeball);
//     }
//     void addbarry(Barry barry){
//         berryCollection.push_back(barry);
//     }


//     bool catchPokemon() {
//         if (pokeball.getName().empty()) {
//             std::cout << "No Pokéball available to attempt catching Pokémon." << std::endl;
//             return false;
//         }

//         return pokeball.catchPokemon();
//     }
// };

// class World{
//     vector<WildPokemon> wildpokemons;
//     World(){}

// public:
//     void add(WildPokemon& wildpokemon){// dinfin input format
//         wildpokemons.push_back(wildpokemon);
//     }
//     // void simulatePlayer(){
//     //     for()
//     // }
// };

// class GameTester {
// public:
//     // Method to simulate catching a wild Pokemon
//     static void testCatchMechanics(Player& player, const WildPokemon& wildPokemon) {
//         cout << "Attempting to catch wild Pokemon..." << endl;
//         if (player.catchPokemon(wildPokemon)) {
//             cout << "Successfully caught the wild Pokemon!" << endl;
//         } else {
//             cout << "Failed to catch the wild Pokemon!" << endl;
//         }
//     }
// };

// int main() {
//     // Seed the random number generator
//     srand(time(nullptr));

//     // Create a Pokeball for the player
//     Pokeball pokeball("Pokeball", 50);

//     // Create a Barry for the player
//     Barry berry("Berry", 10);

//     // Create a Player
//     Player player(pokeball);
//     player.addBerry(berry);

//     // Create a wild Pokemon
//     WildPokemon wildPokemon("Pikachu", "Pika pika!", "Electric", "Thunderbolt", 100, 70);

//     // Test catching mechanics
//     GameTester::testCatchMechanics(player, wildPokemon);

//     return 0;
// }