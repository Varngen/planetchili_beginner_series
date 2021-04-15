#pragma once
#include <chrono>

class FrameTimer
{
public:
	FrameTimer();
	float Mark();

private:
	std::chrono::steady_clock::time_point last;

};

/*using std::chrono::steady_clock;
steady_clock::time_point start = steady_clock::now();
for (int y = 0; y < Graphics::ScreenHeight; y++)
{
	for (int x = 0; x < Graphics::ScreenWidth; x++)
	{
		gfx.PutPixel(x, y, Colors::Green);
	}
}
steady_clock::time_point end = steady_clock::now();

std::chrono::duration<float> runtime = end - start;
float durationSecond = runtime.count();*/