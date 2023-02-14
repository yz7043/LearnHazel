#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

int main(int arc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_ERROR("Initialized Log!");
	HZ_INFO("Hello!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Only Support Windows Platform!
#endif