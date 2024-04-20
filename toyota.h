#ifndef TOYOTA_H
#define TOYOTA_H
#include "car.h"

class Toyota : public Car
{
public:
    Toyota();
    void navigate();
    ~Toyota();
};

#endif