#include "framework.h"
#include "CBackGroundObject.h"

CBackGroundObject::CBackGroundObject()
{
	m_pImg = nullptr;
}

CBackGroundObject::~CBackGroundObject()
{

}

CBackGroundObject* CBackGroundObject::Clone()
{
	return nullptr;
}

void CBackGroundObject::update()
{

}

void CBackGroundObject::render()
{
	if (nullptr == m_pImg)
	{
		return;
	}
	CRenderManager::GetInst()->RenderImage(
		m_pImg,
		GetPos().x,
		GetPos().y,
		GetPos().x + GetScale().x,
		GetPos().y + GetScale().y
	);
}

void CBackGroundObject::Load(const wstring& strKey, const wstring& strPath)
{
	m_pImg = CResourceManager::GetInst()->LoadD2DImage(strKey, strPath);
}