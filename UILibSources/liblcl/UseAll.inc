  Interfaces, // this includes the LCL widgetset,
{$IFDEF WINDOWS}
  Windows,
  MultiMon,
  ShellAPI,
  ShlObj,
  ComObj,
  ActiveX,
  Win32Int,
  win32proc,
  CommCtrl,
  LazUTF8,
  InterfaceBase,
{$ELSE}
  LCLType,
  Types,
{$ENDIF}
  typinfo,
  LCLProc,
  LCLIntf,
  LCLStrConsts,
  LMessages,
  DateUtils,
  IniFiles,
  Registry,
  Forms,
  StdCtrls,
  Dialogs,
  ExtCtrls,
  Graphics,
  Controls,
  Buttons,
  ComCtrls,
  ToolWin,
  ImgList,
  ExtDlgs,
  ActnList,
  ColorBox,
  PrintersDlgs,
  DateTimePicker,
  Calendar,
  Menus,
  Clipbrd,
  CheckLst,
  MaskEdit,
  Grids,
  ValEdit,
  Spin,
  Printers,
  ComboEx,
{$I UserDefineComponentUses.inc}
  uLinkLabel,
  uEventCallback,
  ImageButton,
  Gauges,
  uMiniWebview,
  xButton,
  uGoForm,
  uRichEdit