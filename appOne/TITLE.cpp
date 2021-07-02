#include "TITLE.h"
#include"libOne.h"
#include"GAME.h"
TITLE::TITLE(class GAME* game):
    SCENE(game) {

}
TITLE::~TITLE(){}
void TITLE::draw(){
    clear();
    printSize(300);
    print("Title");
}
void TITLE::nextScene(){
    if (isTrigger(KEY_Z)) {
        game()->changeScene(GAME::STAGE_ID);
    }
}