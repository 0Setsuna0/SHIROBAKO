#include "SHIROBAKO.h"

//����Ŀ�н������ã�sandbox�еļ̳У��൱�ڼ̳��˵����dll�е�Application
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