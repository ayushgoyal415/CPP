#include "Car.h"

// Initializing non-const static data type
int Car::s_count = 0;

int Car::count() { return s_count; }

void Car::get_info() { cout << "Id : " << id << ", Count : " << s_count << '\n'; }

// Changing non-const static data type
// Also establishing relation with a non static data type
Car::Car() : id(++s_count) {}
Car::~Car() {}