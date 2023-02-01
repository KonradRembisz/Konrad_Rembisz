#include <iostream>
#include "statistics.h"

// Konstruktor domyślny
Statistics::Statistics(int x, int y){
    this->x = x;
    this->y = y;
}

//Konstruktor kopiujący
Statistics::Statistics(Statistics const & kopia){
    this->x = kopia.x;
    this->y = kopia.y;
}

// Destruktor
Statistics::~Statistics(){
    
}

// Funkcje dostępu do składowych
int Statistics::accessX(){
    return x;
}

int Statistics::accessY(){
    return y;
}

//Funkcje obliczeniowe
float Statistics::dodaj(){
    return x+y;
}

float Statistics::odejmij(){
    return x-y;
}