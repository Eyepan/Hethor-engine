#include "hzpch.h"
#include "Hethor/Renderer/RenderCommand.h"

namespace Hethor {

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}