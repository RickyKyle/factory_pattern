#include "vehicle_factory.hpp"

#include <stdexcept>

#include "plane.hpp"
#include "ship.hpp"
#include "truck.hpp"

std::unique_ptr<vehicle> vehicle_factory::create_vehicle(vehicle_type type)
{
    switch(type)
    {
        case vehicle_type::ship_vehicle:
            return std::make_unique<ship>();
        case vehicle_type::truck_vehicle:
            return std::make_unique<truck>();
        case vehicle_type::plane_vehicle:
            return std::make_unique<plane>();
        default:
            throw std::runtime_error("Error");
    }
}


