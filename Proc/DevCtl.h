
#define NAMELENGTH  262/*36*/
#pragma pack(push, 1)
typedef struct _CallbackInfo
{
    ULONGLONG		hParentId;
    ULONGLONG		hProcessId;
    ULONG			bCreate;
	WCHAR			szImagePath[NAMELENGTH];
}CALLBACK_INFO, *PCALLBACK_INFO;
#pragma pack(pop)
#define IOCTL_NTPROCDRV_GET_PROCINFO    CTL_CODE(FILE_DEVICE_UNKNOWN, \
			0x0800, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_NTPROCDRV_STOP_PROC_MONITOR    CTL_CODE(FILE_DEVICE_UNKNOWN, \
			0x0801, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_SET_EVENT                 CTL_CODE(FILE_DEVICE_UNKNOWN, \
			0x0805, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

#define IOCTL_KILL_PROCESS              CTL_CODE(FILE_DEVICE_UNKNOWN, \
			0x0810, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)