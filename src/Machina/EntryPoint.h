#pragma once
#ifdef MN_PLATFORM_WINDOWS

extern Machina::Application* Machina::CreateApplication();


int main(int argc, char** argv) {
	auto app = Machina::CreateApplication();
	app->Run();
	delete app;
}
#endif