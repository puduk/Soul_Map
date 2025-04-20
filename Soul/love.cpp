#include <iostream>
#include "love.hpp"
#include "terminal.hpp"
#include "menu.hpp"


void love(SoulData& s , BrainData& b) {

  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_printer();



  for(int i = 0; i < 10; i++){
    std::cout << background_main << red <<SoulData::love_questions[i] << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> s.love_answer) ||s.love_answer > 5 || s.love_answer < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;

    }

    s.love_score += s.love_answer;

  }

  calculating(s);

  std::cout << background_main << gray << "Your Total Score: " << s.love_score << std::endl;

  if (s.love_score <= 10) {
    std::cout << background_main << purple << cool <<"You're emotionally distant. Love might not be your top priority right now."  << std::endl;
    return menu(s,b);
  }
  else if (s.love_score <= 20) {
    std::cout << background_main << purple << cool <<"You care about love, but you're cautious. You like your space!" <<  std::endl;
    return menu(s,b);
  }
  else if (s.love_score <= 30) {
    std::cout << background_main << purple << cool <<"You're a balanced lover. You enjoy connection but with boundaries." << std::endl;
    return menu(s,b);
  }
  else if (s.love_score <= 40) {
    std::cout << background_main << purple << cool <<"You're very emotionally open. Love is a big part of your life." << std::endl;
    return menu(s,b);
  }
  else if (s.love_score < 50) {
    std::cout << background_main << purple << cool <<"You're a passionate soul! Love drives your decisions and dreams." <<  std::endl;
    return menu(s,b);
  }
  else if (s.love_score == 50) {
    std::cout << background_main << purple << cool  << "You're the ultimate romantic!  You believe in deep, unconditional love." << std::endl;
    return menu(s,b);
  }

}




