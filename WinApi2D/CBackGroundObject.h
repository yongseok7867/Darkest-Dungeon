#pragma once
#include "CGameObject.h"
#include <string>

class CD2DImage;

class CBackGroundObject : public CGameObject
{
private:
	CD2DImage* m_pImg;

public:
	CBackGroundObject();
	virtual ~CBackGroundObject();

	CBackGroundObject* Clone();

	virtual void update();
	virtual void render();

	void Load(const wstring& strKey, const wstring& strPath);
};

