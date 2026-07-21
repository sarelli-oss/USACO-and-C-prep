#include "vehicle_purchase.h"


namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if(kind == "truck" || kind == "car") {
        return true;
    }
    else {
        return false;

    }
    
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    if(option1 < option2) {
        return option1 + " is clearly the better choice.";

        
    }
    else {
        return option2 + " is clearly the better choice.";
    }
    
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    if(age >= 10) {
        double new_price = original_price - (original_price * (1 - .5));
        return new_price;
    }

    else if(age > 3) {
        double new_price = original_price - (original_price * (1 - .7));
        return new_price;
    }

    else {
        double new_price = original_price - (original_price * (1 - .8));
        return new_price;
    }
    
}

}  // namespace vehicle_purchase
