#include "SceneManager.h"
#include "../Utility/InputControl.h"
#include "DxLib.h"
#include "TitleScene.h"
#include "GameMainScene.h"
#include "ResultScene.h"
#include "HelpScene.h"
#include "RankingDispScene.h"
#include "RankingInputScene.h"

SceneManager::SceneManager() : current_scene(nullptr)
{

}