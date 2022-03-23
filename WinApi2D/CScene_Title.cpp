#include "framework.h"
#include "CScene_Title.h"
#include "CImageObject.h"
#include "CImageButton.h"

CScene_Title::CScene_Title()
{

}

CScene_Title::~CScene_Title()
{

}

void CScene_Title::Enter()
{
	// TODO : 
	// 1. ��׶��� ��¿� ������Ʈ ����
	CImageObject* backGroundObjcet = new CImageObject;
	backGroundObjcet->SetPos(fPoint(0.f, 0.f));
	backGroundObjcet->SetScale(fPoint(1280.f, 720.f));
	backGroundObjcet->Load(L"BakcGroundImage", L"texture\\title_bg.png");
	AddObject(backGroundObjcet, GROUP_GAMEOBJ::BACKGROUND);

	// 2. ��׶��� �̹��� ��¿� ������Ʈ ����
	CImageObject* bgHousObjcet = new CImageObject;
	bgHousObjcet->SetPos(fPoint(0.f, 500.f));
	bgHousObjcet->SetScale(fPoint(1280.f, 220.f));
	bgHousObjcet->Load(L"BgHousObjcetImage", L"texture\\title_house.png");
	AddObject(bgHousObjcet, GROUP_GAMEOBJ::BACKGROUND);
 
	// 3. �ΰ� ��¿� ������Ʈ ����
	CImageObject* logoObjcet = new CImageObject;
	logoObjcet->SetPos(fPoint(270.f, 100.f));
	logoObjcet->SetScale(fPoint(720.f, 200.f));
	logoObjcet->Load(L"LogoImage", L"texture\\title.png");
	AddObject(logoObjcet, GROUP_GAMEOBJ::BACKGROUND);

	// 4. ���� ��ư
	CImageButton* startButton = new CImageButton;
	startButton->Load(L"TitleButton", L"texture\\title_button.png");
	startButton->SetText(L" ���� �ϱ�");
	startButton->SetPos(fPoint(500.f, 600.f));
	startButton->SetScale(fPoint(300.f, 100.f));
	AddObject(startButton, GROUP_GAMEOBJ::UI);

	// 5. ���� ��ư
	CImageButton* exitButton = new CImageButton;
	exitButton->Load(L"ExitButton", L"texture\\exit_button.png");
	exitButton->SetPos(fPoint(1170.f,650.f));
	exitButton->SetScale(fPoint(100.f, 50.f));
	AddObject(exitButton, GROUP_GAMEOBJ::UI);
}

void CScene_Title::Exit()
{

}
