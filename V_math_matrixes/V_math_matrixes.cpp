// V_math_matrixes.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"
#include "matrix.h"

using namespace V_math_matrixes;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
