#include "hzpch.h"
#include "Application.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"
namespace Hazel
{
	Application::Application() {}

	Application::~Application() {}

	void Application::Run()
	{
		WindowResizeEvent e(1200, 700);
		if (e.IsInCategory(EventCategoryApplication))
		{
			HZ_TRACE(e);
		}
		while (true);
	}
}