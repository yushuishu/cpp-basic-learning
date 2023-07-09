﻿#include <iostream>
using namespace std;

#include<string>

/*
 * 修饰符合数据类型
 *
* ================================================================== 修饰符类型 ==========================================================================
* 修饰符类型：
*		signed: 有符号
*		unsigned：无符号
* 1、signed、unsigned、long、short 可用于修饰整型
* 2、signed、unsigned 可用于修饰字符型
* 3、long、short 可用于修饰双精度型
* signed、unsigned 也可以用于修饰 long 和 short 的修饰符前缀，如：unsigned long int
* 
* 
* =================================================================== 数据类型 ============================================================================
* 数据类型					占用空间					取值范围
* signed char				1字节						-128 到 127
* unsigned char				1字节						0 到 255
* 
* signed short int			2字节						-2^15 到 2^15 - 1 （-32768 到 32767）
* unsigned short int		2字节						0 到 2^16 - 1 （0 到 65535）
* 
* signed int				4字节						-2^31 到 2^31 - 1（-2147483648 到 2147483647）
* unsigned int				4字节						0 到 2^32 - 1（0 到 4294967295）
* 
* signed long int			32位操作系统4字节			-2^31 到 2^31 - 1（-2147483648 到 2147483647）
* 							64位操作系统8字节			-2^63 到 2^63 - 1（-9223372036854775808 到 9223372036854775807）
* unsigned long int			32位操作系统4字节			0 到 2^32 - 1（0 到 4294967295）
* 							64位操作系统8字节			0 到 2^64 - 1（0 到 18446744073709551615）
* 
* float						4字节						2.22507e−308 到 1.79769e+308（浮点数在内存中都是按科学计数法来存储的，浮点数的精度是由尾数的位数决定。float保留到小数点后面7位，能保证6位有效数字）
* double					8字节						2.22507e−308 到 1.79769e+308（double保留到小数点后面16位，能保证15位有效数字）
* long double				根据编译器实现不同			长双精度型，内存大小：规定不小于double的长度，至少8字节，Visual Studio里，long double跟double是一样8字节
* 							8、10、12、16 四种字节
* 
* wchar_t					2或4个字节（16位32位）		1个宽字符
* 
* string					32位编译器下 28字节			可变长的字符串，在64位操作系统下，string类型的最大长度为8589934591个字符
* 							64位 40字节
* 
* bool						1字节						0 值代表 假 ，非0值都代表 真
* 
* 
* ===================================================================== 总结 ==============================================================================
* 1、char
* char 的默认类型不确定有可能是 unsigned，也有可能是 signed，主要根据编译器而定。
* 
* 2、int 和 long
* 16位操作系统：long：4字节，int：2字节
* 32位操作系统：long：4字节，int：4字节
* 64位操作系统：long：8字节，int：4字节
* 早年流行16位和32位操作系统时最好用long修饰int型（都是4字节）
* 现在流行32位和64位操作系统，使用int比较多（都是4字节）
* 
*/
int main() {
    cout << endl << "------------------- 数据类型字节 ------------------------------" << endl;
    // sizeof 关键字，可以统计数据类型所占内存大小
    cout << "char : " << sizeof(char) << endl; // win11运行结果：1
    cout << "short int : " << sizeof(short int) << endl; // win11运行结果：2
    cout << "int : " << sizeof(int) << endl; // win11运行结果：4
    cout << "long int : " << sizeof(long int) << endl; // win11运行结果：4
    cout << "float : " << sizeof(float) << endl; // win11运行结果：4
    cout << "double : " << sizeof(double) << endl; // win11运行结果：8
    cout << "wchar_t : " << sizeof(wchar_t) << endl; // win11运行结果：2
    cout << "string : " << sizeof(string) << endl; // win11运行结果：40
    cout << "bool : " << sizeof(bool) << endl; // win11运行结果：1

    cout << endl << "------------------- 数据类型使用 ------------------------------" << endl;

    // cahr使用单引号，char类型的字符串以’\0’结尾
    char aaa = 'a';
    short int bbb = 10;
    int ccc = 20;
    long ddd = 10000;
    float eee = 9.8f;
    double fff = 3.1415;
    // 1、定义wchar_t时，需要以L开头，如果没有L，程序将会将wchar_t转换为char
    // 2、wchar_t类型的字符串以’\0\0’结尾
    // 3、要想输出wchar_t类型的字符，必须使用wcout，其在iostream中声明
    // 4、使用setlocale函数将本地化设置为中文UTF-8编码，否则中文不会输出
    setlocale(LC_ALL, "zh_CN.UTF-8");
    wchar_t ggg[] = L"你好 世界";

    cout << "char aaa: " << aaa << endl;
    cout << "short int bbb: " << bbb << endl;
    cout << "int ccc: " << ccc << endl;
    cout << "long int ddd: " << ddd << endl;
    cout << "float eee: " << eee << endl;
    cout << "double fff: " << fff << endl;
    wcout << "wchar_t ggg: " << ggg << endl;


    cout << endl << "---------------------- 字符串 ---------------------------" << endl;
    // 1、C 风格字符串
    char str1[] = "hello world";
    cout << "C 风格字符串: " << str1 << endl;
    // 2、C++ 风格字符串，包含头文件 #include<string>
    string str2 = "hello world 2";
    cout << "C++ 风格字符串: " << str2 << endl;


    cout << endl << "---------------------- 布尔类型 ---------------------------" << endl;
    // 0 值代表 假 ，非0值都代表 真
    bool flag = true;
    cout << "flag = " << flag << endl;
    flag = false;
    cout << "flag = " << flag << endl;

    system("pause");
    return 0;
}