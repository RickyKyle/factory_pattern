#include <memory>

#include "vehicle_factory.hpp"

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