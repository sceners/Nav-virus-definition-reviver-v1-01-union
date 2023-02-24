// NAVReg.h : main header file for the NAVREG application
//

#if !defined(AFX_NAVREG_H__6EE125B0_AE2E_4661_BAA7_5BBAE5AB5EAB__INCLUDED_)
#define AFX_NAVREG_H__6EE125B0_AE2E_4661_BAA7_5BBAE5AB5EAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CNAVRegApp:
// See NAVReg.cpp for the implementation of this class
//

class CNAVRegApp : public CWinApp
{
public:
	CNAVRegApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNAVRegApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CNAVRegApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAVREG_H__6EE125B0_AE2E_4661_BAA7_5BBAE5AB5EAB__INCLUDED_)
