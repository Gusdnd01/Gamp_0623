#include "pch.h"
#include "SceneManager.h"

PPLAYER _pPlayer;

void SceneManager::RegisterScene(const std::string& sceneName, Scene* scene)
{
	m_sceneContainer.insert(make_pair(sceneName, scene));
}

void SceneManager::LoadScene(const std::string& sceneName)
{
	m_activeScene = m_sceneContainer.find(sceneName)->second;
	Init(_pPlayer);
}

void SceneManager::Init(PPLAYER _pPlayer)
{
	if (m_activeScene != nullptr)
		m_activeScene->Init(_pPlayer);
}

void SceneManager::Update(PPLAYER _pPlayer, float dt)
{
	if (m_activeScene != nullptr)
		m_activeScene->Update(_pPlayer, dt);
}

void SceneManager::Render(PPLAYER _pPlayer)
{
	if (m_activeScene != nullptr)
		m_activeScene->Render(_pPlayer);
}

void SceneManager::Release()
{
	m_activeScene->Release();
}
