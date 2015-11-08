#pragma once
#include "Immovable.h"

class Portal : public Immovable
{
public:
	Portal(float2 pfLocationRatio, float2 pfDimensionRatio, int nDirection, int nDestination) :
		Immovable(nullptr, pfLocationRatio, pfDimensionRatio, false, true, true, NULL)
	{
	}

protected:

private:

	int m_nDirection;
	int m_nDestination;

};