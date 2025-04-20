#include <iostream>
#include "menu.hpp"
#include "terminal.hpp"
#include <chrono>
#include <thread>
#include "love.hpp"
#include "daily_mood.hpp"
#include "personal.hpp"
#include "stress.hpp"
#include "mood_color.hpp"
#include "geography.hpp"
#include "general.hpp"
#include "iq.hpp"
#include "english.hpp"
#include "math.hpp"





void menu(SoulData& s , BrainData& b){




  std::cout << reset_color << background_line << bold << "_____________________________________________" <<std::endl;
  std::cout << background_main << bold << purple << "    Welcome to the Soul Map    "  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  1 :: Love Test." <<  std::endl;
  std::cout << background_main << bold << cool <<   "  2 :: Personalty Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  3 :: Daily Mood Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  4 :: Stress Level Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  5 :: Mood Color Test"  <<  std::endl;
  std::cout << background_line << bold <<           "_____________________________________________" <<std::endl;
  std::cout << background_main << bold << purple << "    Welcome to the Brain Map    "  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  6 :: IQ Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  7 :: English Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  8 :: Math Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   "  9 :: General Knowledge Test"  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 10 :: Geograpy Test"  <<  std::endl;
  std::cout << background_line << bold <<           "_____________________________________________" <<std::endl;
  std::cout << background_main << bold << purple << "    Welcome to the Feeling Map    "  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 11 :: Which Animal Are you? "  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 12 :: Which Game Character Are you? "  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 13 :: Which Planet Are you? "  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 14 :: Which Movie Character Are you? "  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 15 :: We Will Guess Your Age in 5 Question"  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 16 :: We Will Guess Your Country in 5 Question"  <<  std::endl;
  std::cout << background_main << bold << cool <<   " 17 :: We Will Guess Your Job in 5 Question"  <<  std::endl;
  int choice;
  std::cin >> choice;

  switch (choice) {
    case 1:
      start_test();
      love(s,b);
      break;
    case 2:
      start_test();
      personal(s,b);
      break;
    case 3:
      start_test();
      daily_mood(s,b);
      break;
    case 4:
      start_test();
      stress(s,b);
      break;
    case 5:
      start_test();
      mood_color(s,b);
      break;
    case 6:
      start_test();
      iq(b,s);
      break;
    case 7:
      start_test();
      english(b,s);
      break;
    case 8:
      math(b,s);
      start_test();
      break;
    case 9:
      general(b,s);
      start_test();
      break;
    case 10:
      geography(b,s);
      start_test();
      break;



    case 11:
      start_test();
      break;
    case 12:
      start_test();
      break;
    case 13:
      start_test();
      break;
    case 14:
      start_test();
      break;
    case 15:
      start_test();
      break;
    case 16:
      start_test();
      break;
    case 17:
      start_test();
      break;
    default:
      break;
  }




}

void start_test() {


  std::cout << background_main << purple <<"Starting test in ";
  for (int i = 3; i > 0; --i) {
    std::cout << i << "... ";
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
  }
  std::cout << std::endl;
}



