#pragma once

void menu ();
bool buy_seat(char row_letter, short seat_num);
bool cancel_seat(char row_letter, short seat_num);
std::string find_first_available();
void show_seating_plan();