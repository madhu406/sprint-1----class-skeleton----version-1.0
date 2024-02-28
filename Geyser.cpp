//this block of program includes Geyser class as super class which inherits  EnvironmentSensor class and WaterHeater class

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
