#include "job.hpp"
#include <iostream>
#include "terminal.hpp"

void job(FeelingData& f){

  std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
  answer_shower();

  for(const std::string& job : FeelingData::job_questions){
    std::cout << background_main << red << job << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.job_answer ) ||f.job_answer  > 5 || f.job_answer  < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;

    }

    f.job_score  += f.job_answer ;
  }

  calculating(f);

  std::cout << background_main << gray << "Your Total Job Score: " << f.job_score << std::endl;

  if (f.job_score <= 5) {
    std::cout << background_main << purple << cool
              << "You're a free spirit — you'd thrive as a Street Artist 🎨, Indie Musician 🎸, Philosopher 📚 or Wilderness Guide 🧭."
              << std::endl;

  } else if (f.job_score <= 10) {
    std::cout << background_main << purple << cool
              << "You're independent and introspective — you'd be great as a Freelance Writer ✍️, Illustrator ✏️, Barista ☕ or Tattoo Artist 🖋️."
              << std::endl;

  } else if (f.job_score <= 15) {
    std::cout << background_main << purple << cool
              << "You’re logical and creative — perfect for a Game Developer 🎮, Data Analyst 📊, Architect 🏗️ or Music Producer 🎛️."
              << std::endl;

  } else if (f.job_score <= 20) {
    std::cout << background_main << purple << cool
              << "You’re empathetic and insightful — you could be a Psychologist 🧠, Teacher 🧑‍🏫, Writer ✍️ or Life Coach 🌱."
              << std::endl;

  } else if (f.job_score <= 24) {
    std::cout << background_main << purple << cool
              << "You’ve got leadership and hustle — Startup CEO 🚀, Lawyer ⚖️, Stock Trader 📈 or Tech Entrepreneur 👨‍💻 would suit you well."
              << std::endl;

  } else if (f.job_score == 25) {
    std::cout << background_main << purple << cool
              << "You’re a strategic mastermind — Secret Agent 🕶️, Hacker 🧑‍💻, Spy Novelist 📖 or Intelligence Analyst 🛰️ might be your calling."
              << std::endl;

  }


}

