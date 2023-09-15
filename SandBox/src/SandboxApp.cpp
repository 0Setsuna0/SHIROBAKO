#include "SHIROBAKO.h"

//在项目中进行设置，sandbox中的继承，相当于继承了导入的dll中的Application
class Sandbox : public SHIROBAKO::Application
{
public:
	Sandbox()
	{
		printf("sandbox init\n");
	}

	~Sandbox()
	{

	}
};

SHIROBAKO::Application* SHIROBAKO::CreateApplication()
{
	return new Sandbox();
}