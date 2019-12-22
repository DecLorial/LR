#include <LREngine.h>

class Sandbox : public LREngine::Application
{
public :
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

LREngine::Application* LREngine::CreateApplication()
{
	return new Sandbox(); 
}