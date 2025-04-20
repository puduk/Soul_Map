#include "feeling_data.hpp"
#include <iostream>
#include "terminal.hpp"
#include <chrono>
#include <thread>

#include "brain_data.hpp"


std::string FeelingData::answer_page[5] = {
    "1 = I dont agree",
    "2 = Slightly agree",
    "3 = Neutral ",
    "4 = I totally agree  ",
    "5 = Extremely agree",
};



std::string FeelingData::animal_questions[capacity] = {
    "If you were an animal, how predatory would you be?",
    "How free do you feel in your daily life?",
    "How comfortable are you in social situations?",
    "How much do you enjoy taking risks?",
    "How lazy would you consider yourself?",
    "How good are you at protecting yourself?",
    "How often do you act on instinct?",
    "How loyal are you to others?",
    "How curious are you about the world?",
    "How quickly do you make decisions?"
};

std::string FeelingData::game_questions[capacity] = {
    "Would you be a leader or a support character in a game?",
    "Do you prefer to fight or flee from danger?",
    "How powerful would your character be?",
    "How strategic is your thinking?",
    "How committed are you to completing missions?",
    "How much do challenges motivate you?",
    "How patient are you during complex tasks?",
    "How much do you enjoy stealth missions?",
    "Is action or story more important to you in games?",
    "How much do you think about consequences in games?"
};

std::string FeelingData::planet_questions[capacity] = {
    "How warm and friendly are you?",
    "How much do you enjoy being in crowded places?",
    "How wild is your imagination?",
    "How much do you enjoy being alone?",
    "How energetic are you on a daily basis?",
    "How easily do you adapt to new environments?",
    "How open are you to self-discovery?",
    "How mysterious would you describe yourself?",
    "Are you more stubborn or flexible?",
    "How deep is your inner world?"
};

std::string FeelingData::movie_questions[capacity] = {
    "How much do emotional scenes affect you?",
    "Which one suits you more: drama or action?",
    "How much do you enjoy plot twists?",
    "How important is character development for you?",
    "How much do you like villains?",
    "How easily do you lose focus while watching movies?",
    "How interested are you in sci-fi movies?",
    "How cringe do romantic scenes make you feel?",
    "Do you enjoy analyzing movies afterwards?",
    "How exciting do you find thrillers?"
};

std::string FeelingData::age_questions[capacity_5] = {
    "How mature would you say you are?",
    "Are you more focused on the past ?",
    "How much do you enjoy acting like a kid?",
    "How open are you to taking responsibility?",
    "How nostalgic are you?"
};

std::string FeelingData::continent_questions[capacity_5] = {
    "How important is adventure to you?",
    "How open are you to new cultures?",
    "Which suits you more: hot or cold climate?",
    "Do you prefer nature or city life?",
    "How much do you enjoy crowded environments?"
};

std::string FeelingData::job_questions[capacity_5] = {
    "How strong are your leadership skills?",
    "How creative are you?",
    "How good are you at following rules?",
    "Do you prefer working alone or in a team?",
    "How well do you handle stress?"
};

std::string FeelingData::music_questions[capacity] = {
    "How essential is music in your life?",
    "How much do emotional songs affect you?",
    "How important is rhythm to you?",
    "How open are you to different genres?",
    "Do lyrics or melody matter more to you?",
    "Do you prefer energetic or calm songs?",
    "Do you rely on music to calm down?",
    "Do you choose music based on your mood?",
    "How much do you enjoy live performances?",
    "How well does music reflect your personality?"
};

FeelingData::FeelingData(){

  animal_score = 0;
  animal_answer = 0;
  game_score = 0;
  game_answer = 0;
  planet_answer = 0;
  planet_score = 0;
  movie_answer = 0;
  movie_score = 0;
  age_answer = 0;
  age_score = 0;
  continent_answer = 0;
  continent_score = 0;
  job_answer = 0;
  job_score = 0;
  music_answer = 0;
  music_score = 0;
}

void answer_shower(){

    for(int i = 0; i < 5; i++){
        std::cout << background_main << blue <<FeelingData::answer_page[i] << std::endl;
    }
}

void calculating(FeelingData& f) {
    char spinner[] = {'|', '/', '-', '\\'};
    for (int i = 0; i < 10; ++i) {
        std::cout << "\rChecking your results... " << spinner[i % 4];
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "\rDone!           " << std::endl;
}





































