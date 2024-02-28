// this block of program consist of class Owner which is used to retrive the information of owner
class Owner {
private:
    bool Sleeping; // the boolean operation shows true if awake and flase if sleeping

public:
    // Constructor
    Owner() {
        Sleeping = true; // Default state is awake
    }

    bool getSleeping() const { // used get function for retrive the information of the owner
        return Sleeping;
    }

    // performing if else statement with set function
    void setSleeping(bool newSleepState) {
        if (newSleepState) {
            Sleeping = false;  // Set to sleeping if false
        } else {
            Sleeping = true; // Set to awake if true
        }
    }
};
