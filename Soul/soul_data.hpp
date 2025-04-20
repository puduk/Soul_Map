#ifndef SOUL_DATA_H
#define SOUL_DATA_H
#include <iostream>

class SoulData {

  public:

    static std::string answer_page[5];
    static std::string love_questions[10];
    int love_answer;
    int love_score;
    static std::string personal_questions[10];
    int personal_answer;
    int personal_score;
    static std::string daily_mood_questions[10];
    int daily_mood_answer;
    int daily_mood_score;
    static std::string stress_questions[10];
    int stress_answer;
    int stress_score;
    static std::string mood_color_questions[10];
    int mood_color_answer;
    int mood_color_score;









    SoulData();

};

void answer_printer();
void calculating(SoulData& s);
#endif


