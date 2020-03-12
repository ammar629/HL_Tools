#ifndef HLMV_UI_WXHLMV_H
#define HLMV_UI_WXHLMV_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

enum wxIdentifier
{
	wxID_SHARED_LOWEST = wxID_HIGHEST + 1,

	//Messages window
	wxID_SHARED_MESSAGES_CLEAR,
	wxID_SHARED_MESSAGES_COMMAND,

	//Game configs panel
	wxID_SHARED_GAMECONFIGS_CONFIG_CHANGED,
	wxID_SHARED_GAMECONFIGS_EDIT,

	//Edit game configs dialog
	wxID_SHARED_EDITGAMECONFIGS_ADD,
	wxID_SHARED_EDITGAMECONFIGS_EDIT,
	wxID_SHARED_EDITGAMECONFIGS_REMOVE,

	//Process dialog
	wxID_PROCESSDLG_INPUT,
	wxID_PROCESSDLG_SENDINPUT,
	wxID_PROCESSDLG_TERMINATE,
	wxID_PROCESSDLG_CLOSE,

	//Main window
	//File menu
	wxID_MAINWND_LOADMODEL,
	wxID_MAINWND_LOADBACKGROUND,
	wxID_MAINWND_LOADGROUND,
	wxID_MAINWND_UNLOADGROUND,
	wxID_MAINWND_SAVEMODEL,

	//View menu
	wxID_MAINWND_CENTERVIEW,
	wxID_MAINWND_SAVEVIEW,
	wxID_MAINWND_RESTOREVIEW,
	wxID_MAINWND_TAKESCREENSHOT,
	wxID_MAINWND_DUMPMODELINFO,

	//Tools menu
	wxID_MAINWND_TOGGLEMESSAGES,
	wxID_MAINWND_COMPILEMODEL,
	wxID_MAINWND_DECOMPILEMODEL,
	wxID_MAINWND_EDITQC,
	wxID_MAINWND_OPTIONS,

	//Main panel
	wxID_MAIN_PAGECHANGED,
	wxID_MAIN_VIEWORIGINCHANGED,
	wxID_MAIN_RESETLIGHTVECTOR,

	//Model Display panel
	wxID_MDLDISP_RENDERMODE,
	wxID_MDLDISP_OPACITY,
	wxID_MDLDISP_CHECKBOX,
	wxID_MDLDISP_MIRROR,
	wxID_MDLDISP_FOVCHANGED,
	wxID_MDLDISP_FPFOVCHANGED,

	//Global flags panel
	wxID_GLOBALFLAGS_CHECKBOX,

	//Body Parts panel
	wxID_BODY_BODYPARTS,
	wxID_BODY_SUBMODELS,
	wxID_BODY_SKIN,
	wxID_BODY_CONTROLLER,
	wxID_BODY_CONTROLLER_SLIDER,

	//Bones panel,
	wxID_BONES_BONES,
	wxID_BONES_SHOWBONECONTROLLERINFO,
	wxID_BONES_BONECONTROLLERS,
	wxID_BONES_SHOWBONEINFO,
	wxID_BONES_SHOWTYPESCHEATSHEET,

	//Attachments panel
	wxID_ATTACH_ATTACHMENT,

	//Sequences panel
	wxID_SEQUENCE_SEQCHANGED,
	wxID_SEQUENCE_TOGGLEPLAY,
	wxID_SEQUENCE_PREVFRAME,
	wxID_SEQUENCE_NEXTFRAME,
	wxID_SEQUENCE_FRAME,
	WXID_SEQUENCE_ANIMSPEED,
	wxID_SEQUENCE_EVENT,
	wxID_SEQUENCE_EDITEVENTS,
	wxID_SEQUENCE_PLAYSOUND,
	wxID_SEQUENCE_PITCHFRAMERATE,

	//Textures panel
	wxID_TEX_CHANGED,
	wxID_TEX_SCALE,
	wxID_TEX_CHECKBOX,
	wxID_TEX_MESH,
	wxID_TEX_IMPORTTEXTURE,
	wxID_TEX_IMPORTALLTEXTURES,
	wxID_TEX_EXPORTTEXTURE,
	wxID_TEX_EXPORTALLTEXTURES,
	wxID_TEX_EXPORTUVMAP,

	//Fullscreen panel
	wxID_FULLSCREEN_GO,

	//Options
	//General panel
	wxID_OPTIONS_GENERAL_DEFAULT_GROUND_COLOR,
	wxID_OPTIONS_GENERAL_DEFAULT_BACKGROUND_COLOR,
	wxID_OPTIONS_GENERAL_DEFAULT_CROSSHAIR_COLOR,
	wxID_OPTIONS_GENERAL_DEFAULT_LIGHT_COLOR,
	wxID_OPTIONS_GENERAL_DEFAULT_WIREFRAME_COLOR,
	wxID_OPTIONS_GENERAL_DEFAULT_FPS,
	wxID_OPTIONS_GENERAL_DEFAULT_FLOOR_LENGTH,

	wxID_CUSTOM_HIGHEST
};

#define HLMV_TITLE "Half-Life Model Viewer"
#define HLMV_SETTINGS_FILE "HLMVSettings.txt"
#define HLMV_DUMP_MODEL_INFO_FILE "midump.txt"

#endif //HLMV_UI_WXHLMV_H