#ifndef LeftSensorActivated_h
#define LeftSensorActivated_h

#include <Decision.h>

class Car;

class LeftSensorActivated : public Decision<Car> {

    public:
        bool decision(Car data) override;
};

#endif
