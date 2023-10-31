
#ifndef GROUND_HPP
#define GROUND_HPP

#include "AMateria.hpp"

class Ground {
public:
    static Ground &getInstance(); // don't need an object
    ~Ground();

    void takeMateria(AMateria *m);
private:
    AMateria *_array[50];
    unsigned int _counter;
    Ground();
    Ground(const Ground &other);
    Ground &operator=(const Ground &other);
};

#endif // GROUND_HPP
