#ifndef _SHIP_H_
#define _SHIP_H_

#include <vector>
#include <iostream>
using namespace std;

enum Orientation
{
    horizontal,
    vertical
};
// struct Coordinate
// {
//     int x;
//     int y;
// };

enum ShipType {
    carrierShip=1,
    cruiserShip
};

class Ship
{
public:
    Ship() {}
protected:
    int _orientation;
    pair<int,int> _location;
    int numOfHits{0};
    
    void getShipDetails(){
        cout << "Enter the ship location (two digits : xy): \n";
        cout << "Enter the orientation: horinzontal\n";
    }
    virtual void takeHit() ;
    virtual bool isShipSunk();
};


class CarrierShip : public Ship
{

    int _length = 5;
    int getShipLength() { return _length; }
    ShipType shipID{carrierShip};

    public:
        CarrierShip() : Ship()
        {
            cout << "Enter details for Carrier Ship:\n";
            getShipDetails();
            // set the values of ship vector to -1
        }

    void takeHit() override {
        numOfHits++;
    }

    bool isShipSunk() override{
        return numOfHits == _length;
    }
};

class CruiserShip : public Ship
{
    int _length = 3;
    ShipType shipID{cruiserShip};
    int getShipLength() { return _length; }
    void takeHit() override {
        numOfHits++;
    }

    bool isShipSunk() override{
        return numOfHits == _length;
    }


    public:
        CruiserShip() : Ship()
        {
            cout << "Enter details for Cruiser Ship:\n";
            getShipDetails();
            // set the values of ship vector to -1
        }
};
#endif