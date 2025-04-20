#include "animal.hpp"
#include <iostream>
#include "terminal.hpp"

void animal(FeelingData& f) {

  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_shower();

  for (const std::string& animal: FeelingData::animal_questions ) {
    std::cout << background_main << red << animal<< std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.animal_answer) || f.animal_answer < 0 || f.animal_answer > 5) {
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;
    }

    f.animal_score += f.animal_answer;
  }


  calculating(f);

  std::cout << background_main << gray << "Your Total Score: " << f.animal_score << std::endl;

  if (f.animal_score < 5) {
    std::cout << background_main << purple << cool << "You are a snail 🐌 — calm, introverted and deeply observant." << std::endl;

  } else if (f.animal_score < 10) {
    std::cout << background_main  << purple << cool << "You are a cat 🐱 — independent, mysterious, and a bit moody." << std::endl;

  } else if (f.animal_score < 15) {
    std::cout << background_main  << purple << cool <<"You are a deer 🦌 — gentle, cautious, and kind-hearted." << std::endl;

  } else if (f.animal_score < 20) {
    std::cout << background_main  << purple << cool << "You are a panda 🐼 — chill, lazy but lovable." << std::endl;

  } else if (f.animal_score < 30) {
    std::cout << background_main  << purple << cool << "You are a dog 🐶 — loyal, friendly, and full of love." << std::endl;

  } else if (f.animal_score < 35) {
    std::cout << background_main  << purple << cool << "You are a wolf 🐺 — strong, loyal to your pack, and smart." << std::endl;

  } else if (f.animal_score < 40) {
    std::cout << background_main  << purple << cool << "You are an eagle 🦅 — proud, visionary, and driven by freedom." << std::endl;

  } else if (f.animal_score < 45) {
    std::cout << background_main  << purple << cool << "You are a lion 🦁 — brave, confident, and natural-born leader." << std::endl;

  } else if (f.animal_score < 49) {
    std::cout << background_main  << purple << cool << "You are a tiger 🐯 — intense, powerful, and full of energy." << std::endl;

  } else if (f.animal_score == 50) {
    std::cout << background_main  << purple << cool <<"You are a dragon 🐉 — mythical, legendary, and absolutely unstoppable!" << std::endl;

  }

}

