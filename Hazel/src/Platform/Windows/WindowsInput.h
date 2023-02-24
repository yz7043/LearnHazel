#pragma once
#include "Hazel/Core.h"
#include "Hazel/Input.h"
namespace Hazel
{
	class WindowsInput : public Input
	{
	public:
	protected:
		bool IsKeyPressedImpl(int keycode) override;
		bool IsMousePressedImpl(int button) override;
		float GetMouseXImpl() override;
		float GetMouseYImpl() override;
		std::pair<float, float> GetMousePositionImpl() override;
	};
}