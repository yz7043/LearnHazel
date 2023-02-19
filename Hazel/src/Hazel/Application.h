#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"
#include "Window.h"
#include "Hazel/LayerStack.h"

namespace Hazel
{ 
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		std::unique_ptr<Window> m_Window;
		bool OnWindowClose(WindowCloseEvent& e);
		bool m_Running = true;

		LayerStack m_LayerStack;
	};

	// To be defined in the client
	Application* CreateApplication();
}

