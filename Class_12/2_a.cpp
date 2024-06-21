#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // for rand()

using namespace std;

// Base class for Pokemon
class Pokemon {
protected:
    string name;
    string sound;
    string type;
    int power;
    int speed;
public:
    Pokemon(string _name, string _sound, string _type, int _power, int _speed)
        : name(_name), sound(_sound), type(_type), power(_power), speed(_speed) {}

    string getName() const { return name; }
    string getSound() const { return sound; }
    string getType() const { return type; }
    int getPower() const { return power; }
    int getSpeed() const { return speed; }
};

// Derived class for wild Pokemon
class WildPokemon : public Pokemon {
private:
    int catchRate;
public:
    WildPokemon(string _name, string _sound, string _type, int _power, int _speed, int _catchRate)
        : Pokemon(_name, _sound, _type, _power, _speed), catchRate(_catchRate) {}

    int getCatchRate() const { return catchRate; }

    // Method to simulate escape behavior
    bool attemptEscape() const {
        // Simulating escape based on speed and random factor
        int escapeChance = rand() % 100 + 1; // Random number between 1 and 100
        return (escapeChance <= speed);
    }
};

// Derived class for caught Pokemon
class PalPokemon : public Pokemon {
public:
    PalPokemon(string _name, string _sound, string _type, int _power, int _speed)
        : Pokemon(_name, _sound, _type, _power, _speed) {}
};

// Class representing a Pokeball
class Pokeball {
private:
    string name;
    int efficiency;
public:
    Pokeball(string _name, int _efficiency) : name(_name), efficiency(_efficiency) {}

    string getName() const { return name; }
    int getEfficiency() const { return efficiency; }

    // Method to attempt catching a WildPokemon
    bool catchPokemon(const WildPokemon& pokemon) const {
        // Simulating catch based on efficiency and catch rate
        int catchChance = rand() % 100 + 1; // Random number between 1 and 100
        return (catchChance <= (efficiency * pokemon.getCatchRate()));
    }
};

// Class representing a Berry
class Berry {
private:
    string name;
    int effectiveness;
public:
    Berry(string _name, int _effectiveness) : name(_name), effectiveness(_effectiveness) {}

    string getName() const { return name; }
    int getEffectiveness() const { return effectiveness; }

    // Method to temporarily enhance a Pokeball's efficiency or make a WildPokemon easier to catch
    void applyEffect(Pokeball& pokeball) const {
        pokeball = Pokeball(pokeball.getName(), pokeball.getEfficiency() + effectiveness);
    }
};

// Class representing a player
class Player {
private:
    vector<Pokeball> pokeballs;
    Berry berry; // Optional Berry
public:
    Player(const Berry& _berry = Berry("", 0)) : berry(_berry) {}

    void addPokeball(const Pokeball& pokeball) {
        pokeballs.push_back(pokeball);
    }

    bool catchPokemon(const WildPokemon& pokemon) {
        for (const auto& pokeball : pokeballs) {
            if (pokeball.catchPokemon(pokemon)) {
                cout << "You caught " << pokemon.getName() << "!" << endl;
                return true;
            }
        }
        cout << "Oh no! " << pokemon.getName() << " escaped!" << endl;
        return false;
    }
};

// Class representing the world
class World {
private:
    vector<WildPokemon> wildPokemons;
public:
    void addWildPokemon(const WildPokemon& pokemon) {
        wildPokemons.push_back(pokemon);
    }

    void explore(Player& player) {
        if (wildPokemons.empty()) {
            cout << "No more wild pokemons in this area." << endl;
            return;
        }

        WildPokemon wildPokemon = wildPokemons.back();
        wildPokemons.pop_back();

        cout << "You encountered a wild " << wildPokemon.getName() << "!" << endl;

        // Attempt to catch the wild pokemon
        if (player.catchPokemon(wildPokemon)) {
            // If caught, add to the player's collection
            PalPokemon palPokemon(wildPokemon.getName(), wildPokemon.getSound(), wildPokemon.getType(),
                                  wildPokemon.getPower(), wildPokemon.getSpeed());
            cout << "You now have " << palPokemon.getName() << " in your collection!" << endl;
        }
    }
};

// Class for testing game functionalities
class GameTester {
public:
    static void test() {
        // Create player and world
        Player player;
        World world;

        // Add some pokeballs to player
        player.addPokeball(Pokeball("Pokeball", 1));

        // Add wild pokemons to the world
        world.addWildPokemon(WildPokemon("Pikachu", "Pika!", "Electric", 50, 60, 70));
        world.addWildPokemon(WildPokemon("Bulbasaur", "Bulba!", "Grass", 45, 55, 60));
        world.addWildPokemon(WildPokemon("Charmander", "Char!", "Fire", 55, 50, 65));

        // Simulate player exploration
        for (int i = 0; i < 3; ++i) {
            cout << "Exploring..." << endl;
            world.explore(player);
            cout << "-----------------------" << endl;
        }
    }
};

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Run game tests
    GameTester::test();

    return 0;
}