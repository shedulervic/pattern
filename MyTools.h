#pragma once

#include <conio.h>
#include <windows.h>
#include <stdint.h>
#include <time.h> 

#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

namespace MyTools {
    // ������� ������ �� 0 �� 15
    enum ConsoleColor
    {
        CC_Black = 0,
        CC_Blue,
        CC_Green,
        CC_Cyan,
        CC_Red,
        CC_Magenta,
        CC_Brown,
        CC_LightGray,
        CC_DarkGray,
        CC_LightBlue,
        CC_LightGreen,
        CC_LightCyan,
        CC_LightRed,
        CC_LightMagenta,
        CC_Yellow,
        CC_White
    };
    class ScreenSingleton
    {
    public:

        static ScreenSingleton& getInstance()
        {
            static ScreenSingleton theInstance;
            return theInstance;
        }

        void ClrScr();
        void __fastcall GotoXY(double x, double y);
        uint16_t GetMaxX();
        uint16_t GetMaxY();
        void SetColor(ConsoleColor color);

    private:
        ScreenSingleton() { }
        ScreenSingleton(const ScreenSingleton& root) = delete;
        ScreenSingleton& operator=(const ScreenSingleton&) = delete;
    };
    // ��. 1/1

    class FileLoggerSingletone {
    public:
        static FileLoggerSingletone& getInstance()
        {
            static FileLoggerSingletone theInstance;
            return theInstance;
        }
        void __fastcall OpenLogFile(const std::string& FN);
        void CloseLogFile();
        void __fastcall WriteToLog(const std::string& str);
        void __fastcall WriteToLog(const std::string& str, int n);
        void __fastcall WriteToLog(const std::string& str, double d);
    private:
        FileLoggerSingletone() {}
        FileLoggerSingletone(const FileLoggerSingletone& root) = delete;
        FileLoggerSingletone& operator=(const FileLoggerSingletone&) = delete;
    };

    class IFileLogger {

    };

	//=============================================================================================
    
   /* void ClrScr();
	void __fastcall GotoXY(double x, double y);

	uint16_t GetMaxX();

	uint16_t GetMaxY();

    void SetColor(ConsoleColor color);*/

	//=============================================================================================

	/*void __fastcall OpenLogFile(const std::string& FN);

	void CloseLogFile();

	void __fastcall WriteToLog(const std::string& str);

	void __fastcall WriteToLog(const std::string& str, int n);

	void __fastcall WriteToLog(const std::string& str, double d);*/

	//=============================================================================================

};