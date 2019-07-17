#include "pch.h"
#include <iostream>
#define _CRTDBG_MAP_ALOC



//  定数マクロ

#define MY_SIZE 30

//  関数マクロ

#define MY_LOG( log ) printf("File:%s Line:%d Func:%s Log:%s\n", __FILE__, __LINE__, __func__, log)


//  条件付きコンパイル

#ifdef tzouza

#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )

#else

#define DBG_NEW new

#endif


struct PointData {
	int x;

	int y;

	int z;

};

int main()
{
	printf("my size:%d", MY_SIZE);
	MY_LOG("test");
	PointData* pPointData = DBG_NEW PointData;

	_CrtDumpMemoryLeaks();

#ifdef tzouza
	std::cout << "Hello tzouza!\n";

#endif
}
