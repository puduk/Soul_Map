#include "math.hpp"
#include <iostream>
#include "terminal.hpp"

void math(BrainData& b ) {
    for (int i = 0; i < b.capacity; i++) {
        std::cout << background_main << red << BrainData::math_questions[i] << std::endl;
        std::cout << background_main << blue << "Your answer: " << std::endl;

        while (!(std::cin >> b.user_math_answer) ||
               (toupper(b.user_math_answer) != 'A' &&
                toupper(b.user_math_answer) != 'B' &&
                toupper(b.user_math_answer) != 'C' &&
                toupper(b.user_math_answer) != 'D')) {

            std::cout << background_main << red << "Please enter between a-d " << std::endl;
            std::cin.clear();
            std::cin.ignore(1000,'\n');
            std::cout << background_main << blue << "Your answer: " << std::endl;
          }

          if(toupper(b.user_math_answer) == BrainData::math_answers[i]){
            b.math_score++;
          }
    }
    calculating(b);

    if (b.math_score < 3) {
        std::cout << background_main << purple << cool << "Math is not your strong suit... yet! 😅" << std::endl;
        std::cout << background_main << purple << cool << "Keep practicing and you'll improve fast!" << std::endl;

    }
    else if (b.math_score < 5) {
        std::cout << background_main << purple << cool << "You're getting there! 🧠" << std::endl;
        std::cout << background_main << purple << cool << "Brush up on the basics and try again." << std::endl;

    }
    else if (b.math_score < 7) {
        std::cout << background_main << purple << cool << "Nice! You're above average in math. 🔢" << std::endl;
        std::cout << background_main << purple << cool << "You're on the right track!" << std::endl;

    }
    else if (b.math_score < 9) {
        std::cout << background_main << purple << cool << "Great score! You're really sharp! ✨" << std::endl;
        std::cout << background_main << purple << cool << "Almost perfect!" << std::endl;

    }
    else if (b.math_score == 10) {
        std::cout << bold << background_main << purple << cool << "PERFECT! 🎉 10/10 Math Master!" << std::endl;
        std::cout << background_main << purple << cool << "You're a human calculator 😉" << std::endl;

    }

}

