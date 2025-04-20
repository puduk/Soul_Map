#include "personal.hpp"
#include <iostream>
#include "terminal.hpp"
#include "menu.hpp"

void personal(SoulData &s ){

    std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
    answer_printer();

    for(int i = 0; i < 10; i++){
      std::cout << background_main << red << SoulData::personal_questions[i] << std::endl;
        std::cout << background_main << blue << "Your answer: " << std::endl;

        while(!(std::cin >> s.personal_answer) || s.personal_answer < 1 || s.personal_answer > 5){
            std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            std::cout << background_main << blue << "Your answer: " << std::endl;
        }

        s.personal_score += s.personal_answer;
    }

    calculating(s);

    std::cout << background_main << blue << "Your Total Score: " << s.personal_score << std::endl;

    if (s.personal_score <= 10) {
        std::cout << background_main << purple << cool << "You're quite introverted and reserved. You enjoy deep thinking and quiet environments." << std::endl;

    }
    else if (s.personal_score <= 20) {
        std::cout << background_main << purple << cool << "You're thoughtful and a bit cautious. You open up to people slowly but meaningfully." << std::endl;

    }
    else if (s.personal_score <= 30) {
        std::cout << background_main << purple << cool << "You're balanced — sometimes social, sometimes reflective. You adapt based on your mood." << std::endl;

    }
    else if (s.personal_score <= 40) {
        std::cout << background_main << purple << cool << "You're outgoing and warm. You love meaningful connections and group activities." << std::endl;

    }
    else if (s.personal_score < 50) {
        std::cout << background_main << purple << cool << "You're highly expressive and open! You thrive in social spaces and enjoy leading." << std::endl;

    }
    else if (s.personal_score == 50) {
        std::cout << background_main << purple << cool << "You're a true extrovert! Your energy and confidence inspire everyone around you." << std::endl;

    }
}
