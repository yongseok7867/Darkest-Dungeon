#include "framework.h"
#include "CScene_Stage01.h"
#include "CImageObject.h"
#include "CImageButton.h"
#include "CSoundManager.h"

CScene_Stage01::CScene_Stage01()
{

}

CScene_Stage01::~CScene_Stage01()
{

}

/*
void ClickStartButton(DWORD_PTR, DWORD_PTR)
{
	ChangeScn(GROUP_SCENE::STAGE_01);
}

void ClickExitButton(DWORD_PTR, DWORD_PTR)
{
	PostQuitMessage(0);
}
*/

void CScene_Stage01::Enter()
{
	// 1. 백그라운드 출력용 오브젝트 제작
	CImageObject* backGroundObjcet = new CImageObject;
	backGroundObjcet->SetPos(fPoint(0.f, 0.f));
	backGroundObjcet->SetScale(fPoint(1280.f, 720.f));
	backGroundObjcet->Load(L"BakcGroundImage2", L"texture\\weald.tutorial.room_wall.effigy_1.png");
	AddObject(backGroundObjcet, GROUP_GAMEOBJ::BACKGROUND);

	
	// 2. 백그라운드 이미지 출력용 오브젝트 제작
	CImageObject* bgHousObjcet = new CImageObject;
	bgHousObjcet->SetPos(fPoint(640.f, 520.f));
	bgHousObjcet->SetScale(fPoint(640.f, 180.f));
	bgHousObjcet->Load(L"PanelInventory", L"texture\\panel_inventory.png");
	AddObject(bgHousObjcet, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet2 = new CImageObject;
	bgHousObjcet2->SetPos(fPoint(0.f, 590.f));
	bgHousObjcet2->SetScale(fPoint(640.f, 110.f));
	bgHousObjcet2->Load(L"PanelHero", L"texture\\panel_hero.png");
	AddObject(bgHousObjcet2, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet3 = new CImageObject;
	bgHousObjcet3->SetPos(fPoint(-30.f, 520.f));
	bgHousObjcet3->SetScale(fPoint(683.f, 70.f));
	bgHousObjcet3->Load(L"PanelBanner", L"texture\\panel_banner.png");
	AddObject(bgHousObjcet3, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet4 = new CImageObject;
	bgHousObjcet4->SetPos(fPoint(238.f, 614.f));
	bgHousObjcet4->SetScale(fPoint(70.f, 78.f));
	bgHousObjcet4->Load(L"EqpWeapon", L"texture\\eqp_weapon_0.png");
	AddObject(bgHousObjcet4, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet5 = new CImageObject;
	bgHousObjcet5->SetPos(fPoint(319.f, 614.f));
	bgHousObjcet5->SetScale(fPoint(70.f, 78.f));
	bgHousObjcet5->Load(L"EqpArmour", L"texture\\eqp_armour_0.png");
	AddObject(bgHousObjcet5, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet6 = new CImageObject;
	bgHousObjcet6->SetPos(fPoint(29.f, 534.f));
	bgHousObjcet6->SetScale(fPoint(80.f, 50.f));
	bgHousObjcet6->Load(L"CrusaderPortrait", L"texture\\crusader_portrait_roster.png");
	AddObject(bgHousObjcet6, GROUP_GAMEOBJ::BACKGROUND);
	
	CImageObject* bgHousObjcet7 = new CImageObject;
	bgHousObjcet7->SetPos(fPoint(245.f, 534.f));
	bgHousObjcet7->SetScale(fPoint(71.f, 43.f));
	bgHousObjcet7->Load(L"CrusaderAbilityFive", L"texture\\crusader.ability.five.png");
	AddObject(bgHousObjcet7, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet8 = new CImageObject;
	bgHousObjcet8->SetPos(fPoint(318.f, 534.f));
	bgHousObjcet8->SetScale(fPoint(71.f, 43.f));
	bgHousObjcet8->Load(L"CrusaderAbilityFour", L"texture\\crusader.ability.four.png");
	AddObject(bgHousObjcet8, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet9 = new CImageObject;
	bgHousObjcet9->SetPos(fPoint(391.f, 534.f));
	bgHousObjcet9->SetScale(fPoint(71.f, 43.f));
	bgHousObjcet9->Load(L"CrusaderAbilityOne", L"texture\\crusader.ability.one.png");
	AddObject(bgHousObjcet9, GROUP_GAMEOBJ::BACKGROUND);

	CImageObject* bgHousObjcet10 = new CImageObject;
	bgHousObjcet10->SetPos(fPoint(464.f, 534.f));
	bgHousObjcet10->SetScale(fPoint(71.f, 43.f));
	bgHousObjcet10->Load(L"CrusaderAbilitySeven", L"texture\\crusader.ability.seven.png");
	AddObject(bgHousObjcet10, GROUP_GAMEOBJ::BACKGROUND);

	/*
	// 4. 시작 버튼
	CImageButton* startButton = new CImageButton;
	startButton->Load(L"TitleButton", L"texture\\title_button.png");
	startButton->SetText(L" 시작 하기");
	startButton->SetPos(fPoint(500.f, 600.f));
	startButton->SetScale(fPoint(300.f, 100.f));
	startButton->SetClickedCallBack(ClickStartButton, 0, 0);
	AddObject(startButton, GROUP_GAMEOBJ::UI);

	// 5. 종료 버튼
	CImageButton* exitButton = new CImageButton;
	exitButton->Load(L"ExitButton", L"texture\\exit_button.png");
	exitButton->SetPos(fPoint(1170.f,650.f));
	exitButton->SetScale(fPoint(100.f, 50.f));
	exitButton->SetClickedCallBack(ClickExitButton, 0, 0);
	AddObject(exitButton, GROUP_GAMEOBJ::UI);

	// 6. 사운드
	CSoundManager::GetInst()->AddSound(L"TitleBgm", L"sound\\mus_theme_outro_loop {a7ac5749-3174-4c7e-bf69-c8d838617124}.wav", true);
	CSoundManager::GetInst()->Play(L"TitleBgm");    */
}

void CScene_Stage01::Exit()
{

}
