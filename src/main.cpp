#include <iostream>
#include "Products.h"

using namespace std;

void setUp(Chemical chemicals[], int size){

string updateInventory;

cout << "Would the user like to view or update inventory [View/Update]" << endl;
cin >> updateInventory;
    
    if(updateInventory == "View"){
        for(int i; i < size; i++){
            chemicals[i].ShowInventory();
        }
    }
    else if (updateInventory == "Update")
    {
    
    }
    else{
        cout << "Invalid Selection";
    }
    

}


int main(){

//list of chemicals

Chemical Select35("Select 35", 0.00 , 0 , 0 , 0);
Chemical PS140("PS - 140.00", 0.00, 0 , 0, 0);
Chemical EZBreak("EZ Break Berry", 0.00, 0, 0,0);
Chemical Scent("Scent", 0.00, 0, 0,0);
Chemical Nova("Nova", 0.00, 0, 0,0);



    return 0;
}