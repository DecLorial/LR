#pragma once

#ifdef LR_PLATFORM_WINDOWS

extern LREngine::Application* LREngine::CreateApplication();


int main(int argc,char** argv)
{
	auto app = LREngine::CreateApplication();
	app->Run();
	delete app;
}

#endif

