// 定义头文件，这些头文件包含了程序中必需的或有用的信息，这里包含了 <iostream>头文件
// <iostream>是一个输入输出流相关的头文件。里面包含了一些对输入输出流操作的方法。
#include<iostream>

// 告诉编译器使用 std 命名空间。命名空间是 C++ 中一个相对新的概念
using namespace std;

/*
1、新建项目
2、c++语言
3、选择空项目
4、项目名称；类似于 Javaweb开发中的module模块
   解决方案：类似于 Javaweb开发创建的工程
5、Visual Studio 创建工程之后，在左边窗口解决方案下的的项目包（module模块）下的源文件中创建 鼠标右键 -》添加 -》新建项 -》文件名称（java类文件名）
6、编写 C++ 入门程序 main函数，程序入口，相当于 java main函数
7、本地 Windows 调试器 ：运行自动打开cmd 黑窗口，输出 “hello C++”，并暂停程序结束，方便观察。

*/
int main() {
	// cout 输出
	// << endl 换行
	cout << "hello C++" << endl;
	// 暂停运行：任意键，或者使用 getchar();
	//system("pause");
	getchar();

	return 0;
}