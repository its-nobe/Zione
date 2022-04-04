#pragma once
#include "Core.h"
namespace Zione {
	class ZIONE_API Application
	{
	public:
		Application();
		virtual ~Application();


		void Run();
	};
	// to be defined in client
	Application* CreateApplication();
}
