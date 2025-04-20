#include "english.hpp"
#include <iostream>
#include "terminal.hpp"
#include <cctype>
#include "menu.hpp"



void english(BrainData& b ) {


  for (int i = 0; i < b.capacity; i++) {
    std::cout << background_main << red <<BrainData::english_questions[i] << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while (!(std::cin >> b.user_english_answer) ||
           (toupper(b.user_english_answer) != 'A' &&
            toupper(b.user_english_answer) != 'B' &&
            toupper(b.user_english_answer) != 'C' &&
            toupper(b.user_english_answer) != 'D')) {

      std::cout << background_main << red << "Please enter between a-d " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;
    }

    if(toupper(b.user_english_answer) == BrainData::english_answers[i]) {
      b.english_score ++;
    }
  }

  calculating(b);

  if (b.english_score < 3) {
    std::cout << background_main << purple << cool << "Your English score is quite low. Keep practicing!" << std::endl;
    std::cout << background_main << purple << cool << "Watch shows with subtitles and read simple texts!" << std::endl;

  }
  else if (b.english_score < 6) {
    std::cout << background_main << purple << cool << "Not bad! You have some basic knowledge." << std::endl;
    std::cout << background_main << purple << cool << "You're on your way to becoming fluent!" << std::endl;

  }
  else if (b.english_score < 9) {
    std::cout << background_main << purple << cool << "Well done! Your English skills are impressive!" << std::endl;
    std::cout << background_main << purple << cool << "Keep speaking, reading, and expanding your vocabulary!" << std::endl;

  }
  else {
    std::cout << bold << background_main << purple << cool << "PERFECT! You're a true English master!" << std::endl;
    std::cout << background_main << purple << cool << "Grammar, vocab, and fluency — you've got it all! 💂‍♂️" << std::endl;

  }



}

