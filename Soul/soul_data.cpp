#include "soul_data.hpp"
#include <iostream>
#include "terminal.hpp"
#include <chrono>
#include <thread>


std::string SoulData::answer_page[5] = {
    "1 = I dont agree",
    "2 = Slightly agree",
    "3 = Neutral ",
    "4 = I totally agree  ",
    "5 = Extremely agree",
};

std::string SoulData::love_questions[10] = {
    " How important is loyalty in a relationship for you? ",
    " Do you believe in love at first sight? ",
    " How much do you value deep conversations with your partner?   ",
    " Is physical touch important for you in a relationship?  ",
    " How comfortable are you with expressing your feelings? ",
    " How much do you care about your partner's appearance? ",
    " Do you think arguments are a natural part of love? ",
    " How important is spending time together daily? ",
    " Would you forgive your partner after a mistake? ",
    " How important is it to share the same future goals?",

};

std::string SoulData::personal_questions[10] = {
    " Do you enjoy meeting new people?  ",
    " How often do you rely on your intuition?  ",
    " Do you prefer planning over spontaneity?  ",
    " How important is staying organized in your life? ",
    " Do you get emotionally affected by others easily?  ",
    " How often do you take the lead in group situations? ",
    " Do you enjoy being the center of attention?  ",
    " How often do you reflect on your own thoughts and actions? ",
    " Do you get bored of routines quickly? ",
    " How comfortable are you in unfamiliar situations?",

};

std::string SoulData::daily_mood_questions[10] = {
    " Did you sleep well last night? ",
    " How energetic do you feel right now? ",
    " Are you feeling optimistic about today? ",
    " How stressed do you feel at the moment? (1 = Very Stressed, 5 = Not at all) ",
    " Do you feel emotionally stable today? ",
    " How excited are you about your current plans? ",
    " Do you feel appreciated or valued today? ",
    " How patient are you feeling right now? ",
    " Do you feel socially open today? ",
    " Are you at peace with yourself this moment? "
};



std::string SoulData::stress_questions[10] = {
    " Do you often feel overwhelmed by your responsibilities? ",
    " How often do you feel tense without knowing why? ",
    " Do you have trouble sleeping due to worries? ",
    " How easily do small problems frustrate you? ",
    " How often do you feel emotionally drained? ",
    " Do you have frequent headaches or physical tension? ",
    " How often do you feel like you're running out of time? ",
    " Are you currently satisfied with your work/study balance? ",
    " Do you feel supported by people around you? ",
    " How often do you feel like everything is under control? "
};

std::string SoulData::mood_color_questions[10] = {
    " Do bright colors make you feel happier? ",
    " Do you associate calmness with the color blue? ",
    " Does red feel like an intense or overwhelming color to you? ",
    " How often do you feel connected to nature (greens, earth tones)? ",
    " Do pastel colors make you feel peaceful? ",
    " Do you enjoy dark, muted color palettes? ",
    " How comfortable are you around vibrant colors? ",
    " Do colors affect your mood throughout the day? ",
    " Do you wear colors based on how you feel? ",
    " Would you say your current mood is light or heavy? "
};

SoulData::SoulData() {
  love_answer = 0;
  love_score = 0;
  personal_answer = 0;
  personal_score = 0;
  daily_mood_answer = 0;
  daily_mood_score = 0;
  stress_answer = 0;
  stress_score = 0;
  mood_color_answer = 0;
  mood_color_score = 0;


}

void answer_printer(){

  for(int i = 0; i < 5; i++){
    std::cout << background_main << blue <<SoulData::answer_page[i] << std::endl;
  }
}

void calculating(SoulData& s) {
    char spinner[] = {'|', '/', '-', '\\'};
    for (int i = 0; i < 10; ++i) {
        std::cout << "\rChecking your results... " << spinner[i % 4];
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "\rDone!           " << std::endl;
}
























