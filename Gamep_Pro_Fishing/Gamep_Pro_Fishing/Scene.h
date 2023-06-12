#pragma once
class Scene
{
public:
	Scene() = default;
	virtual ~Scene() = default;

public:
	virtual void Init(PPLAYER _pPlayer) = 0;
	virtual void Update(PPLAYER _pPlayer, float dt) = 0;
	virtual void Render(PPLAYER _pPlayer) = 0;
	virtual void Release() = 0;
};

