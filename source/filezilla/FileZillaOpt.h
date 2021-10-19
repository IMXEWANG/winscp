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
#define OPTION_PROXYTYPE 17
#define OPTION_PROXYHOST 18
#define OPTION_PROXYPORT 19
#define OPTION_PROXYUSER 20
#define OPTION_PROXYPASS 21
#define OPTION_PROXYUSELOGON 22
#ifndef MPEXT_NO_GSS
#define OPTION_USEGSS 43
#define OPTION_GSSSERVERS 44
#endif
#define OPTION_DEBUGSHOWLISTING 49
#define OPTION_LIMITPORTRANGE 52
#define OPTION_PORTRANGELOW 53
#define OPTION_PORTRANGEHIGH 54
#define OPTION_PRESERVEDOWNLOADFILETIME 70
#define OPTION_SPEEDLIMIT_DOWNLOAD_TYPE 86
#define OPTION_SPEEDLIMIT_UPLOAD_TYPE 87
#define OPTION_SPEEDLIMIT_DOWNLOAD_VALUE 88
#define OPTION_SPEEDLIMIT_UPLOAD_VALUE 89
#define OPTION_TRANSFERIP 100
#ifdef MPEXT_NO_ZLIB
#define OPTION_MODEZ_USE 110
#define OPTION_MODEZ_LEVEL 111
#endif
#define OPTION_TRANSFERIP6 112
#define OPTION_ENABLE_IPV6 113
#define OPTION_VMSALLREVISIONS 115
#define OPTION_ANONPWD 117
#define OPTION_MPEXT_SHOWHIDDEN 1000
#define OPTION_MPEXT_PRESERVEUPLOADFILETIME 1001
#define OPTION_MPEXT_SSLSESSIONREUSE 1002
#define OPTION_MPEXT_SNDBUF 1003
#define OPTION_MPEXT_TRANSFER_ACTIVE_IMMEDIATELY 1006
#define OPTION_MPEXT_REMOVE_BOM 1007
#define OPTION_MPEXT_LOG_SENSITIVE 1008
#define OPTION_MPEXT_HOST 1009
#define OPTION_MPEXT_NODELAY 1010
#define OPTION_MPEXT_NOLIST 1011
#define OPTION_MPEXT_COMPLETE_TLS_SHUTDOWN 1012
#define OPTION_MPEXT_CERT_STORAGE 1013
//---------------------------------------------------------------------------
#endif // FileZillaOptH
