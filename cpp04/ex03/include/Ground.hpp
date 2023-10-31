
#ifndef GROUND_HPP
#define GROUND_HPP

#include "AMateria.hpp"

// the Singleton pattern is a design pattern used to ensure
// that a class has only one instance and provides a global
// point of access to that instance. This is particularly
// useful when you want to restrict the instantiation of a
// class to a single object, often used for managing global
// resources, configurations, or services
class Ground {
private:
    AMateria *_array[50];
    unsigned int _counter;

//  only private
    Ground();
    Ground(const Ground &other);
    Ground &operator=(const Ground &other);
public:
    ~Ground();
    static Ground &getInstance(); // don't need an object
    void takeMateria(AMateria *m);
};

#endif // GROUND_HPP
