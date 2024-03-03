#pragma once

#include "Hethor/Core/KeyCodes.h"
#include "Hethor/Core/MouseCodes.h"

#include <glm/glm.hpp>

namespace Hethor {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};
}
