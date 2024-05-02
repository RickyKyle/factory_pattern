#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "vehicle.hpp"

class truck : public vehicle
{

public:

    truck();

    void deliver_goods() override;

};

#endif