; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CNAVRegDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "NAVReg.h"

ClassCount=3
Class1=CNAVRegApp
Class2=CNAVRegDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_NAVREG_DIALOG

[CLS:CNAVRegApp]
Type=0
HeaderFile=NAVReg.h
ImplementationFile=NAVReg.cpp
Filter=N

[CLS:CNAVRegDlg]
Type=0
HeaderFile=NAVRegDlg.h
ImplementationFile=NAVRegDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=ID_REVIVE

[CLS:CAboutDlg]
Type=0
HeaderFile=NAVRegDlg.h
ImplementationFile=NAVRegDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_NAVREG_DIALOG]
Type=1
Class=CNAVRegDlg
ControlCount=6
Control1=ID_REVIVE,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_DATETIMEPICKER,SysDateTimePick32,1342242868
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308353

