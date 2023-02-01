#include <iostream>
#include "sequence.h"


// Konstruktor domyślny
Sequence::Sequence(int x, int y){
    this->x = x;
    this->y = y;
}

//Konstruktor kopiujący
Sequence::Sequence(Sequence const & kopia){
    this->x = kopia.x;
    this->y = kopia.y;
}

// Destruktor
Sequence::~Sequence(){
    
}

// Funkcje dostępu do składowych
int Sequence::accessX(){
    return x;
}

int Sequence::accessY(){
    return y;
}

//Funkcje obliczeniowe
float Sequence::dodaj(){
    return x+y;
}

float Sequence::odejmij(){
    return x-y;
}