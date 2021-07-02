#include "GAME_CLEAR.h"
#include"libOne.h"
#include"GAME.h"
GAME_CLEAR::GAME_CLEAR(class GAME* game) :
    SCENE(game) {

}
GAME_CLEAR::~GAME_CLEAR() {}
void GAME_CLEAR::draw() {
    clear();
    printSize(300);
    print("GAME CLEAR");
}
void GAME_CLEAR::nextScene() {
    if (isTrigger(KEY_Z)) {
        game()->changeScene(GAME::TITLE_ID);
    }
}
