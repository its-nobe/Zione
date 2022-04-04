#include <Zione.h>

class Sandbox : public Zione::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};
Zione::Application* Zione::CreateApplication()
{
	return new Sandbox();
}