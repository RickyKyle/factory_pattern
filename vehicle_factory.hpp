#ifndef VEHICLE_FACTORY_HPP
#define VEHICLE_FACTORY_HPP

#include "vehicle.hpp"

#include <memory>

enum vehicle_type
{
    ship_vehicle,
    truck_vehicle,
    plane_vehicle
};

class vehicle_factory
{

public:

    std::unique_ptr<vehicle> create_vehicle(vehicle_type type);

};

#endif
