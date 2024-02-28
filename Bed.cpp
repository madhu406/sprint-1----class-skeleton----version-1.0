// this program is of class Bed which indicates the whether the owner slepping and awake

class Bed {
private:
    bool sleeping; // true if sleeping, false if not awake

public:
    // Constructor is used 
    Bed() {
        Slepping = false; // Default state is not awake
    }

    bool getslepping() const { 
        return slepping; // returns the information
    }

    // set function is used with if else statemet
    void setslepp(bool newsleep) {
        if (sleepping) {
            sleeping= true;  // Set to sleeping if true
        } else {
            slepping = false; // Set to awake if false
        }
    }
};
