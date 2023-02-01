#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>



class Sequence{
public:
/**
 * @brief Oblicz rozmycie Gaussa.
 * 
 * @details Rozmycie Gaussa jest jednym z popularnych filtrów obrazów, którego celem jest usuwanie szumów. 
 * Wzór na rozmycie Gaussa jest następujący:
 * 
 * @f$ G(x, y) = \frac{1}{2 \pi \sigma^2} e^{-(x^2 + y^2) / 2 \sigma^2} @f$
 * 
 * gdzie @f$ x @f$ i @f$ y @f$ oznaczają współrzędne punktu w obrazie, a @f$ \sigma @f$ jest stałą określającą stopień rozmycia.
 * 
 * @param x Współrzędna @f$ x @f$ punktu w obrazie.
 * @param y Współrzędna @f$ y @f$ punktu w obrazie.
 * @param sigma Stała określająca stopień rozmycia.
 * 
 * @return Wartość rozmycia Gaussa dla danego punktu w obrazie.
 */
    Sequence(int x, int y);
    Sequence(Sequence kopia);
    ~Sequence();
    int accessX();
    int accessY();
    float dodaj();
    float odejmij();
private:
    int x, y;
}

#endif
