



#ifndef PLAYER_H_


#define PLAYER_H_
#include "Ogre.h"
#include"btBulletDynamicsCommon.h"
#include "btBulletCollisionCommon.h"
#include "OgreApplicationContext.h"
#include "OgreInput.h"
#include "OgreRTShaderSystem.h"
#include "OgreCameraMan.h"

using namespace Ogre;
using namespace OgreBites;

class Player
{
private:

	SceneNode* ninjaScenenode;
	Entity* ninjaEntity;
	

	


public:

	Player();

	~Player();

	void createMesh(SceneManager* scnMgr);

	void attachToNode(SceneNode* parent);

	void setScale(float x, float y, float z);

	void setRotation(Vector3 axis, Radian angle);

	void setPosition(float x, float y, float z);

	void setupNinjaAnimation();

	
	AnimationState* mNinjaAnimationState;
};

#endif // !PLAYER_H_