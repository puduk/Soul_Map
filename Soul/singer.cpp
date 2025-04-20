#include "singer.hpp"
#include <iostream>
#include "terminal.hpp"

void singer(FeelingData& f){

    std::cout << background_main << purple << "You need to rate to the important level for you (1-5)" << std::endl;
    answer_shower();

  for(const std::string& singer : FeelingData::music_questions){
    std::cout << background_main << red << singer << std::endl;
    std::cout << background_main << blue << "Your answer: " << std::endl;

    while(!(std::cin >> f.music_answer ) ||f.music_answer  > 5 || f.music_answer  < 1){
      std::cout << background_main << red << "Please enter between 1 and 5 " << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,'\n');
      std::cout << background_main << blue << "Your answer: " << std::endl;

    }

    f.music_score  += f.music_answer ;

  }

  calculating(f);

std::cout << background_main << gray << "Your Total Music Score: " << f.music_score << std::endl;

if (f.music_score <= 5) {
    std::cout << background_main << purple << cool
              << "You're chaotic and fun — You vibe with artists like Die Antwoord 🔥, 6ix9ine 💀, Oliver Tree 🛴, and Grimes 🪐."
              << std::endl;

} else if (f.music_score <= 10) {
    std::cout << background_main << purple << cool
              << "You're edgy and emotional — You'd listen to Billie Eilish 🌫️, Lil Peep 💔, XXXTentacion 😶, or Joji 🌧️."
              << std::endl;

} else if (f.music_score <= 15) {
    std::cout << background_main << purple << cool
              << "You're laid-back and chill — Your playlist includes Mac Miller 🎧, Post Malone 🍻, The Weeknd 🌌, and Frank Ocean 🌊."
              << std::endl;

} else if (f.music_score <= 20) {
    std::cout << background_main << purple << cool
              << "You're full of soul and vibes — You’d enjoy Kendrick Lamar 🧠, Childish Gambino 🎭, Anderson .Paak 🥁, and SZA 💜."
              << std::endl;

} else if (f.music_score <= 25) {
    std::cout << background_main << purple << cool
              << "You’re a poetic thinker — You connect with Arctic Monkeys 🕶️, Lana Del Rey 🕯️, Hozier 🌲, and Florence Welch 🌬️."
              << std::endl;

} else if (f.music_score <= 30) {
    std::cout << background_main << purple << cool
              << "You have a romantic & nostalgic side — You’d enjoy Adele 🎙️, Taylor Swift 🌸, Sam Smith 💌, and Ed Sheeran 🍂."
              << std::endl;

} else if (f.music_score <= 35) {
    std::cout << background_main << purple << cool
              << "You’re upbeat and full of life — Think Dua Lipa 💃, Bruno Mars 🪩, Lady Gaga 👠, and The 1975 🌀."
              << std::endl;

} else if (f.music_score <= 40) {
    std::cout << background_main << purple << cool
              << "You’re a rebel with rhythm — Eminem 🎤, Travis Scott 🚀, Kanye West 🧠, and Doja Cat 🐾 match your energy."
              << std::endl;

} else if (f.music_score <= 49) {
    std::cout << background_main << purple << cool
              << "You live in epic soundscapes — Hans Zimmer 🎬, Ramin Djawadi 🐉, Woodkid 🔥, and Aurora 🌌 define your cinematic soul."
              << std::endl;

} else if (f.music_score == 50) {
    std::cout << background_main << purple << cool
              << "You are music itself — a balance of chaos and harmony. Your soul aligns with David Bowie ⭐, Freddie Mercury 👑, Thom Yorke 🌙, and Enigma 🌀."
              << std::endl;

}





}

