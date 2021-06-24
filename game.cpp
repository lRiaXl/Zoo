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
    cout << "2. Vendre un animal" << endl;
    cout << "3. Afficher vos animaux" << endl;
    
    
    
    cin >> input;
    return input;
}
Zoo Game::buyAnimal(Zoo zoo)
{
    int animal;
    int age;
    int ageselect;
    cout << "Selectionnez l'animal a acheter" << endl;
    cout << "1. Tigre" << endl;
    cout << "2. Poule" << endl;
    cout << "3. Coq" << endl;
    cout << "4. Aigle" << endl;
    cin >> animal;
    if (animal == 1 || animal == 4) {
        cout << "Quel age ?" << endl;
        cout << "1. 6 mois" << endl;
        cout << "2. 4 ans" << endl;
        cout << "3. 14 ans" << endl;
        cin >> ageselect;
        if (ageselect == 1) {
            age =  6;
        }
        if (ageselect == 2) {
            age = 48;
        }
        if (ageselect == 3) {
            age = 168;
        }
    }
    Money money;
    bool achat = money.buyAnimal(animal, age);
    if (achat == true) {
        if (animal == 1) {
            zoo.addAnimal(new Tigre("Tigre", age));
        }
         if (animal == 2) {
            zoo.addAnimal(new Poule("Poule", age));
        }
         if (animal == 3) {
            zoo.addAnimal(new Coq("Coq", age));
        }
         if (animal == 4) {
            zoo.addAnimal(new Aigle("Aigle", age));
        }
    }
    return zoo;
}
// void Game::sellAnimal(Zoo zoo)
// {
//     int animal

// }