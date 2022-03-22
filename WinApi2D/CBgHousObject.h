#pragma once
#include "CGameObject.h"
#include <string>

class CD2DImage;

class CBgHousObject : public CGameObject
{
private:
	CD2DImage* m_pImg;

public:
	CBgHousObject();
	virtual ~CBgHousObject();

	CBgHousObject* Clone();

	virtual void update();
	virtual void render();

	void Load(const wstring& strKey, const wstring& strPath);
};

