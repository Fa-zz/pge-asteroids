#include <iostream>
#include <string>
#include <algorithm>

#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class OneLoneCoder_Asteroids : public olc::PixelGameEngine {
public:
    OneLoneCoder_Asteroids() {
        sAppName = "Asteroids";
    }

private:
    struct sSpaceObject {
        float x;    // x: x coord for pos
        float y;    // y: y coord for pos
        float dx;   // dx: speed and direction of travel
        float dy;   // dy: speed and direction of travel
        int nSize;

        // float angle;
    };

    std::vector<sSpaceObject> vecAsteroids;
    //std::vector<sSpaceObject> vecBullets;
    sSpaceObject player;

protected:
    // ON USER CREATE
    virtual bool OnUserCreate() {

        return true;
    }

    // ON USER UPDATE
    virtual bool OnUserUpdate(float fElapsedTime) {
        Clear(olc::BLACK);

        return true;
    }

};

int main() {
    OneLoneCoder_Asteroids game;
    if (game.Construct(320, 200, 4, 4))
        game.Start();
    return 0;

}