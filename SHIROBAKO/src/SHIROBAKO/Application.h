#pragma once

#include "Core.h"
#include "stdio.h"
namespace SHIROBAKO
{
	//�����Application����Ϊdll������Ȼ����Sandbox.exe�ж�̬����
	class SHIROBAKO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//�ڿͻ��˶���
	Application* CreateApplication();
}

