#include "movie.hpp"
#include <iostream>
#include "terminal.hpp"

void movie(FeelingData& f){

    std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
    answer_shower();

  for(const std::string& movie : FeelingData::movie_questions){
    std::cout << background_main << red << movie << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.movie_answer) ||f.movie_answer > 5 || f.movie_answer < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;
    }

    f.movie_score += f.movie_answer;

  }

    calculating(f);

    std::cout << background_main << gray << "Your Total Movie Score: " << f.movie_score << std::endl;

    if (f.movie_score < 5) {
        std::cout << background_main << purple << cool << "You are Alan (The Hangover) 🐒 — awkward, chaotic, but strangely lovable." << std::endl;

    } else if (f.movie_score < 10) {
        std::cout << background_main << purple << cool << "You are Forrest Gump 🏃 — innocent, kind-hearted, and quietly brilliant." << std::endl;

    } else if (f.movie_score < 15) {
        std::cout << background_main << purple << cool << "You are Frodo Baggins 🧝 — reluctant hero, loyal, and full of heart." << std::endl;

    } else if (f.movie_score < 20) {
        std::cout << background_main << purple << cool << "You are Peter Parker (Tobey Maguire) 🕷️ — emotional, moral, always trying to do what's right." << std::endl;

    } else if (f.movie_score < 30) {
        std::cout << background_main << purple << cool << "You are Harry Potter ⚡ — brave, chosen by destiny, and loyal to your people." << std::endl;

    } else if (f.movie_score < 35) {
        std::cout << background_main << purple << cool << "You are Bruce Wayne (The Dark Knight) 🦇 — brooding, strategic, and hiding deep trauma." << std::endl;

    } else if (f.movie_score < 40) {
        std::cout << background_main << purple << cool << "You are Maximus (Gladiator) 🗡️ — honorable, disciplined, and carrying grief like armor." << std::endl;

    } else if (f.movie_score < 45) {
        std::cout << background_main << purple << cool << "You are Tyler Durden (Fight Club) 🧠 — rebellious, clever, and a bit unstable." << std::endl;

    } else if (f.movie_score < 49) {
        std::cout << background_main << purple << cool << "You are V (V for Vendetta) 🎭 — poetic, revolutionary, and dangerously intelligent." << std::endl;

    } else if (f.movie_score == 50) {
        std::cout << background_main << purple << cool << "You are Joker (Heath Ledger) 🃏 — complex, unpredictable, and unforgettable." << std::endl;

    }



}



