#pragma once
#include "Core.h"
namespace Machina {
	class MACHINA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}
