#include<iostream>

class Player
{
public:
	float PlayerHp, PlayerMp;
	int PlayerAtteck;
	Player();
	void PlayerHM();
private:
	
	
};
Player::Player() {

}
void Player :: PlayerHM()
{
	this->PlayerHp = 100;
	this->PlayerMp = 100;
}
class Controller : public Player
{
public:
	int MoveX, MoveY;
private:
	Controller();
	Controller(int MoveX, int MoveY);
};
class Monster
{
public:
	int MonsterHp, MonsterMp;
	int MonterAtteck;

private:
};
class Slime : public Monster
{
public:

private:
};
class Goblin : public Monster
{
public:

private:
};
class Hog : public Monster
{
public:

private:
};

int main()
{

}