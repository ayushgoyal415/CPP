#include "Bike.cpp"
#include "Bike.h"

int main() {
    Honda A("FZ", 200);
    A.get_info();
    
    Honda B = A;
    B.get_info();

    return 0;
}