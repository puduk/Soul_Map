#ifndef FEELING_DATA_H
#define FEELING_DATA_H
#include <iostream>

class FeelingData {

  public:

    static constexpr int capacity =  10;
    static constexpr int capacity_5 = 5;
    static std::string answer_page[5];

    static std::string animal_questions[capacity];
    int animal_answer;
    int animal_score;
    static std::string game_questions[capacity];
    int game_answer;
    int game_score;
    static std::string planet_questions[capacity];
    int planet_answer;
    int planet_score;
    static std::string movie_questions[capacity];
    int movie_answer;
    int movie_score;
    static std::string age_questions[capacity_5];
    int age_answer;
    int age_score;
    static std::string continent_questions[capacity_5];
    int continent_answer;
    int continent_score;
    static std::string job_questions[capacity_5];
    int job_answer;
    int job_score;
    static std::string music_questions[capacity];
    int music_answer;
    int music_score;



    FeelingData();

};
void answer_shower();

void calculating(FeelingData& f) ;

#endif
