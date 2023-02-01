#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>


class Statistics{
public:
//! \brief Przykładowy wzór:
//! \f[
//!    |I_2|=\left| \int_{0}^T \psi(t) 
//!             \left\{ 
//!                u(a,t)-
//!                \int_{\gamma(t)}^a 
//!                \frac{d\theta}{k(\theta,t)}
//!                \int_{a}^\theta c(\xi)u_t(\xi,t)\,d\xi
//!             \right\} dt
//!          \right|
//!  \f]
    Statistics(int x, int y);
    Statistics(Statistics kopia);
    ~Statistics();
    int accessX();
    int accessY();
    float dodaj();
    float odejmij();
private:
    int x, y;
}

#endif
