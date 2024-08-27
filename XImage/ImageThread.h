#pragma once
#include <QThread>
class ImageThread : public QThread
{
public:
	static void DealImage(unsigned char *img,
		unsigned int size,
		float bright,
		int threadCount);
	static int DealPercent();
	static void Wait();
	void run();
	unsigned int begin = 0;
	unsigned int end = 0;
	unsigned int cur = 0;
	unsigned char *img = nullptr;
	float bright = 1;
	ImageThread();
	~ImageThread();
};

