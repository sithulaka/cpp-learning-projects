#include <iostream>

void menu(){

    std::string* menu = new std::string[12];

    menu [0] = "****************************************************\n\n";
    menu [1] = "*                  MENU OPTIONS                    *\n\n";
    menu [2] = "****************************************************\n\n";
    menu [3] = "1) Buy a seat\n";
    menu [4] = "2) Cancel a seat\n";
    menu [5] = "3) Find first available seat\n";
    menu [6] = "4) Show seating plan\n";
    menu [7] = "5) Print tickets information and total sales\n";
    menu [8] = "6) Search ticket\n";
    menu [9] = "0) Quit\n\n";
    menu [10] = "****************************************************\n\n";
    menu [11] = "Please select an option : ";

    for (int i = 0; i < 12; i++) {
        std::cout << menu[i] << std::flush;
    }
    
    delete[] menu;
}
