// vpselfgit1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cvpselfgit1App:
// �йش����ʵ�֣������ vpselfgit1.cpp
//

class Cvpselfgit1App : public CWinApp
{
public:
	Cvpselfgit1App();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cvpselfgit1App theApp;