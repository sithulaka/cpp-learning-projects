#include <iostream>
#include "seats.h"
#include "variables.h"

void show_seating_plan() {
    
    std::cout << "\n    " << std::flush;
    for (int num = 1; num < 15; num++) std::cout << num << "  " << std::flush;
    std::cout<<std::endl;

    for (int i = 0; i < 4; i++) {

        std::cout << label[i] << " : " << std::flush;
        for (int n = 0; n < arr_values[i]; n++) {

            bool check = arrays[i][n];
            if (check == false) std::cout << "0  " << std::flush;
            else std::cout << "x  " << std::flush;

        }

        std::cout<<std::endl;
    }

    std::cout << "\n \"0\" - Available \n \"x\" - Not Available\n" << std::endl;

}