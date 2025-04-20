#include <iostream>
#include "daily_mood.hpp"
#include "terminal.hpp"
#include "menu.hpp"

void daily_mood(SoulData &s ) {

    std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
    answer_printer();

    for (int i = 0; i < 10; i++) {
      std::cout << background_main << red << SoulData::daily_mood_questions[i] << std::endl;
      std::cout << background_main << blue << "Your answer: " << std::endl;

      while(!(std::cin >> s.daily_mood_answer) || s.daily_mood_answer < 1 || s.daily_mood_answer > 5) {
          std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
          std::cin.clear();
          std::cin.ignore(1000 , '\n');
          std::cout << background_main << blue << "Your answer: " << std::endl;
      }

      s.daily_mood_score += s.daily_mood_answer;

    }

    calculating(s);

    std::cout << background_main << blue << "Your Total Score: " << s.daily_mood_score << std::endl;

    if (s.daily_mood_score <= 10) {
        std::cout << background_main << purple << cool << "You seem to be at a very low point today. It's okay — take it slow and breathe. 🫂" << std::endl;

    }
    else if (s.daily_mood_score <= 20) {
        std::cout << background_main << purple << cool << "You're a bit tired or unmotivated. Maybe some fresh air or music could help. 🌥️" << std::endl;

    }
    else if (s.daily_mood_score <= 30) {
        std::cout << background_main << purple << cool << "Your mood is neutral. You're going with the flow — nothing too high or too low. ⚖️" << std::endl;

    }
    else if (s.daily_mood_score <= 40) {
        std::cout << background_main << purple << cool << "You're feeling pretty good today! You've got a nice vibe going on. 😊" << std::endl;

    }
    else if (s.daily_mood_score < 50) {
        std::cout << background_main << purple << cool << "Your energy is great today! You're open, excited, and emotionally balanced. ✨" << std::endl;

    }
    else if (s.daily_mood_score == 50) {
        std::cout << background_main << purple << cool  << "You're in an excellent mood! Radiating peace, energy, and positivity! 🌞💫" << std::endl;

    }

}


