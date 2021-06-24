#include <iostream>
#include "money.h"
using namespace std;
Money::Money() 
{

}

bool Money::buyAnimal(int animal, int age)
{
    bool achat;
    if (animal == 1) {
        if (age == 1) {
            if (money >= 3000) {
                achat = true;
                money = money - 3000;
            }
        }
        if (age == 2) {
            if (money >= 120000) {
                achat = true;
                money = money - 120000;
            }
        }
        if (age == 3) {
            if (money >= 60000) {
                achat = true;
                money = money - 60000;
            }
        }
    }
    if (animal == 2) {
        if (money >= 20) {
            achat = true;
            money = money - 20;
        }
    }
    if (animal == 3) {
        if (money >= 100) {
            achat = true;
            money = money - 100;
        }
    }
    if (animal == 4) {
        if (age == 1) {
            if (money >= 1000) {
                achat = true;
                money = money - 1000;
            }
        }
        if (age == 2) {
            if (money >= 4000) {
                achat = true;
                money = money - 4000;
            }
        }
        if (age == 3) {
            if (money >= 2000) {
                achat = true;
                money = money - 2000;
            }
        }
        
        
    }
    cout << money << endl;
    return achat;
}   
// bool Money::sellAnimal(int animal, int age) 
// {

// }