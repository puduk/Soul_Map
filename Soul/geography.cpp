#include "geography.hpp"
#include <iostream>
#include "terminal.hpp"
#include <cctype>
#include "menu.hpp"

void geography(BrainData& b , SoulData& s) {

    for(int i = 0 ; i < b.capacity ; i++) {
        std::cout << background_main << red <<BrainData::geography_questions[i] << std::endl;
        std::cout << background_main << blue << "Your answer: " << std::endl;

        while(!(std::cin >> b.user_geography_answer) ||
               toupper(b.user_geography_answer) != 'A' &&
               toupper(b.user_geography_answer) != 'B' &&
               toupper(b.user_geography_answer) != 'C' &&
               toupper(b.user_geography_answer) != 'D') {
            std::cout << background_main << red << "Please enter between A-D " << std::endl;
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            std::cout << background_main << blue << "Your answer: " << std::endl;
               }
        if(toupper(b.user_geography_answer) == BrainData::geography_answers[i]) {
            b.geography_score++;
        }
    }

    calculating(b);

    std::cout << background_main << blue << "Your Total Score: " << b.geography_score <<std::endl;

    if (b.geography_score < 3) {
        std::cout << background_main << purple << cool << "Oh no... You might be lost on the map! 🧭" << std::endl;
        std::cout << background_main << purple << cool << "A few globe spins and you'll be back on track!" << std::endl;
        return menu(s,b);
    }
    else if (b.geography_score < 5) {
        std::cout << background_main << purple << cool << "You're learning continents one step at a time! 🌍" << std::endl;
        std::cout << background_main << purple << cool << "Don't stop exploring!" << std::endl;
        return menu(s,b);
    }
    else if (b.geography_score < 7) {
        std::cout << background_main << purple << cool << "Nice work! You know your world pretty well. 🗺️" << std::endl;
        std::cout << background_main << purple << cool << "Keep traveling through knowledge!" << std::endl;
        return menu(s,b);
    }
    else if (b.geography_score < 9) {
        std::cout << background_main << purple << cool << "Excellent! You're a geography whiz! ✈️" << std::endl;
        std::cout << background_main << purple << cool << "You should host a travel show!" << std::endl;
        return menu(s,b);
    }
    else if (b.geography_score == 10) {
        std::cout << bold << background_main << purple << cool << "PERFECT! 🎉 10/10 Geography Guru!" << std::endl;
        std::cout << background_main << purple << cool << "You've mapped the whole planet in your brain! 🌎🧠" << std::endl;
        return menu(s,b);
    }






}
