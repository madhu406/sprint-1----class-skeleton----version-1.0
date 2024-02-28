//this program includes Geyser class as super class which inherits  EnvironmentSensor class and WaterHeater class

#include <iostream>

// super class
class Geyser {
public:     // this is access sepcifier public
    virtual void activate() const = 0;
};

class EnvironmentSensor : public Geyser {
public:
    void activate(int temperature) const override {
        if (temperature < 20) {    // if the temprature is less than 20 degree then water get worm at high temprature
            cout << "Geyser should activate at high temprature" << std::endl;
        } else {
            std::cout << "Geyser should activate low temprature" << std::endl;
        }
    }
};
// Subclass WaterHeater
class WaterHeater : public Geyser {
public:
    void activate(int temperature) const override {
        if (temperature < 20) {
            std::cout << "Water Heater should activate at high temprature " << std::endl;
        } else {
            std::cout << "Water Heater should activate low temprature" << std::endl;
        }
    }
};

int main() {
    EnvironmentSensor environmentGeyser;    // objects are created 
    WaterHeater waterHeaterGeyser;

    // Activate the environment geyser
    cout << "Activating Environment Sensor Geyser:" << std::endl;
    environmentGeyser.activate();

    // Activate the water heater geyser
    std::cout << "\nActivating Water Heater Geyser:" << std::endl;
    waterHeaterGeyser.activate();

    return 0;
}
