#pragma once

#include "Core.h"
#include "stdio.h"
namespace SHIROBAKO
{
	//将这个Application类作为dll导出，然后在Sandbox.exe中动态调用
	class SHIROBAKO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//在客户端定义
	Application* CreateApplication();
}

