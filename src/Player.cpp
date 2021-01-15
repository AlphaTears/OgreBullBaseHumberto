
#include "Player.h"

Player::Player() 
{
	ninjaEntity = nullptr;
	ninjaScenenode = nullptr;


}

Player::~Player() 
{

	delete ninjaEntity;
	delete ninjaScenenode;


}


void Player::createMesh(SceneManager* scnMgr) 
{
	ninjaEntity = scnMgr->createEntity("ninja.mesh");


}


void Player::attachToNode(SceneNode* parent) 
{
	ninjaScenenode = parent->createChildSceneNode();
	ninjaScenenode->attachObject(ninjaEntity);
	ninjaScenenode->setScale(1.0f,1.0f,1.0f);
	



}


void Player::setScale(float x, float y, float z) 
{
	ninjaScenenode->setScale(1.0f, 1.0f, 1.0f);
}


void Player::setPosition(float x, float y, float z)
{
	ninjaScenenode->setPosition(x, y, z);


}

void Player::setRotation(Vector3 axis, Radian angle) 
{
	Quaternion quat(angle, axis);
	ninjaScenenode->setOrientation(quat);



}





void Player::setupNinjaAnimation() 
{
	mNinjaAnimationState = ninjaEntity->getAnimationState("Idle1");
	mNinjaAnimationState->setLoop(true);
	mNinjaAnimationState->setEnabled(true);
	mNinjaAnimationState->setWeight(1);


}




