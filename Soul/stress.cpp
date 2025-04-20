#include "stress.hpp"
#include <iostream>
#include "terminal.hpp"
#include "menu.hpp"


void stress(SoulData &s , BrainData &b) {

    std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
    answer_printer();


    for (int i = 0; i < 10; i++) {
      std::cout << background_main << red << SoulData::stress_questions[i] << std::endl;
      std::cout << background_main << blue << "Your answer: " << std::endl;

      while(!(std::cin >> s.stress_answer) || s.stress_answer < 1 || s.stress_answer > 5) {
          std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
          std::cin.clear();
          std::cin.ignore(1000,'\n');
          std::cout << background_main << blue << "Your answer: " << std::endl;

      }

      s.stress_score += s.stress_answer;

    }

    calculating(s);

    std::cout << background_main << blue << "Your Total Score: " << s.stress_score << std::endl;

    if (s.stress_score <= 10) {
        std::cout << background_main << purple << cool << "You're extremely relaxed. You radiate calm energy. 🧘‍♂️🌿" << std::endl;
        return menu(s ,b);
    }
    else if (s.stress_score <= 20) {
        std::cout << background_main << purple << cool << "You're doing well. Small stress may exist, but you're in control. ☕📘" << std::endl;
        return menu(s ,b);
    }
    else if (s.stress_score <= 30) {
        std::cout << background_main << purple << cool << "You're feeling some pressure. Remember to take breaks and rest. ⚖️" << std::endl;
        return menu(s ,b);
    }
    else if (s.stress_score <= 40) {
        std::cout << background_main << purple << cool << "You're stressed more than usual. It might help to talk or slow down. 😣" << std::endl;
        return menu(s ,b);
    }
    else if (s.stress_score < 50) {
        std::cout << background_main << purple << cool << "High stress levels detected! Don’t forget to prioritize yourself. 🚨" << std::endl;
        return menu(s ,b);
    }
    else if (s.stress_score == 50) {
        std::cout << background_main << purple << cool << "You're under extreme stress. Please take care of your mental health. 🧠💔" << std::endl;
        return menu(s ,b);
    }
}
