//---------------------------------------------------------------------------
#ifndef FileZillaOptH
#define FileZillaOptH
//---------------------------------------------------------------------------
#define OPTION_LOGONTYPE 1
#define OPTION_PASV 2
#define OPTION_FWHOST 3
#define OPTION_FWPORT 4
#define OPTION_FWUSER 5
#define OPTION_FWPASS 6
#define OPTION_TIMEOUTLENGTH 7
#define OPTION_KEEPALIVE 8
#define OPTION_INTERVALLOW 9
#define OPTION_INTERVALHIGH 10
#ifndef MPEXT
#define OPTION_NUMRETRIES 11
#define OPTION_RETRYDELAY 12
#define OPTION_LASTSERVERHOST 13
#define OPTION_LASTSERVERPORT 14
#define OPTION_LASTSERVERUSER 15
#define OPTION_LASTSERVERPASS 16
#endif
#define OPTION_PROXYTYPE 17
#define OPTION_PROXYHOST 18
#define OPTION_PROXYPORT 19
#define OPTION_PROXYUSER 20
#define OPTION_PROXYPASS 21
#define OPTION_PROXYUSELOGON 22
#ifndef MPEXT
#define OPTION_LASTSERVERPATH 23
#define OPTION_LASTSERVERFWBYPASS 24
#define OPTION_LANGUAGE 25
#define OPTION_DEFAULTFOLDERTYPE 26
#define OPTION_DEFAULTFOLDER 27
#define OPTION_TRANSFERMODE 28
#define OPTION_ASCIIFILES 29
#define OPTION_SHOWNOLABEL 30
#define OPTION_SHOWNOTOOLBAR 31
#define OPTION_SHOWNOQUICKCONNECTBAR 32
#define OPTION_SHOWNOSTATUSBAR 33
#define OPTION_SHOWNOMESSAGELOG 34
#define OPTION_SHOWNOTREEVIEW 35
#define OPTION_SHOWNOQUEUE 36
#define OPTION_REMEMBERVIEWS 37
#define OPTION_LOCALLISTVIEWSTYLE 38
#define OPTION_HIDELOCALCOLUMNS 39
#define OPTION_REMOTELISTVIEWSTYLE 40
#define OPTION_HIDEREMOTECOLUMNS 41
#define OPTION_SHOWSITEMANAGERONSTARTUP 42
#endif
#ifndef MPEXT_NO_GSS
#define OPTION_USEGSS 43
#define OPTION_GSSSERVERS 44
#endif
#ifndef MPEXT
#define OPTION_LASTSERVERDONTREMEMBERPASS 45
#define OPTION_REMEMBERLASTWINDOWPOS 46
#define OPTION_LASTWINDOWPOS 47
#define OPTION_DEBUGTRACE 48
#endif
#define OPTION_DEBUGSHOWLISTING 49
#ifndef MPEXT
#define OPTION_DEBUGLOGTOFILE 50
#define OPTION_DEBUGLOGFILE 51
#endif
#define OPTION_LIMITPORTRANGE 52
#define OPTION_PORTRANGELOW 53
#define OPTION_PORTRANGEHIGH 54
#ifndef MPEXT
#define OPTION_REMEMBERLOCALVIEW 55
#define OPTION_REMEMBERREMOTEVIEW 56
#define OPTION_LASTSPLITTERSIZE 57
#endif
#ifndef MPEXT_NO_CACHE
#define OPTION_USECACHE 58
#define OPTION_MAXCACHETIME 59
#endif
#ifndef MPEXT
#define OPTION_LASTSERVERTYPE 60
#define OPTION_MINIMIZETOTRAY 61
#define OPTION_SHOWREMOTETREEVIEW 62
#define OPTION_REMEMBERLOCALCOLUMNWIDTHS 63
#define OPTION_REMEMBERREMOTECOLUMNWIDTHS 64
#define OPTION_LOCALCOLUMNWIDTHS 65
#define OPTION_REMOTECOLUMNWIDTHS 66
#define OPTION_LOCALFILESIZEFORMAT 67
#define OPTION_REMOTEFILESIZEFORMAT 68
#define OPTION_LASTSERVERNAME 69
#endif
#define OPTION_PRESERVEDOWNLOADFILETIME 70
#ifndef MPEXT
#define OPTION_RUNINSECUREMODE 71
#define OPTION_VIEWEDITDEFAULT 72
#define OPTION_VIEWEDITCUSTOM 73
#define OPTION_ALWAYSSHOWHIDDEN 74
#define OPTION_TRANSFERPRIMARYMAXSIZE 75
#define OPTION_ENABLEDEBUGMENU 76
#define OPTION_TRANSFERAPICOUNT 77
#define OPTION_USEREGISTRY 78
#define OPTION_TRANSFERUSEMULTIPLE 79
#endif
#ifndef MPEXT_NO_IDENT
#define OPTION_IDENT 80
#define OPTION_IDENTCONNECT 81
#define OPTION_IDENTSAMEIP 82
#define OPTION_IDENTSYSTEM 83
#define OPTION_IDENTUSER 84
#endif
#ifndef MPEXT
#define OPTION_FILEEXISTSACTION 85
#endif
#define OPTION_SPEEDLIMIT_DOWNLOAD_TYPE 86
#define OPTION_SPEEDLIMIT_UPLOAD_TYPE 87
#define OPTION_SPEEDLIMIT_DOWNLOAD_VALUE 88
#define OPTION_SPEEDLIMIT_UPLOAD_VALUE 89
#ifndef MPEXT_NO_SPEED_LIM_RULES
#define OPTION_SPEEDLIMIT_DOWNLOAD_RULES 90
#define OPTION_SPEEDLIMIT_UPLOAD_RULES 91
#endif
#ifndef MPEXT
#define OPTION_SORTSITEMANAGERFOLDERSFIRST 92
#define OPTION_SITEMANAGERNOEXPANDFOLDERS 93
#define OPTION_SHOWLOCALSTATUSBAR 94
#define OPTION_SHOWREMOTESTATUSBAR 95
#define OPTION_LOCALCOLUMNSORT 96
#define OPTION_REMOTECOLUMNSORT 97
#define OPTION_SSHUSECOMPRESSION 98
#define OPTION_SSHPROTOCOL  99
#endif
#define OPTION_TRANSFERIP 100
#ifndef MPEXT
#define OPTION_LOCAL_DOUBLECLICK_ACTION 101
#define OPTION_REMOTE_DOUBLECLICK_ACTION 102
#define OPTION_LOCALTREEVIEWLOCATION 103
#define OPTION_REMOTETREEVIEWLOCATION 104
#define OPTION_LASTSERVERTRANSFERMODE 105
#define OPTION_MESSAGELOG_USECUSTOMFONT 106
#define OPTION_MESSAGELOG_FONTNAME 107
#define OPTION_MESSAGELOG_FONTSIZE 108
#define OPTION_PANELAYOUT_SWITCHLAYOUT 109
#endif
#ifdef MPEXT_NO_ZLIB
#define OPTION_MODEZ_USE 110
#define OPTION_MODEZ_LEVEL 111
#endif
#define OPTION_TRANSFERIP6 112
#define OPTION_ENABLE_IPV6 113
#ifndef MPEXT
#define OPTION_LOGTIMESTAMPS 114
#endif
#define OPTION_VMSALLREVISIONS 115
#ifndef MPEXT
#define OPTION_LASTSERVERUTF8 116
#endif
#define OPTION_ANONPWD 117
#ifndef MPEXT
#define OPTION_LASTSERVERACCOUNT 118
#define OPTION_LASTSERVERTIMEZONE 119
#endif
// MPEXT
#define OPTION_MPEXT_SHOWHIDDEN 1000
#define OPTION_MPEXT_PRESERVEUPLOADFILETIME 1001
#define OPTION_MPEXT_SSLSESSIONREUSE 1002
#define OPTION_MPEXT_SNDBUF 1003
#define OPTION_MPEXT_MIN_TLS_VERSION 1004
#define OPTION_MPEXT_MAX_TLS_VERSION 1005
#define OPTION_MPEXT_TRANSFER_ACTIVE_IMMEDIATELY 1006
#define OPTION_MPEXT_REMOVE_BOM 1007
#define OPTION_MPEXT_LOG_SENSITIVE 1008
#define OPTION_MPEXT_HOST 1009
#define OPTION_MPEXT_NODELAY 1010
//---------------------------------------------------------------------------
#endif // FileZillaOptH
