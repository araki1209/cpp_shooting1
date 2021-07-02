#include "GAME_OVER.h"
#include"libOne.h"
#include"GAME.h"
GAME_OVER::GAME_OVER(class GAME* game) :
    SCENE(game) {

}
GAME_OVER::~GAME_OVER() {}
void GAME_OVER::draw() {
    clear();
    printSize(300);
    print("GAME OVER");
}
void GAME_OVER::nextScene() {
    if (isTrigger(KEY_Z)) {
        game()->changeScene(GAME::TITLE_ID);
    }
}
