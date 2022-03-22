#include "framework.h"
#include "CBgHousObject.h"

CBgHousObject::CBgHousObject()
{
	m_pImg = nullptr;
}

CBgHousObject::~CBgHousObject()
{

}

CBgHousObject* CBgHousObject::Clone()
{
	return nullptr;
}

void CBgHousObject::update()
{

}

void CBgHousObject::render()
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

void CBgHousObject::Load(const wstring& strKey, const wstring& strPath)
{
	m_pImg = CResourceManager::GetInst()->LoadD2DImage(strKey, strPath);
}