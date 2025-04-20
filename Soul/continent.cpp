#include "continent.hpp"
#include <iostream>
#include "terminal.hpp"

void continent(FeelingData& f){

  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_shower();

  for(const std::string& continent : FeelingData::continent_questions){

    std::cout << background_main << red << continent << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.continent_answer ) ||f.continent_answer  > 5 || f.continent_answer  < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;

    }

    f.continent_score += f.continent_answer ;
  }


  calculating(f);

  std::cout << background_main << gray << "Your Total Continent Score: " << f.continent_score << std::endl;

  if (f.continent_score <= 5) {
    std::cout << background_main << purple << cool << "You belong in Antarctica 🧊 — quiet, introverted, and a true loner with a love for isolation." << std::endl;

  } else if (f.continent_score <= 10) {
    std::cout << background_main << purple << cool << "You belong in Europe 🏛️ — cultured, balanced, and deeply connected to history and art." << std::endl;

  } else if (f.continent_score <= 15) {
    std::cout << background_main << purple << cool << "You belong in Asia 🐉 — spiritual, curious, and always evolving." << std::endl;

  } else if (f.continent_score <= 20) {
    std::cout << background_main << purple << cool << "You belong in South America 🎶 — passionate, wild, and full of life." << std::endl;

  } else if (f.continent_score <= 24) {
    std::cout << background_main << purple << cool << "You belong in North America 🗽 — ambitious, independent, and always chasing something bigger." << std::endl;

  } else if (f.continent_score == 25) {
    std::cout << background_main << purple << cool << "You belong in Africa 🦁 — rooted, vibrant, and full of soul and survival spirit." << std::endl;

  }




}



