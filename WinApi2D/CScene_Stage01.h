#pragma once
#include "CScene.h"
class CScene_Stage01 : public CScene
{
public:
	CScene_Stage01();
	virtual ~CScene_Stage01();

	virtual void Enter();	// 해당 씬에 진입시 호출
	virtual void Exit();	// 해당 씬을 탈출시 호출
};

