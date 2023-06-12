#pragma once

class Scene;

class SceneManager
{
	INIT_SINGLE(SceneManager);
public:
	void RegisterScene(const std::string& sceneName, Scene* scene);
	void LoadScene(const std::string& sceneName);

public:
	void	Init(PPLAYER _pPlayer);
	void	Update(PPLAYER _pPlayer, float dt);
	void	Render(PPLAYER _pPlayer);
	void	Release();

private:
	Scene*				m_activeScene;
	map<string, Scene*>	m_sceneContainer;
};

