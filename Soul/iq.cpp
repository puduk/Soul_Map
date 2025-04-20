#include <iostream>
#include "iq.hpp"
#include "terminal.hpp"
#include <cctype>
#include "menu.hpp"



void iq(BrainData& b , SoulData& s){

  for(int i = 0; i < b.capacity; i++){
    std::cout << background_main << red << BrainData::iq_questions[i] << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> b.user_iq_answer) ||
           (toupper(b.user_iq_answer) != 'A' &&
            toupper(b.user_iq_answer) != 'B' &&
            toupper(b.user_iq_answer )!= 'C' &&
            toupper(b.user_iq_answer) != 'D')){
      std::cout << background_main << red << "Please enter between a-d " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000 , '\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;
    }
    if(toupper(b.user_iq_answer) == BrainData::iq_answers[i]){
      b.iq_score ++;
    }
  }
  calculating(b);

  if (b.iq_score < 3) {
    std::cout << background_main << purple << cool << "Your IQ score is quite low... 😅" << std::endl;
    std::cout << background_main << purple << cool << "Don't worry! Genius comes with practice." << std::endl;
    return menu(s,b);
  }
  else if (b.iq_score < 5) {
    std::cout << background_main << purple << cool << "You're warming up! 🧠" << std::endl;
    std::cout << background_main << purple << cool << "Keep going, you're improving!" << std::endl;
    return menu(s,b);
  }
  else if (b.iq_score < 7) {
    std::cout << background_main << purple << cool << "Good job! You're above average. 💪" << std::endl;
    std::cout << background_main << purple << cool << "You're almost at pro level!" << std::endl;
    return menu(s,b);
  }
  else if (b.iq_score < 9) {
    std::cout << background_main << purple << cool << "Great score! You're really smart. 🔥" << std::endl;
    std::cout << background_main << purple << cool << "Just one step away from perfection!" << std::endl;
    return menu(s,b);
  }
  else if (b.iq_score == 10) {
    std::cout << bold << background_main << purple << cool << "PERFECT! 🎉 10/10 Genius Level!" << std::endl;
    std::cout << background_main << purple << cool << "You're officially smarter than 99% of the population 😉" << std::endl;
    return menu(s,b);
  }
}


