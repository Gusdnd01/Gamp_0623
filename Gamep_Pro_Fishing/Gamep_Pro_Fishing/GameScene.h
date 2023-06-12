#pragma once
class GameScene : public Scene
{
public:
	// Scene을(를) 통해 상속됨
	virtual void Init(PPLAYER _pPlayer) override;
	virtual void Update(PPLAYER _pPlayer, float dt) override;
	virtual void Render(PPLAYER _pPlayer) override;
	virtual void Release() override;

public:
	void Fishing();
	void Input();

private:
	bool m_bIsFishing;
	
};

