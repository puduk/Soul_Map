#include "general.hpp"
#include <iostream>
#include "terminal.hpp"
#include <cctype>
#include "menu.hpp"

void general(BrainData& b ) {

  for (int i = 0; i < b.capacity; i++) {

    std::cout << background_main << red <<BrainData::general_questions[i] << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> b.user_general_answer) ||
           (toupper(b.user_general_answer) != 'A') &&
           (toupper(b.user_general_answer) != 'B') &&
           (toupper(b.user_general_answer) != 'C') &&
           (toupper(b.user_general_answer) != 'D')  ){

        std::cout << background_main << red << "Please enter between A-B-C-D " << std::endl;
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        std::cout << background_main << blue << "Your answer: " << std::endl;

           }
           if(toupper(b.user_general_answer) == BrainData::general_answers[i]){
             b.general_score++;

           }

  }
  calculating(b);

  if (b.general_score < 3) {
    std::cout << background_main << purple << cool << "Oof... Not your best moment 😅" << std::endl;
    std::cout << background_main << purple << cool << "Time to open a few Wikipedia pages!" << std::endl;

  }
  else if (b.general_score < 5) {
    std::cout << background_main << purple << cool << "You're learning! 🧠" << std::endl;
    std::cout << background_main << purple << cool << "A few more tries and you'll master it!" << std::endl;

  }
  else if (b.general_score < 7) {
    std::cout << background_main << purple << cool << "Solid job! You're smarter than average 🔥" << std::endl;
    std::cout << background_main << purple << cool << "Keep building that general knowledge!" << std::endl;

  }
  else if (b.general_score < 9) {
    std::cout << background_main << purple << cool << "Great score! 🧠📚" << std::endl;
    std::cout << background_main << purple << cool << "You're very informed!" << std::endl;

  }
  else if (b.general_score == 10) {
    std::cout << bold << background_main << purple << cool << "GENIUS ALERT! 🎉 10/10 in General Knowledge!" << std::endl;
    std::cout << background_main << purple << cool << "You must be a quiz master or a trivia god 😎" << std::endl;

  }


}


