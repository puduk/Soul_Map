cmake_minimum_required(VERSION 4.0)
project(Soul_Map)

set(CMAKE_CXX_STANDARD 20)

add_executable(Soul_Map main.cpp Soul/love.cpp Soul/personal.cpp Soul/daily_mood.cpp Soul/stress.cpp
               Soul/mood_color.cpp Soul/soul_data.cpp Soul/menu.cpp Soul/geography.cpp Soul/iq.cpp
               Soul/english.cpp Soul/math.cpp Soul/general.cpp Soul/brain_data.cpp
               Soul/age.cpp Soul/animal.cpp Soul/continent.cpp Soul/feeling_data.cpp Soul/game.cpp
               Soul/job.cpp Soul/movie.cpp Soul/planet.cpp Soul/singer.cpp


)
