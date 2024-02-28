//This is main program where classes are included 
int main() {
     // objects of classes has been created
    Owner homeowner;
    Bed bed;
    EnvironmentSensor environmentGeyser;
    WaterHeater waterHeaterGeyser;
  
    homeowner.setSleeping(false);
   
    int lowTemperature = 20;

    // Activate the environment geyser
    cout << "Environment Sensor of Geyser activated: " << std::endl;
    environmentGeyser.activate(lowTemperature);

    // Activate the water heater geyser
    cout << "\nWater Heater of Geyser is activated:" << std::endl;
    waterHeaterGeyser.activate(lowTemperature);
    return 0;
}
