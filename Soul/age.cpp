#include "age.hpp"
#include <iostream>
#include "terminal.hpp"
#include "feeling_data.hpp"

void age(FeelingData& f) {


  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_shower();


  for(const std::string& age : FeelingData::age_questions){
    std::cout << background_main << red << age << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.age_answer ) || f.age_answer > 5 || f.age_answer < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;

      }

      f.age_score += f.age_answer;


  }


  calculating(f);

  std::cout << background_main << gray << "Your Total Age Score: " << f.age_score << std::endl;

  if (f.age_score <= 5) {
    std::cout << background_main << purple << cool << "You have the soul of a toddler 👶 — carefree, innocent, and full of wonder." << std::endl;

  } else if (f.age_score <= 10) {
    std::cout << background_main << purple << cool << "You have the spirit of a teenager 🎧 — emotional, curious, and full of chaos." << std::endl;

  } else if (f.age_score <= 15) {
    std::cout << background_main << purple << cool << "You feel like you're in your early 20s 🌱 — adventurous, uncertain, and finding your way." << std::endl;

  } else if (f.age_score <= 20) {
    std::cout << background_main << purple << cool << "You have the mind of a mature adult 👔 — responsible, balanced, and self-aware." << std::endl;

  } else if (f.age_score <= 24) {
    std::cout << background_main << purple << cool << "You have the heart of a wise elder 🧓 — calm, introspective, and always reflecting on life." << std::endl;

  } else if (f.age_score == 25) {
    std::cout << background_main << purple << cool << "You are timeless ⏳ — a philosopher beyond the limits of age." << std::endl;

  }





}



