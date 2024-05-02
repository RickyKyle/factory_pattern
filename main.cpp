#include <memory>
#include <stdexcept>

#include "plane.hpp"
#include "ship.hpp"
#include "truck.hpp"
#include "vehicle.hpp"

enum vehicle_type
{
    ship_vehicle,
    truck_vehicle,
    plane_vehicle
};

class vehicle_factory
{
public:
    std::unique_ptr<vehicle> create_vehicle(vehicle_type type)
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
};

int main()
{
    vehicle_factory factory;

    std::unique_ptr<
            vehicle> ship = factory.create_vehicle(vehicle_type::ship_vehicle);

    std::unique_ptr<
            vehicle> truck = factory.create_vehicle(vehicle_type::truck_vehicle);

    std::unique_ptr<
            vehicle> plane = factory.create_vehicle(vehicle_type::plane_vehicle);

    truck->deliver_goods();
    ship->deliver_goods();
    plane->deliver_goods();

    return 0;
}