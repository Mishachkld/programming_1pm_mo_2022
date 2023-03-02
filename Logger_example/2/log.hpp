#pragma once
#include <fstream>
#include <iostream>

enum class LogLevel
{
	DEBUG,
	RELEASE
};

class Log
{
private:
	static std::ofstream m_out; // RAII
	static LogLevel m_logLevel;
public:
	Log()
	{
		std::cout << "Constr" << std::endl;
	}
	static void SetLogLevel(LogLevel logLevel)
	{
		m_logLevel = logLevel;
	}
	static void SetLogPath(const std::string& path)
	{
		m_out.open(path);
	}
	// ����������� �����
	static void Write(const std::string& msg)
	{
		// �����
		// ������������ �������
		if(m_logLevel == LogLevel::DEBUG)
			std::cerr << msg << std::endl;
		m_out << msg << std::endl;
		m_out.flush();
		//m_out.flush(); // �������� � ���� ��� ��� ���� � ������
	}
	static void Info(const std::string& msg)
	{
		// �����
		// ������������ �������
		if (m_logLevel == LogLevel::DEBUG)
			std::cerr << msg << std::endl;
		m_out << msg << std::endl;
		m_out.flush();
		//m_out.flush(); // �������� � ���� ��� ��� ���� � ������
	}
	~Log()
	{
		std::cout << "Destr" << std::endl;
	}
};