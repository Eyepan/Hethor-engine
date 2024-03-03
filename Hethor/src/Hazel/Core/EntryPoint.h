#pragma once
#include "Hethor/Core/Base.h"
#include "Hethor/Core/Application.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hethor::Application* Hethor::CreateApplication(ApplicationCommandLineArgs args);

int main(int argc, char** argv)
{
	Hethor::Log::Init();

	HZ_PROFILE_BEGIN_SESSION("Startup", "HethorProfile-Startup.json");
	auto app = Hethor::CreateApplication({ argc, argv });
	HZ_PROFILE_END_SESSION();

	HZ_PROFILE_BEGIN_SESSION("Runtime", "HethorProfile-Runtime.json");
	app->Run();
	HZ_PROFILE_END_SESSION();

	HZ_PROFILE_BEGIN_SESSION("Shutdown", "HethorProfile-Shutdown.json");
	delete app;
	HZ_PROFILE_END_SESSION();
}

#endif
