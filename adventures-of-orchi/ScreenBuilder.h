#pragma once
#include "pch.h"
#include <vector>
#include "Model\Portal.h"
#include "Model\Space.h"

using namespace std;

class ScreenBuilder
{
public:
	ScreenBuilder(float screenWidth, float screenHeight);

	// TODO: This will just have 1 argument.
	void BuildScreen1(vector<Space *> * m_spaceData, ID3D11Texture2D * tree);

protected:

private:
	float m_fScreenWidth;
	float m_fScreenHeight;

};