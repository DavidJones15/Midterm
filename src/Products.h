#ifndef Products_H
#define Products_H

#include <iostream>
#include <string>
using namespace std;






class  Chemical
{
    private:
    string name;
    int inStock;
    double inUse;
    int storageSize;
    int orderSize;


    public:
    Chemical(string name, int inStock, double inUse, int storageSize, int orderSize): name(name), inStock(inStock), inUse(inUse), storageSize(storageSize), orderSize(orderSize){}




//getters


//get chemical name

string getName(){
        return name;
    }

//get in stock supply

int getStock(){
    return inStock;
}

//get in use supply

double getBeingUsed(){

return inUse;

}


//show Inventory

void ShowInventory(){

    cout << "Chemical: " << name << " In Stock: " << inStock << " Currently In use: " << inUse << endl; 

}

};
#endif