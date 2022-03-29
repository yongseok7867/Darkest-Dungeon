#include "framework.h"
#include "CScene_Title.h"
#include "CImageObject.h"
#include "CImageButton.h"
#include "CSoundManager.h"

CScene_Title::CScene_Title()
{

}

CScene_Title::~CScene_Title()
{

}

void ClickStartButton(DWORD_PTR, DWORD_PTR)
{
	ChangeScn(GROUP_SCENE::STAGE_01);
}

void ClickExitButton(DWORD_PTR, DWORD_PTR)
{
	PostQuitMessage(0);
}

void CScene_Title::Enter()
{
	// 1. 백그라운드 출력용 오브젝트 제작
	CImageObject* backGroundObjcet = new CImageObject;
	backGroundObjcet->SetPos(fPoint(0.f, 0.f));
	backGroundObjcet->SetScale(fPoint(1280.f, 720.f));
	backGroundObjcet->Load(L"BakcGroundImage", L"texture\\title_bg.png");
	AddObject(backGroundObjcet, GROUP_GAMEOBJ::BACKGROUND);

	// 2. 백그라운드 이미지 출력용 오브젝트 제작
	CImageObject* bgHousObjcet = new CImageObject;
	bgHousObjcet->SetPos(fPoint(0.f, 500.f));
	bgHousObjcet->SetScale(fPoint(1280.f, 220.f));
	bgHousObjcet->Load(L"BgHousObjcetImage", L"texture\\title_house.png");
	AddObject(bgHousObjcet, GROUP_GAMEOBJ::BACKGROUND);
 
	// 3. 로고 출력용 오브젝트 제작
	CImageObject* logoObjcet = new CImageObject;
	logoObjcet->SetPos(fPoint(270.f, 100.f));
	logoObjcet->SetScale(fPoint(720.f, 200.f));
	logoObjcet->Load(L"LogoImage", L"texture\\title.png");
	AddObject(logoObjcet, GROUP_GAMEOBJ::BACKGROUND);

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
	CSoundManager::GetInst()->Play(L"TitleBgm");
}

void CScene_Title::Exit()
{

}
