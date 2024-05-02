#ifndef PLANE_HPP
#define PLANE_HPP

#include "vehicle.hpp"

class plane : public vehicle
{

public:

    plane();

    void deliver_goods() override;

};

#endif