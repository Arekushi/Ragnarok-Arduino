#ifndef AligningLeft_h
#define AligningLeft_h

#include <State.h>

class Car;

class AligningLeft : public State<Car> {

    public:
        AligningLeft() : base::State("AligningLeft") {}
        void enter(Car data) override;
        void exit(Car data) override;
        void setActions() override;
        void setTransitions() override;
};

#endif
