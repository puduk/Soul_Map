#include "game.hpp"
#include <iostream>
#include "terminal.hpp"

void game(FeelingData& f){

  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_shower();

  for (const std::string& game : FeelingData::game_questions) {
    std::cout << background_main << red << game << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.game_answer) || f.game_answer < 0 || f.game_answer > 5) {
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;
    }
    f.game_score += f.game_answer;
  }


  calculating(f);

  std::cout << background_main << gray << "Your Total Score: " << f.game_score << std::endl;

  if (f.game_score < 5) {
    std::cout << background_main << purple << cool << "You are Franklin Clinton (GTA V) 🚘 — calm, clever, and trying to rise above the chaos." << std::endl;

  } else if (f.game_score < 10) {
    std::cout << background_main << purple << cool << "You are Tommy Vercetti (GTA Vice City) 🕶️ — sharp-tongued, ambitious, and full of 80s swagger." << std::endl;

  } else if (f.game_score < 15) {
    std::cout << background_main << purple << cool << "You are Carl 'CJ' Johnson (GTA San Andreas) 🚲 — loyal, street-smart, and always protecting your family." << std::endl;

  } else if (f.game_score < 20) {
    std::cout << background_main << purple << cool << "You are Miles Morales 🕸️ — young, talented, and finding your place in a complicated world." << std::endl;

  } else if (f.game_score < 30) {
    std::cout << background_main << purple << cool << "You are Niko Bellic (GTA IV) 🇷🇸 — broken by the past, but trying to do the right thing in a dirty world." << std::endl;

  } else if (f.game_score < 35) {
    std::cout << background_main << purple << cool << "You are Tommy Angelo (Mafia) 🚖 — quiet, loyal, but deadly when pushed." << std::endl;

  } else if (f.game_score < 40) {
    std::cout << background_main << purple << cool << "You are Arthur Morgan (RDR2) 🐎 — complex, honorable, full of inner struggle and redemption." << std::endl;

  } else if (f.game_score < 45) {
    std::cout << background_main << purple << cool << "You are Joel Miller (The Last of Us) 🧟 — hardened by life, a survivor who values love above all." << std::endl;

  } else if (f.game_score < 49) {
    std::cout << background_main << purple << cool <<"You are Kratos (God of War) 🪓 — rage forged into wisdom, a god battling his own demons." << std::endl;

  } else if (f.game_score == 50) {
    std::cout << background_main << purple << cool << "You are Geralt of Rivia (The Witcher) ⚔️ — calculated, sarcastic, moral in an immoral world." << std::endl;

  }






}


