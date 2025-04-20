#include "Soul/soul_data.hpp"
#include "Soul/menu.hpp"
#include <chrono>
#include <thread>
#include "Soul/terminal.hpp"
#include "Soul/brain_data.hpp"
#include "Soul/feeling_data.hpp"

void opening(){

    std::string title = "Welcome to the Soul Map";
    for (char c : title) {
        std::cout << "\033[1m\033[38;5;183m" << c << reset_color << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
    }
    std::cout << std::endl;


}


int main() {

    opening();


    FeelingData f;
    BrainData b;
    SoulData s;
    menu(s,b,f);




}


