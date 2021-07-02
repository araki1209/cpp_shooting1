#pragma once
class GAME
{
public:
	enum SCENE_ID {
		TITLE_ID,
		STAGE_ID,
		GAME_CLEAR_ID,
		GAME_OVER_ID,
		NUM_SCENES
	};
private:
	class SCENE* Scenes[NUM_SCENES];
	SCENE_ID CurSceneid;
public:
	GAME();
	~GAME();
	void run();
	void changeScene(SCENE_ID sceneid);
};

