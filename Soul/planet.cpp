#include "planet.hpp"
#include <iostream>
#include "terminal.hpp"


void planet(FeelingData& f){

  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_shower();


  for(const std::string&  planet : FeelingData::planet_questions){
    std::cout << background_main << red << planet << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.planet_answer) || f.planet_answer > 5 || f.planet_answer < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;
    }

    f.planet_score += f.planet_answer;

  }

  calculating(f);

  std::cout << background_main << gray << "Your Total Score: " << f.planet_score << std::endl;

  if (f.planet_score < 5) {
    std::cout << background_main << purple << cool << "You are Pluto 🪐 — distant, introverted, and full of secrets." << std::endl;

  } else if (f.planet_score < 10) {
    std::cout << background_main << purple << cool << "You are Neptune 🌊 — deep, dreamy, and emotionally rich." << std::endl;

  } else if (f.planet_score < 15) {
    std::cout << background_main << purple << cool << "You are Uranus ⚡ — quirky, unpredictable, and always different." << std::endl;

  } else if (f.planet_score < 20) {
    std::cout << background_main << purple << cool << "You are Saturn 💍 — structured, wise, and self-disciplined." << std::endl;

  } else if (f.planet_score < 30) {
    std::cout << background_main << purple << cool << "You are Mars 🔥 — passionate, bold, and a natural fighter." << std::endl;

  } else if (f.planet_score < 35) {
    std::cout << background_main << purple << cool << "You are Earth 🌍 — balanced, grounded, and adaptable to any situation." << std::endl;

  } else if (f.planet_score < 40) {
    std::cout << background_main << purple << cool << "You are Venus 💖 — full of charm, romance, and emotional intelligence." << std::endl;

  } else if (f.planet_score < 45) {
    std::cout << background_main << purple << cool << "You are Mercury 🧠 — witty, fast-thinking, and always communicating." << std::endl;

  } else if (f.planet_score < 49) {
    std::cout << background_main << purple << cool << "You are Jupiter 🪄 — philosophical, optimistic, and full of vision." << std::endl;

  } else if (f.planet_score == 50) {
    std::cout << background_main << purple << cool << "You are the Sun ☀️ — radiant, powerful, and the center of every orbit." << std::endl;

  }
}


