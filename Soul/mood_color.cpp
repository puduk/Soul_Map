#include "mood_color.hpp"
#include <iostream>
#include "terminal.hpp"
#include "menu.hpp"



void mood_color(SoulData& s ){


    std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
    answer_printer();

    for(int i = 0 ; i < 10 ; i++){
      std::cout << background_main << red << SoulData::mood_color_questions[i] << std::endl;
      std::cout << "Your answer: " << std::endl;

      while(!(std::cin >> s.mood_color_answer) || s.mood_color_answer < 1 || s.mood_color_answer > 5){
          std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
          std::cin.clear();
          std::cin.ignore(1000 , '\n');
          std::cout << background_main << blue << "Your answer: " << std::endl;
      }

      s.mood_color_score += s.mood_color_answer;

    }
    calculating(s);

    std::cout << background_main << blue << "Your Total Score: " << s.mood_color_score << std::endl;

    if (s.mood_color_score <= 10) {
        std::cout << background_main << purple << cool << "Colors don't have a strong effect on your mood. You're more logical than emotional. 🧠📉" << std::endl;
        std::cout << background_main << logician << "This is your color" << std::endl;

    }
    else if (s.mood_color_score <= 20) {
        std::cout << background_main << purple << cool << "You notice colors, but they don’t deeply influence you. You're neutral and grounded. ⚪🌫️" << std::endl;
        std::cout << background_main << wolf << "This is your color" << std::endl;

    }
    else if (s.mood_color_score <= 30) {
        std::cout << background_main << purple << cool << "You're somewhat color-sensitive — calm tones may affect your mood subtly. 🌈🧘" << std::endl;
        std::cout << background_main << helpfull << "This is your color" << std::endl;

    }
    else if (s.mood_color_score <= 40) {
        std::cout << background_main << purple << cool << "Colors clearly affect your emotions and energy. You thrive in the right environment. 💡🎨" << std::endl;
        std::cout << background_main << adventurer << "This is your color" << std::endl;

    }
    else if (s.mood_color_score < 50) {
        std::cout << background_main <<purple << cool << "You’re highly color-attuned! Your emotional state and environment are deeply connected. 🌅🎭" << std::endl;
        std::cout << background_main << artist << "This is your color" << std::endl;

    }
    else if (s.mood_color_score == 50) {
        std::cout << background_main << purple << cool  << "You're a true color empath! Every shade speaks to your soul. You live in a world of feelings and tones. 💜🌈🌀" << std::endl;
        std::cout << background_main << leader << "This is your color" << std::endl;

    }
}

