// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once

class CMainDlg : public SHostWnd
{
public:
	CMainDlg();
	~CMainDlg();

	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);
	//托盘通知消息处理函数
	//LRESULT OnIconNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL/* bHandled*/);
	//演示如何响应菜单事件
	void OnCommand(UINT uNotifyCode, int nID, HWND wndCtl);
	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	
	void OnTabPageRadioSwitch(int nID);
	void OnTabCardRadioSwitch(int nID);

	void OnCardManagerInit();
	void OnMakeSetCard();
	void OnMakeUserCard();
	void OnUserCardRechage();

protected:
	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)
		EVENT_NAME_COMMAND(R.name.btn_card_set_init, OnCardManagerInit)
		EVENT_NAME_COMMAND(R.name.btn_card_set_make, OnMakeSetCard)
		EVENT_NAME_COMMAND(R.name.btn_card_user_make, OnMakeUserCard)
		EVENT_NAME_COMMAND(R.name.btn_card_user_recharge, OnUserCardRechage)
		EVENT_ID_COMMAND_RANGE(10000, 10003, OnTabPageRadioSwitch)    //10000-10003是dlg_main.xml中定义的radio2的ID
		EVENT_ID_COMMAND_RANGE(20000, 20009, OnTabCardRadioSwitch)
	EVENT_MAP_END()
		
	//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
	//托盘消息处理
		//MESSAGE_HANDLER(WM_ICONNOTIFY, OnIconNotify)
		MSG_WM_COMMAND(OnCommand)
		CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:
	BOOL			m_bLayoutInited;	
};
