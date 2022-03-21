#include "framework.h"
#include "CScene_Title.h"
#include "CImageObject.h"
#include "CBackGroundObject.h"

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
	CBackGroundObject* BackGroundObjcet = new CBackGroundObject;
	BackGroundObjcet->SetPos(fPoint(0.f, 0.f));
	BackGroundObjcet->SetScale(fPoint(1280.f, 720.f));
	BackGroundObjcet->Load(L"BakcGroundImage", L"texture\\title_bg.png");
	AddObject(BackGroundObjcet, GROUP_GAMEOBJ::BACKGROUND);

	// 2. ��׶��� �̹��� ��¿� ������Ʈ ����
 
	// 3. �ΰ� ��¿� ������Ʈ ����
	CImageObject* logoObjcet = new CImageObject;
	logoObjcet->SetPos(fPoint(250.f, 100.f));
	logoObjcet->SetScale(fPoint(720.f, 200.f));
	logoObjcet->Load(L"LogoImage", L"texture\\title.png");
	AddObject(logoObjcet, GROUP_GAMEOBJ::BACKGROUND);

	// 4. ���� ��ư
	// 5. ���� ��ư
}

void CScene_Title::Exit()
{

}
