#include "map.h"

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        int score;
    public:
        Game();
        void run(Map *map);
};

#endif