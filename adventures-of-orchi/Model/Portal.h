#pragma once
#include "Immovable.h"

class Portal : public Immovable
{
public:
	Portal(
		float2 pfLocationRatio, 
		float2 pfDimensionRatio, 
		int nDirection, 
		int nDestination,
		const shared_ptr<DeviceResources>& deviceResources) :
		Immovable(
			nullptr, 
			pfLocationRatio, 
			pfDimensionRatio, 
			false, 
			true, 
			true, 
			deviceResources)
	{
	}

	void Render2D(float2 fWindowDimensions);

	void Render3D(
		ComPtr<ID3D11RenderTargetView> renderTargetView,
		float2 fWindowDimensions,
		float2 fScaleDimensions, float dpi);

protected:

private:

	int m_nDirection;
	int m_nDestination;

};