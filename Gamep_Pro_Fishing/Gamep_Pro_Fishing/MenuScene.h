#pragma once
class MenuScene : public Scene
{
public:
	// Scene을(를) 통해 상속됨 
	virtual void Init(PPLAYER _pPlayer) override;
	virtual void Update(PPLAYER _pPlayer,float dt) override;
	virtual void Render(PPLAYER _pPlayer) override;
	virtual void Release() override;

private:
	void GameTitle();
	int	 KeyController();
	int  MenuDraw();
};

