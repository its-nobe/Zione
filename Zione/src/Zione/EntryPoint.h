#pragma once

#ifdef ZN_PLATFORM_WINDOWS

extern Zione::Application* Zione::CreateApplication();
int main(int argc, char** argv ) {
	printf("Zione Engine!!\n");
	auto app = Zione::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
