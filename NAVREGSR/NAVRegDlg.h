// NAVRegDlg.h : header file
//

#if !defined(AFX_NAVREGDLG_H__3E5C77DB_CFFF_49CC_865A_4991A6F0A88D__INCLUDED_)
#define AFX_NAVREGDLG_H__3E5C77DB_CFFF_49CC_865A_4991A6F0A88D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CNAVRegDlg dialog

class CNAVRegDlg : public CDialog
{
// Construction
public:
	CNAVRegDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CNAVRegDlg)
	enum { IDD = IDD_NAVREG_DIALOG };
	CDateTimeCtrl	m_Date;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNAVRegDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CNAVRegDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnRevive();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAVREGDLG_H__3E5C77DB_CFFF_49CC_865A_4991A6F0A88D__INCLUDED_)
