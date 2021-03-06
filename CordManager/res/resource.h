//stamp:0b07e3f2dc75b196
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
		{L"btn_card_set_init",65545},
		{L"btn_card_set_make",65559},
		{L"btn_card_user_make",65567},
		{L"btn_card_user_recharge",65572},
		{L"btn_close",65536},
		{L"btn_max",65537},
		{L"btn_min",65539},
		{L"btn_restore",65538},
		{L"card_set_alarm_floor",65548},
		{L"card_set_const",65547},
		{L"card_set_control_id",65551},
		{L"card_set_define_region",65555},
		{L"card_set_dtu_id",65552},
		{L"card_set_elec_price",65549},
		{L"card_set_flow_const",65557},
		{L"card_set_flow_floor",65556},
		{L"card_set_flow_type",65558},
		{L"card_set_ip",65554},
		{L"card_set_port",65553},
		{L"card_set_region",65546},
		{L"card_set_water_price",65550},
		{L"card_user_card_flag",65571},
		{L"card_user_card_id",65565},
		{L"card_user_id",65562},
		{L"card_user_name",65560},
		{L"card_user_post_count",65563},
		{L"card_user_preset_money",65564},
		{L"card_user_preset_phone_number",65566},
		{L"card_user_recharge_count",65570},
		{L"card_user_recharge_money_total",65569},
		{L"card_user_region",65561},
		{L"card_user_use_money_total",65568},
		{L"custom_secret",65544},
		{L"platform_addr",65543},
		{L"radioex_0",20000},
		{L"radioex_1",20001},
		{L"radioex_2",20002},
		{L"radioex_3",20003},
		{L"radioex_4",20004},
		{L"radioex_5",20005},
		{L"radioex_6",20006},
		{L"radioex_7",20007},
		{L"radioex_8",20008},
		{L"radioex_9",20009},
		{L"radioex_main_1",10000},
		{L"radioex_main_2",10001},
		{L"tab_card",65542},
		{L"tab_main",65540},
		{L"wnd_left_file_type",65541}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_card_set_init = namedXmlID[1].strName;
			btn_card_set_make = namedXmlID[2].strName;
			btn_card_user_make = namedXmlID[3].strName;
			btn_card_user_recharge = namedXmlID[4].strName;
			btn_close = namedXmlID[5].strName;
			btn_max = namedXmlID[6].strName;
			btn_min = namedXmlID[7].strName;
			btn_restore = namedXmlID[8].strName;
			card_set_alarm_floor = namedXmlID[9].strName;
			card_set_const = namedXmlID[10].strName;
			card_set_control_id = namedXmlID[11].strName;
			card_set_define_region = namedXmlID[12].strName;
			card_set_dtu_id = namedXmlID[13].strName;
			card_set_elec_price = namedXmlID[14].strName;
			card_set_flow_const = namedXmlID[15].strName;
			card_set_flow_floor = namedXmlID[16].strName;
			card_set_flow_type = namedXmlID[17].strName;
			card_set_ip = namedXmlID[18].strName;
			card_set_port = namedXmlID[19].strName;
			card_set_region = namedXmlID[20].strName;
			card_set_water_price = namedXmlID[21].strName;
			card_user_card_flag = namedXmlID[22].strName;
			card_user_card_id = namedXmlID[23].strName;
			card_user_id = namedXmlID[24].strName;
			card_user_name = namedXmlID[25].strName;
			card_user_post_count = namedXmlID[26].strName;
			card_user_preset_money = namedXmlID[27].strName;
			card_user_preset_phone_number = namedXmlID[28].strName;
			card_user_recharge_count = namedXmlID[29].strName;
			card_user_recharge_money_total = namedXmlID[30].strName;
			card_user_region = namedXmlID[31].strName;
			card_user_use_money_total = namedXmlID[32].strName;
			custom_secret = namedXmlID[33].strName;
			platform_addr = namedXmlID[34].strName;
			radioex_0 = namedXmlID[35].strName;
			radioex_1 = namedXmlID[36].strName;
			radioex_2 = namedXmlID[37].strName;
			radioex_3 = namedXmlID[38].strName;
			radioex_4 = namedXmlID[39].strName;
			radioex_5 = namedXmlID[40].strName;
			radioex_6 = namedXmlID[41].strName;
			radioex_7 = namedXmlID[42].strName;
			radioex_8 = namedXmlID[43].strName;
			radioex_9 = namedXmlID[44].strName;
			radioex_main_1 = namedXmlID[45].strName;
			radioex_main_2 = namedXmlID[46].strName;
			tab_card = namedXmlID[47].strName;
			tab_main = namedXmlID[48].strName;
			wnd_left_file_type = namedXmlID[49].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_card_set_init;
		 const wchar_t * btn_card_set_make;
		 const wchar_t * btn_card_user_make;
		 const wchar_t * btn_card_user_recharge;
		 const wchar_t * btn_close;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_restore;
		 const wchar_t * card_set_alarm_floor;
		 const wchar_t * card_set_const;
		 const wchar_t * card_set_control_id;
		 const wchar_t * card_set_define_region;
		 const wchar_t * card_set_dtu_id;
		 const wchar_t * card_set_elec_price;
		 const wchar_t * card_set_flow_const;
		 const wchar_t * card_set_flow_floor;
		 const wchar_t * card_set_flow_type;
		 const wchar_t * card_set_ip;
		 const wchar_t * card_set_port;
		 const wchar_t * card_set_region;
		 const wchar_t * card_set_water_price;
		 const wchar_t * card_user_card_flag;
		 const wchar_t * card_user_card_id;
		 const wchar_t * card_user_id;
		 const wchar_t * card_user_name;
		 const wchar_t * card_user_post_count;
		 const wchar_t * card_user_preset_money;
		 const wchar_t * card_user_preset_phone_number;
		 const wchar_t * card_user_recharge_count;
		 const wchar_t * card_user_recharge_money_total;
		 const wchar_t * card_user_region;
		 const wchar_t * card_user_use_money_total;
		 const wchar_t * custom_secret;
		 const wchar_t * platform_addr;
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
		 const wchar_t * radioex_main_1;
		 const wchar_t * radioex_main_2;
		 const wchar_t * tab_card;
		 const wchar_t * tab_main;
		 const wchar_t * wnd_left_file_type;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_card_set_init	=	65545;
		const static int btn_card_set_make	=	65559;
		const static int btn_card_user_make	=	65567;
		const static int btn_card_user_recharge	=	65572;
		const static int btn_close	=	65536;
		const static int btn_max	=	65537;
		const static int btn_min	=	65539;
		const static int btn_restore	=	65538;
		const static int card_set_alarm_floor	=	65548;
		const static int card_set_const	=	65547;
		const static int card_set_control_id	=	65551;
		const static int card_set_define_region	=	65555;
		const static int card_set_dtu_id	=	65552;
		const static int card_set_elec_price	=	65549;
		const static int card_set_flow_const	=	65557;
		const static int card_set_flow_floor	=	65556;
		const static int card_set_flow_type	=	65558;
		const static int card_set_ip	=	65554;
		const static int card_set_port	=	65553;
		const static int card_set_region	=	65546;
		const static int card_set_water_price	=	65550;
		const static int card_user_card_flag	=	65571;
		const static int card_user_card_id	=	65565;
		const static int card_user_id	=	65562;
		const static int card_user_name	=	65560;
		const static int card_user_post_count	=	65563;
		const static int card_user_preset_money	=	65564;
		const static int card_user_preset_phone_number	=	65566;
		const static int card_user_recharge_count	=	65570;
		const static int card_user_recharge_money_total	=	65569;
		const static int card_user_region	=	65561;
		const static int card_user_use_money_total	=	65568;
		const static int custom_secret	=	65544;
		const static int platform_addr	=	65543;
		const static int radioex_0	=	20000;
		const static int radioex_1	=	20001;
		const static int radioex_2	=	20002;
		const static int radioex_3	=	20003;
		const static int radioex_4	=	20004;
		const static int radioex_5	=	20005;
		const static int radioex_6	=	20006;
		const static int radioex_7	=	20007;
		const static int radioex_8	=	20008;
		const static int radioex_9	=	20009;
		const static int radioex_main_1	=	10000;
		const static int radioex_main_2	=	10001;
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
