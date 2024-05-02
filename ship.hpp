#ifndef SHIP_HPP
#define SHIP_HPP

#include "vehicle.hpp"

class ship : public vehicle
{

public:

    ship();

    void deliver_goods() override;

};

#endif