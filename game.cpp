#include "game.h"
#include "money.h"
#include <iostream>
#include <string>

Game::Game()
{
    game = true;
}
int Game::gameStart()
{

    cout << "Selectionnez votre action" << endl;
    cout << "1. Acheter un animal" << endl;
    cout << "2." << endl;
    cout << "3." << endl;
    
    
    
    cin >> input;
    cout << input << endl;
    return input;
}
void Game::buyAnimal(Zoo zoo)
{
    string animal;
    cout << "Selectionnez votre animal" << endl;
    cout << "1. Tigre" << endl;
    cout << "2. Poule" << endl;
    cout << "3. Aigle" << endl;
    cin >> animal;
    Money money;
    bool achat = money.buyAnimal(animal);
    
}