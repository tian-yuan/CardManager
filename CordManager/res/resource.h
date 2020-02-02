//stamp:0b02dedbdac652b7
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				PAGE_CARD_MANAGER = _T("LAYOUT:PAGE_CARD_MANAGER");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * PAGE_CARD_MANAGER;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _IMG{
			public:
			_IMG(){
				traymenu_icons = _T("IMG:traymenu_icons");
				ID_CAPTION_TAB_CARD_MANAGER = _T("IMG:ID_CAPTION_TAB_CARD_MANAGER");
				ID_PNG_BG = _T("IMG:ID_PNG_BG");
				ID_SYS_BTN_CLOSE = _T("IMG:ID_SYS_BTN_CLOSE");
				ID_SYS_BTN_MAX = _T("IMG:ID_SYS_BTN_MAX");
				ID_SYS_BTN_RESTORE = _T("IMG:ID_SYS_BTN_RESTORE");
				ID_SYS_BTN_MIN = _T("IMG:ID_SYS_BTN_MIN");
				ID_MENU_BTN_MSG = _T("IMG:ID_MENU_BTN_MSG");
				ID_MENU_BTN_SET = _T("IMG:ID_MENU_BTN_SET");
				ID_LIST_HEADER_BKG = _T("IMG:ID_LIST_HEADER_BKG");
				ID_LIST_HEADER_ARROW = _T("IMG:ID_LIST_HEADER_ARROW");
				ID_LIST_SELECT_RANGE = _T("IMG:ID_LIST_SELECT_RANGE");
				ID_LIST_ITEM_BKG = _T("IMG:ID_LIST_ITEM_BKG");
				ID_CHECK_BOX = _T("IMG:ID_CHECK_BOX");
				ID_LIST_DOWNLOAD = _T("IMG:ID_LIST_DOWNLOAD");
				ID_LIST_SHARE = _T("IMG:ID_LIST_SHARE");
				ID_LIST_MORE = _T("IMG:ID_LIST_MORE");
				ID_TBAR_VIP = _T("IMG:ID_TBAR_VIP");
				ID_CAPTION_BANNER = _T("IMG:ID_CAPTION_BANNER");
				ID_CAPTION_PROG_FRG = _T("IMG:ID_CAPTION_PROG_FRG");
				ID_CAPTION_PROG_BKG = _T("IMG:ID_CAPTION_PROG_BKG");
				ID_CAPTION_HEAD = _T("IMG:ID_CAPTION_HEAD");
				ID_CAPTION_TAB_BKG = _T("IMG:ID_CAPTION_TAB_BKG");
				ID_CAPTION_TAB_DISK = _T("IMG:ID_CAPTION_TAB_DISK");
				ID_CAPTION_TAB_SHARE = _T("IMG:ID_CAPTION_TAB_SHARE");
				ID_CAPTION_TAB_SAFE = _T("IMG:ID_CAPTION_TAB_SAFE");
				ID_CAPTION_TAB_BOX = _T("IMG:ID_CAPTION_TAB_BOX");
				ID_STATUS_BAR_BKG = _T("IMG:ID_STATUS_BAR_BKG");
				ID_STATUS_BAR_RB = _T("IMG:ID_STATUS_BAR_RB");
				ID_STATUS_BAR_TOOL = _T("IMG:ID_STATUS_BAR_TOOL");
				ID_STATUS_BAR_BACKUP = _T("IMG:ID_STATUS_BAR_BACKUP");
				ID_STATUS_BAR_LOCK = _T("IMG:ID_STATUS_BAR_LOCK");
			}
			const TCHAR * traymenu_icons;
			const TCHAR * ID_CAPTION_TAB_CARD_MANAGER;
			const TCHAR * ID_PNG_BG;
			const TCHAR * ID_SYS_BTN_CLOSE;
			const TCHAR * ID_SYS_BTN_MAX;
			const TCHAR * ID_SYS_BTN_RESTORE;
			const TCHAR * ID_SYS_BTN_MIN;
			const TCHAR * ID_MENU_BTN_MSG;
			const TCHAR * ID_MENU_BTN_SET;
			const TCHAR * ID_LIST_HEADER_BKG;
			const TCHAR * ID_LIST_HEADER_ARROW;
			const TCHAR * ID_LIST_SELECT_RANGE;
			const TCHAR * ID_LIST_ITEM_BKG;
			const TCHAR * ID_CHECK_BOX;
			const TCHAR * ID_LIST_DOWNLOAD;
			const TCHAR * ID_LIST_SHARE;
			const TCHAR * ID_LIST_MORE;
			const TCHAR * ID_TBAR_VIP;
			const TCHAR * ID_CAPTION_BANNER;
			const TCHAR * ID_CAPTION_PROG_FRG;
			const TCHAR * ID_CAPTION_PROG_BKG;
			const TCHAR * ID_CAPTION_HEAD;
			const TCHAR * ID_CAPTION_TAB_BKG;
			const TCHAR * ID_CAPTION_TAB_DISK;
			const TCHAR * ID_CAPTION_TAB_SHARE;
			const TCHAR * ID_CAPTION_TAB_SAFE;
			const TCHAR * ID_CAPTION_TAB_BOX;
			const TCHAR * ID_STATUS_BAR_BKG;
			const TCHAR * ID_STATUS_BAR_RB;
			const TCHAR * ID_STATUS_BAR_TOOL;
			const TCHAR * ID_STATUS_BAR_BACKUP;
			const TCHAR * ID_STATUS_BAR_LOCK;
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _CARDTYPE{
			public:
			_CARDTYPE(){
				ID_CARD_TYPE_BKG = _T("CARDTYPE:ID_CARD_TYPE_BKG");
				ID_CARD_TYPE_DOC = _T("CARDTYPE:ID_CARD_TYPE_DOC");
				ID_CARD_TYPE_ALL = _T("CARDTYPE:ID_CARD_TYPE_ALL");
				ID_CARD_TYPE_APP = _T("CARDTYPE:ID_CARD_TYPE_APP");
				ID_CARD_TYPE_IMG = _T("CARDTYPE:ID_CARD_TYPE_IMG");
				ID_CARD_TYPE_MUSIC = _T("CARDTYPE:ID_CARD_TYPE_MUSIC");
				ID_CARD_TYPE_OTHER = _T("CARDTYPE:ID_CARD_TYPE_OTHER");
				ID_CARD_TYPE_SEED = _T("CARDTYPE:ID_CARD_TYPE_SEED");
				ID_CARD_TYPE_SHARE = _T("CARDTYPE:ID_CARD_TYPE_SHARE");
				ID_CARD_TYPE_VIDEO = _T("CARDTYPE:ID_CARD_TYPE_VIDEO");
			}
			const TCHAR * ID_CARD_TYPE_BKG;
			const TCHAR * ID_CARD_TYPE_DOC;
			const TCHAR * ID_CARD_TYPE_ALL;
			const TCHAR * ID_CARD_TYPE_APP;
			const TCHAR * ID_CARD_TYPE_IMG;
			const TCHAR * ID_CARD_TYPE_MUSIC;
			const TCHAR * ID_CARD_TYPE_OTHER;
			const TCHAR * ID_CARD_TYPE_SEED;
			const TCHAR * ID_CARD_TYPE_SHARE;
			const TCHAR * ID_CARD_TYPE_VIDEO;
		}CARDTYPE;
		class _SMENU{
			public:
			_SMENU(){
				menu_tray = _T("SMENU:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENU;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_close",65536},
		{L"btn_max",65537},
		{L"btn_min",65539},
		{L"btn_restore",65538},
		{L"radioex_0",20000},
		{L"radioex_1",10000},
		{L"radioex_2",20002},
		{L"radioex_3",20003},
		{L"radioex_4",20004},
		{L"radioex_5",20005},
		{L"radioex_6",20006},
		{L"radioex_7",20007},
		{L"radioex_8",20008},
		{L"radioex_9",20008},
		{L"tab_card",65542},
		{L"tab_main",65540},
		{L"wnd_left_file_type",65541}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_max = namedXmlID[2].strName;
			btn_min = namedXmlID[3].strName;
			btn_restore = namedXmlID[4].strName;
			radioex_0 = namedXmlID[5].strName;
			radioex_1 = namedXmlID[6].strName;
			radioex_2 = namedXmlID[7].strName;
			radioex_3 = namedXmlID[8].strName;
			radioex_4 = namedXmlID[9].strName;
			radioex_5 = namedXmlID[10].strName;
			radioex_6 = namedXmlID[11].strName;
			radioex_7 = namedXmlID[12].strName;
			radioex_8 = namedXmlID[13].strName;
			radioex_9 = namedXmlID[14].strName;
			tab_card = namedXmlID[15].strName;
			tab_main = namedXmlID[16].strName;
			wnd_left_file_type = namedXmlID[17].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_close;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_restore;
		 const wchar_t * radioex_0;
		 const wchar_t * radioex_1;
		 const wchar_t * radioex_2;
		 const wchar_t * radioex_3;
		 const wchar_t * radioex_4;
		 const wchar_t * radioex_5;
		 const wchar_t * radioex_6;
		 const wchar_t * radioex_7;
		 const wchar_t * radioex_8;
		 const wchar_t * radioex_9;
		 const wchar_t * tab_card;
		 const wchar_t * tab_main;
		 const wchar_t * wnd_left_file_type;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_close	=	65536;
		const static int btn_max	=	65537;
		const static int btn_min	=	65539;
		const static int btn_restore	=	65538;
		const static int radioex_0	=	20000;
		const static int radioex_1	=	10000;
		const static int radioex_2	=	20002;
		const static int radioex_3	=	20003;
		const static int radioex_4	=	20004;
		const static int radioex_5	=	20005;
		const static int radioex_6	=	20006;
		const static int radioex_7	=	20007;
		const static int radioex_8	=	20008;
		const static int radioex_9	=	20008;
		const static int tab_card	=	65542;
		const static int tab_main	=	65540;
		const static int wnd_left_file_type	=	65541;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
