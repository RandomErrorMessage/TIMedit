// generated by Fast Light User Interface Designer (fluid) version 1.0308

#ifndef mainui_h
#define mainui_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
extern void cb_MainWindow(Fl_Double_Window*, void*);
#include <FL/Fl_Menu_Bar.H>
extern void cb_NewProject(Fl_Menu_*, void*);
extern void cb_OpenProject(Fl_Menu_*, void*);
extern void cb_SaveProject(Fl_Menu_*, long);
extern void cb_ImportImage(Fl_Menu_*, void*);
extern void cb_Exit(Fl_Menu_*, void*);
extern void cb_EditClut(Fl_Menu_*, void*);
extern void cb_AddGroup(Fl_Menu_*, void*);
extern void cb_RemoveGroup(Fl_Menu_*, void*);
extern void cb_MoveTimToGroup(Fl_Menu_*, void*);
extern void cb_ReimportTim(Fl_Menu_*, long);
extern void cb_CheckOverlap(Fl_Menu_*, void*);
extern void cb_SetBufferRes(Fl_Menu_*, long);
extern void cb_SetBufferOrder(Fl_Menu_*, void*);
extern void cb_About(Fl_Menu_*, void*);
#include <FL/Fl_Scroll.H>
#include "Fl_VramArea.h"
extern void cb_VramArea(Fl_VramArea*, void*);
#include <FL/Fl_Group.H>
#include <FL/Fl_Check_Button.H>
extern void cb_SnapOption(Fl_Check_Button*, void*);
#include <FL/Fl_Spinner.H>
extern void cb_ImagePosition(Fl_Spinner*, void*);
extern void cb_ClutPosition(Fl_Spinner*, void*);
#include <FL/Fl_Round_Button.H>
extern void cb_ImgBlendMode(Fl_Round_Button*, long);
#include <FL/Fl_Button.H>
extern void addItem_cb(Fl_Button*, void*);
extern void delItem_cb(Fl_Button*, void*);
extern void cb_deprecatePaths(Fl_Check_Button*, void*);
#include "Fl_TimList.h"
extern void cb_TimList(Fl_TimList*, void*);
extern void cb_ZoomValue(Fl_Spinner*, void*);
extern void cb_OverlapToggle(Fl_Check_Button*, void*);
extern void cb_ToggleSemiTrans(Fl_Check_Button*, void*);
#include <FL/Fl_Choice.H>
extern void cb_GroupChoice(Fl_Choice*, void*);

class MainUI : public Fl_Double_Window {
  void _MainUI();
public:
  MainUI(int X, int Y, int W, int H, const char *L = 0);
  MainUI(int W, int H, const char *L = 0);
  MainUI();
  static Fl_Menu_Item menu_[];
  static Fl_Menu_Item *buffer_res[21];
  static Fl_Menu_Item *bufferOrderToggle;
  Fl_Scroll *fbArea;
  Fl_VramArea *vramArea;
  Fl_Check_Button *snapImages;
  Fl_Check_Button *snapCluts;
  Fl_Check_Button *snapGrid;
  Fl_Group *timParams;
  Fl_Spinner *imageXpos;
  Fl_Spinner *imageYpos;
  Fl_Group *clutParams;
  Fl_Spinner *clutXpos;
  Fl_Spinner *clutYpos;
  Fl_Group *blendParams;
  Fl_Round_Button *blendMode[4];
  Fl_Check_Button *deprecatePaths;
  Fl_TimList *list;
  Fl_Check_Button *overlapToggle;
  Fl_Check_Button *semiTransToggle;
  Fl_Choice *groupList;
};
#endif
