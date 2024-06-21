#include <iostream>
#include <vector>
// using namespace std;
class SpaceObject {
public:
    virtual void draw() const {
    std::cout << "Drawing a generic space object.\n";
    }
    virtual ~SpaceObject() {}
};

class Martian : public SpaceObject {
public:
    void draw() const override{
        std::cout << "Drawing a Martian.\n";
    }
};
class Venutian : public SpaceObject {
    void draw() const override {
        std::cout << "Drawing a Venutian.\n";//why need to put overried
    }
};
class Plutonian : public SpaceObject{
    void draw() const override{
        std::cout << "Drawing a Plutonian.\n";
    }
};
class SpaceShip : public SpaceObject{
    void draw() const override{
        std::cout << "Drawing a SpaceShip.\n";
    }
};
class LaserBeam : public SpaceObject{
    void draw() const override{
        std::cout << "Drawing a LaserBeam.\n";
    }
};

class ScreenManager{
private:
    std::vector<SpaceObject*> object; //need to put * for contain various object from many class
public:
    void addObject(SpaceObject* obj){
        object.push_back(obj);
    }
    void refreshScreen(){//for how to refresh
        for(const auto& obj : object){
            obj->draw();
        }
    }
};
int main(){
    ScreenManager manager;
    Martian m;
    Venutian v;
    Plutonian p;
    SpaceShip s;
    LaserBeam l;    

    manager.addObject(&m);  
    manager.addObject(&v);  
    manager.addObject(&p);
    manager.addObject(&s);
    manager.addObject(&l);
    
    manager.refreshScreen();

class Mercurian : public SpaceObject {
// public:
    void draw() const override{
        std::cout << "Drawing a Mercurian." << std::endl; //difference with mercurian
    }
};
    Mercurian mercurian;
    manager.addObject(&mercurian);
    manager.refreshScreen();
    return 0;
}


