/***************************************************************
 *		message.h
 *			Header for Rex addin program.
 ***************************************************************/
#ifndef _MSG_
#define _MSG_

#define MSG_DS_PAINT			0x01
#define MSG_DS_CLOSE			0x02
#define MSG_DS_COMMAND			0x03
#define MSG_DS_SHORTCUT			0x04
#define MSG_DS_KEY_DOWN			0x10
#define MSG_DS_KEY_UP			0x11
#define MSG_DS_CHAR			0x12
#define	MSG_DS_TOUCH_DOWN		0x20
#define MSG_DS_TOUCH_UP			0x21
#define MSG_DS_TOUCH_MOVE		0x22
#define MSG_DS_SCROLLUP_REPEAT		0x23
#define MSG_DS_SCROLLDOWN_REPEAT 	0x24
#define MSG_DS_PAGEUP_REPEAT		0x25
#define MSG_DS_PAGEDOWN_REPEAT		0x26
#define MSG_DS_SCROLLUP_UP		0x27
#define MSG_DS_SCROLLDOWN_UP		0x28
#define MSG_DS_PAGEUP_UP		0x29
#define	MSG_DS_PAGEDOWN_UP		0x2a
#define MSG_DS_SCROLLUP			0x30
#define MSG_DS_SCROLLDOWN		0x31
#define MSG_DS_RIGHTSCROLL		0x32
#define MSG_DS_LEFTSCROLL		0x33
#define MSG_DS_PAGEUP			0x34
#define MSG_DS_PAGEDOWN			0x35
#define MSG_DS_SCROLL_THUMB		0x36
#define MSG_DS_SCROLL_THUMB_DOWN 	0x37
#define MSG_DS_TIMER1			0x40
#define MSG_DS_ALARM			0x41
#define MSG_DS_POWERON			0x42
#define MSG_DS_COMMAND_DOWN		0x43
#define MSG_DS_COMMAND_REPEAT		0x44
#define MSG_DS_COMMAND_UP		0x45
#define MSG_DS_POWEROFF			0x46
#define MSG_DS_AUTOPOWEROFF		0x47
#define MSG_DS_BATTERY_DETECT		0x48

#define MSG_BASE			0xB000

#define	ID_COMPONENT_EDIT		0x40
#define	ID_COMPONENT_SETTING		0x41
#define ID_COMPONENT_SEARCH		0x42
#define	ID_COMPONENT_CLOSE		0x43
#define ID_COMPONENT_TODAY		0x44
#define	ID_COMPONENT_DAY		0x45
#define	ID_COMPONENT_MONTH		0x46
#define	ID_COMPONENT_WEEK		0x47
#define ID_COMPONENT_CATEGORY		0x48
#define ID_COMPONENT_LIST		0x49
#define ID_COMPONENT_PASTE		0x4a
#define ID_COMPONENT_RETURN		0x4b
#define ID_COMPONENT_SAINYU		0x4c
#define ID_COMPONENT_SYOUSAI		0x4d
#define ID_COMPONENT_END		0x4e
#define ID_COMPONENT_EIWA		0x4f
#define ID_COMPONENT_WAEI		0x50
#define ID_COMPONENT_KOKUGO		0x51
#define	ID_COMPONENT_COMPLETE		0x52
#define	ID_COMPONENT_CANCEL		0x53
#define	ID_COMPONENT_ARROWUP		0x54
#define	ID_COMPONENT_ARROWDOWN		0x55
#define	ID_COMPONENT_ARROWRIGHT		0x56
#define	ID_COMPONENT_ARROWLEFT		0x57
#define	ID_COMPONENT_ARROWDUP		0x58
#define	ID_COMPONENT_ARROWDDOWN		0x59
#define	ID_COMPONENT_CONTINUE		0x5a
#define	ID_COMPONENT_AM			0x5b
#define	ID_COMPONENT_PM			0x5c
#define	ID_COMPONENT_ALARM		0x5d
#define ID_COMPONENT_KEY		0x5f
#define ID_COMPONENT_GRAY32		0x60
#define ID_COMPONENT_GRAY40		0x61
#define ID_COMPONENT_GRAY45		0x62
#define ID_COMPONENT_EDIT_START		0x63
#define ID_COMPONENT_GOTAB		0x64
#define ID_COMPONENT_ARROWUP_WIDE	0x65
#define ID_COMPONENT_ARROWDOWN_WIDE 	0x66
#define ID_COMPONENT_CLOSEP		0x67

#define ID_SCROLLUP			0xF0
#define ID_SCROLLDOWN			0xF1
#define ID_PAGEUP			0xF2
#define ID_PAGEDOWN			0xF3
#define ID_SCROLL_THUMB_DOWN		0xF4


#define KEY_TOP_A		0x0001
#define KEY_BACK_A		0x0002
#define KEY_ENTER_A		0x0004
#define KEY_UP_A		0x0008
#define KEY_DOWN_A		0x0010

#define KEY_TOP_B		KEY_TOP_A  +0x0100
#define KEY_BACK_B		KEY_BACK_A +0x0100
#define KEY_ENTER_B		KEY_ENTER_A+0x0100
#define KEY_UP_B		KEY_UP_A   +0x0100
#define KEY_DOWN_B		KEY_DOWN_A +0x0100

#define KEY_TOP_C		KEY_TOP_A  +0x0200
#define KEY_BACK_C		KEY_BACK_A +0x0200
#define KEY_ENTER_C		KEY_ENTER_A+0x0200
#define KEY_UP_C		KEY_UP_A   +0x0200
#define KEY_DOWN_C		KEY_DOWN_A +0x0200

#define KEY_TOP_D		KEY_TOP_A  +0x0400
#define KEY_BACK_D		KEY_BACK_A +0x0400
#define KEY_ENTER_D		KEY_ENTER_A+0x0400
#define KEY_UP_D		KEY_UP_A   +0x0400
#define KEY_DOWN_D		KEY_DOWN_A +0x0400

#define KEY_TOP_E		KEY_TOP_A  +0x0800
#define KEY_BACK_E		KEY_BACK_A +0x0800
#define KEY_ENTER_E		KEY_ENTER_A+0x0800
#define KEY_UP_E		KEY_UP_A   +0x0800
#define KEY_DOWN_E		KEY_DOWN_A +0x0800


#define TP_MODE_A		0x00
#define TP_MODE_B		0x01
#define TP_MODE_C		0x02
#define TP_MODE_D		0x04
#define TP_MODE_E		0x08

#endif /* _MSG_ */
