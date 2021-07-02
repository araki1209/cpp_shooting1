#include "GAME.h"
#include"TITLE.h"
#include"STAGE.h"
#include"GAME_CLEAR.h"
#include"GAME_OVER.h"
#include"libOne.h"
GAME::GAME() {
    Scenes[TITLE_ID] = new TITLE(this);
    Scenes[STAGE_ID] = new STAGE(this);
    Scenes[GAME_CLEAR_ID] = new GAME_CLEAR(this);
    Scenes[GAME_OVER_ID] = new GAME_OVER(this);
    CurSceneid = TITLE_ID;
}
GAME::~GAME() {
    for (int i = 0; i < NUM_SCENES; i++) {
        delete Scenes[i];
    }
}
void GAME::run() {
    window(1920, 1080, full);
    while (notQuit) {
        Scenes[CurSceneid]->proc();
    }
}
void GAME::changeScene(SCENE_ID sceneid) {
    CurSceneid = sceneid;
}
