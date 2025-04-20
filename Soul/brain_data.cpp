#include "brain_data.hpp"
#include <iostream>
#include "terminal.hpp"
#include <chrono>
#include <thread>


std::string BrainData::iq_questions[capacity] = {
    "1) Which number is different from the others? \n A) 2  B) 3  C) 5  D) 8",
    "2) Complete the sequence: 2, 4, 8, 16, ?\nA) 18  B) 20  C) 24  D) 32",
    "3) If some A's are B, and some B's are C, what is definitely true?\nA) All A's are C  B) Some A's are C  C) None of the above  D) Some C's are A",
    "4) There are 3 light bulbs in a room and 3 switches outside. You can enter the room only once. How can you determine which switch belongs to which bulb?\nA) Switch them on and off in order  B) Use heat detection  C) Pure luck  D) Turn all on",
    "5) Apple is 4 $, Banana is 6 $, Watermelon is 10 $. How much is an Orange?\nA) 8  B) 6  C) 12  D) 14",
    "6) The mirror shows 2:45. What is the real time?\nA) 9:15  B) 10:15  C) 3:15  D) 8:45",
    "7) The word “DOG” becomes “LQSHN”. Using the same pattern, what does “CAT” become?\nA) NGFL  B) NHFL  C) NGEM  D) NGEK",
    "8) 1, 1, 2, 3, 5, 8, ?\nA) 10  B) 12  C) 13  D) 15",
    "9) If 2+3 = 10, 3+4 = 21, 4+5 = 36, what is 5+6?\nA) 55  B) 49  C) 41  D) 43",
    "10) A box contains 6 red, 4 green, and 2 blue balls. How many balls must you pick at minimum to be sure that you have at least 3 of one color?\nA) 5  B) 6  C) 7  D) 9"
};

char BrainData::iq_answers[capacity] = {
    'D', 'D', 'C', 'B', 'A', 'A', 'B', 'C', 'A', 'C'
};

std::string BrainData::english_questions[capacity] = {
    "1) Choose the correct sentence:\nA) He don't like pizza.\nB) He doesn't likes pizza.\nC) He doesn't like pizza.\nD) He don't likes pizza.",
    "2) Fill in the blank: I have never ____ such a beautiful place before.\nA) see\nB) saw\nC) seeing\nD) seen",
    "3) Which word is the synonym of 'happy'?\nA) Angry\nB) Sad\nC) Joyful\nD) Tired",
    "4) What is the plural form of 'child'?\nA) Childs\nB) Children\nC) Childes\nD) Childrens",
    "5) Which sentence is correct?\nA) She can to drive.\nB) She cans drive.\nC) She can drive.\nD) She can drives.",
    "6) Choose the correct question form:\nA) Do you like coffee?\nB) Likes you coffee?\nC) You do like coffee?\nD) Are you like coffee?",
    "7) Which one is an adjective?\nA) Quickly\nB) Run\nC) Beautiful\nD) Jump",
    "8) Fill in the blank: They ____ to school every day.\nA) goes\nB) going\nC) go\nD) gone",
    "9) What is the opposite of 'easy'?\nA) Hard\nB) Slow\nC) Small\nD) Light",
    "10) Choose the correct verb form: She has ____ her homework.\nA) do\nB) did\nC) done\nD) does"
};

char BrainData::english_answers[capacity] = {
    'C', 'D', 'C', 'B', 'C', 'A', 'C', 'C', 'A', 'C'
};

std::string BrainData::math_questions[capacity] = {
    "1) What is 12 × 8?\nA) 96  B) 88  C) 104  D) 108",
    "2) What is the square root of 144?\nA) 10  B) 11  C) 12  D) 13",
    "3) If you divide 81 by 9, what is the result?\nA) 7  B) 8  C) 9  D) 10",
    "4) What is 15% of 200?\nA) 25  B) 30  C) 35  D) 40",
    "5) Solve: (3 + 5) × 2\nA) 11  B) 14  C) 16  D) 13",
    "6) What comes next in the sequence: 2, 4, 6, 8, ?\nA) 10  B) 12  C) 9  D) 11",
    "7) What is the value of Pi (π) approximately?\nA) 2.14  B) 3.14  C) 4.14  D) 5.14",
    "8) What is the perimeter of a square with side length 5?\nA) 10  B) 15  C) 20  D) 25",
    "9) How many degrees are in a right angle?\nA) 90  B) 180  C) 45  D) 60",
    "10) What is 2 to the power of 5 (2^5)?\nA) 16  B) 32  C) 64  D) 48"
};


char BrainData::math_answers[capacity] = {
    'A', 'C', 'C', 'B', 'C', 'A', 'B', 'C', 'A', 'B'
};


std::string BrainData::general_questions[capacity] = {
    "1) What is the capital of France?\nA) Berlin  B) Madrid  C) Paris  D) Rome",
    "2) How many continents are there in the world?\nA) 5  B) 6  C) 7  D) 8",
    "3) What planet is known as the Red Planet?\nA) Venus  B) Mars  C) Jupiter  D) Mercury",
    "4) Who wrote 'Romeo and Juliet'?\nA) Charles Dickens  B) J.K. Rowling  C) William Shakespeare  D) George Orwell",
    "5) Which animal is known as the King of the Jungle?\nA) Tiger  B) Lion  C) Elephant  D) Leopard",
    "6) What is the boiling point of water at sea level?\nA) 90°C  B) 95°C  C) 100°C  D) 105°C",
    "7) What is the largest ocean on Earth?\nA) Atlantic Ocean  B) Indian Ocean  C) Arctic Ocean  D) Pacific Ocean",
    "8) Who painted the Mona Lisa?\nA) Vincent van Gogh  B) Pablo Picasso  C) Leonardo da Vinci  D) Michelangelo",
    "9) What gas do plants absorb from the atmosphere?\nA) Oxygen  B) Nitrogen  C) Carbon Dioxide  D) Hydrogen",
    "10) Which country is known for the Great Wall?\nA) Japan  B) China  C) India  D) South Korea"
};

char BrainData::general_answers[capacity] = {
    'C', 'C', 'B', 'C', 'B', 'C', 'D', 'C', 'C', 'B'
};


std::string BrainData::geography_questions[capacity] = {
    "1) What is the largest continent on Earth?\nA) Africa  B) Asia  C) Europe  D) Antarctica",
    "2) Which river is the longest in the world?\nA) Amazon  B) Yangtze  C) Nile  D) Mississippi",
    "3) What country has the most population?\nA) India  B) China  C) USA  D) Indonesia",
    "4) Which country has the largest land area?\nA) Canada  B) USA  C) Russia  D) Brazil",
    "5) Mount Everest is located in which mountain range?\nA) Alps  B) Andes  C) Himalayas  D) Rockies",
    "6) What is the capital of Australia?\nA) Sydney  B) Melbourne  C) Brisbane  D) Canberra",
    "7) Which ocean is on the east coast of the United States?\nA) Pacific  B) Atlantic  C) Indian  D) Arctic",
    "8) The Sahara Desert is located on which continent?\nA) Asia  B) South America  C) Africa  D) Australia",
    "9) Which two continents are located entirely in the Western Hemisphere?\nA) North and South America  B) Europe and Asia  C) Africa and Europe  D) Asia and Australia",
    "10) What country has the most islands in the world?\nA) Canada  B) Indonesia  C) Sweden  D) Philippines"
};



char BrainData::geography_answers[capacity] = { 'B', 'C', 'B', 'C', 'C', 'D', 'B', 'C', 'A', 'C' };


BrainData::BrainData() {

  iq_score = 0;
  english_score = 0;
  math_score = 0;
  general_score = 0;
  geography_score = 0;

  user_iq_answer = ' ';
  user_english_answer = ' ';
  user_math_answer = ' ';
  user_general_answer = ' ';
  user_geography_answer = ' ';




}


void calculating(BrainData& b) {
    char spinner[] = {'|', '/', '-', '\\'};
    for (int i = 0; i < 10; ++i) {
        std::cout << "\rChecking your results... " << spinner[i % 4];
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "\rDone!           " << std::endl;
}



























