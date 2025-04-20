#ifndef BRAIN_DATA_H
#define BRAIN_DATA_H
#include <iostream>


class BrainData{

  public:

    const static int capacity = 10;

    static std::string iq_questions[capacity];
    char user_iq_answer ;
    int iq_score;
    static char iq_answers[capacity];

    static std::string english_questions[capacity];
    char user_english_answer;
    int english_score;
    static char english_answers[capacity];

    static std::string math_questions[capacity];
    char user_math_answer;
    int math_score;
    static char math_answers[capacity];

    static std::string general_questions[capacity];
    char user_general_answer;
    int general_score;
    static char general_answers[capacity];

    static std::string geography_questions[capacity];
    char user_geography_answer;
    int geography_score;
    static char geography_answers[capacity];



    BrainData();

  };

void calculating(BrainData& b);


#endif