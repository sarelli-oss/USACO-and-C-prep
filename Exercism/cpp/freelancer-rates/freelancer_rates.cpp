// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <math.h>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate

    int daily_rate = hourly_rate * 8;

    return daily_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.

    double after_discount = before_discount - (before_discount * (0.01 * discount));
    return after_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double daily_rate = hourly_rate * 8;
    double monthlu_rate = daily_rate * 22;
    double monthly_rate = monthlu_rate - (monthlu_rate * (0.01 * discount));
    
    return ceil(monthly_rate);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.

    double daily_rate = hourly_rate * 8;

    double daily_rate_after_discount = daily_rate -(daily_rate * (0.01 * discount));
    double days = budget/daily_rate_after_discount;
    

    return floor(days);
}
