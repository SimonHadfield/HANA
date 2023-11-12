#pragma once

#include "Core.h"
#include "Events/Event.h"

// init window and renderer
#include "Window.h"
#include "Layers/LayerStack.h"
#include "Renderer/Renderer.h"
// #include "Layers/Layer.h"

#include "Time.h"

namespace Hana {

	class HANA_API Application
	{
	public:
		// Application();
		virtual ~Application();
		
		void Run();
		
		virtual void PushLayer(Layer* layer);

	private:
		LayerStack m_LayerStack;
		bool m_Running = true;

		Renderer RenderContext;
	};

	// to define in client
	Application* CreateApplication();

}
