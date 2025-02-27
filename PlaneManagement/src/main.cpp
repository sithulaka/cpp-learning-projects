#include <iostream>
#include "function.h"

bool result;
std::string seat_no;
char row_letter;
short seat_num;

int main() {

    while (true) {
        menu ();

        static short option;
        std::cin >> option;
        std::cout<<std::endl;

        // exit
        if (option == 0) return 0;
    
        // buying seats
        if (option == 1) {
            
            std::cout << "Input the row letter : " << std::flush;
            std::cin >> row_letter;

            std::cout << "Input the seat number : " << std::flush;
            std::cin >> seat_num;

            result = buy_seat(row_letter, seat_num);

            if (result == true) {
                std::cout << "\nYour seat is avalible.\nWe have reserved " << row_letter << "-" << seat_num <<" for you.\n" << std::endl;
            } else {
                std::cout << "\nsorry! Seat No: " << row_letter << "-" << seat_num <<" has been taken.\n" << std::endl;
            }

        }

        // cancel seats
        if (option == 2) {

            std::cout << "Input the row letter : " << std::flush;
            std::cin >> row_letter;

            std::cout << "Input the seat number : " << std::flush;
            std::cin >> seat_num;

            result = cancel_seat(row_letter, seat_num);

            if (result == true) {
                std::cout << "\nWe have canceled seat no: " << row_letter << "-" << seat_num <<" for you.\n" << std::endl;
            } else {
                std::cout << "\nsorry! Seat No: " << row_letter << "-" << seat_num <<" has been already avalible.\n" << std::endl;
            }

        }

        // find first available seat
        if (option == 3) {

            seat_no = find_first_available();
            std::cout << seat_no << std::endl;
            
        }

        // show seating plan
        if (option == 4) show_seating_plan();

        if (option == 5) return 5;
        if (option == 6) return 6;
        
    }
}