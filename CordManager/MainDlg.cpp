// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	
#include "MUR500USB.h"
	
CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
	m_bLayoutInited = FALSE;
}

CMainDlg::~CMainDlg()
{
}

int CMainDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	m_bLayoutInited = TRUE;
	SShellNotifyIcon *notify = FindChildByID2<SShellNotifyIcon>(110);
	notify->ShowNotify(L"Hello SOUI",L"这可能是一个提示");
	/// init mur
	/*
	if (TX2_Init() != 0)
	{
		SMessageBox(NULL, SStringT().Format(L"TX 初始化失败！"), L"初始化", MB_OK);
	}
	*/
	return 0;
}
//TODO:消息映射
void CMainDlg::OnClose()
{
	CSimpleWnd::DestroyWindow();
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);
	if (!m_bLayoutInited) return;
	
	SWindow *pBtnMax = FindChildByName(L"btn_max");
	SWindow *pBtnRestore = FindChildByName(L"btn_restore");
	if(!pBtnMax || !pBtnRestore) return;
	
	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}


//演示如何响应菜单事件
void CMainDlg::OnCommand(UINT uNotifyCode, int nID, HWND wndCtl)
{
	if (uNotifyCode == 0)
	{
		switch (nID)
		{
		case 6:
			PostMessage(WM_CLOSE);
			break;
		default:
			break;
		}
	}
}

void CMainDlg::OnTabPageRadioSwitch(int nID)
{
	if (m_bLayoutInited)
	{
		STabCtrl *pTab = FindChildByName2<STabCtrl>(L"tab_main");
		if (pTab)
		{
			pTab->SetCurSel(nID - 10000);
		}
	}
}

void CMainDlg::OnTabCardRadioSwitch(int nID)
{
	STabCtrl *pTab = FindChildByName2<STabCtrl>(L"tab_card");
	if (pTab) {
		pTab->SetCurSel(nID - 20000);
	}
}

void CMainDlg::OnCardManagerInit() {
	SEdit *pEdit = FindChildByName2<SEdit>(L"platform_addr");
	SStringT strAddr = pEdit->GetWindowText();
	SMessageBox(NULL, SStringT().Format(L"Card manager init, address : %s.", strAddr), L"Card type", MB_OK);
}

void CMainDlg::OnMakeSetCard() {
	SEdit *pEdit = FindChildByName2<SEdit>(L"card_set_region");
	SStringT strAddr = pEdit->GetWindowText();
	SMessageBox(NULL, SStringT().Format(L"制作设置卡, 区号 : %s.", strAddr), L"Card Make", MB_OK);
}

void CMainDlg::OnMakeUserCard() {
	SEdit *pEdit = FindChildByName2<SEdit>(L"card_user_name");
	SStringT strAddr = pEdit->GetWindowText();
	SMessageBox(NULL, SStringT().Format(L"制作用户卡, 用户名 : %s.", strAddr), L"Card Make", MB_OK);
}

void CMainDlg::OnUserCardRechage() {
	SEdit *pEdit = FindChildByName2<SEdit>(L"card_user_use_money_total");
	SStringT strAddr = pEdit->GetWindowText();
	SMessageBox(NULL, SStringT().Format(L"用户充值, 已用金额 : %s.", strAddr), L"Card Make", MB_OK);
}