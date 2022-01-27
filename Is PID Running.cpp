#include <Windows.h>

BOOL IsProcessRunning(DWORD pid)
{
    HANDLE process = OpenProcess(SYNCHRONIZE, FALSE, pid);
    DWORD ret = WaitForSingleObject(process, 0);
    CloseHandle(process);
    return ret == WAIT_TIMEOUT;
}

int main()
{
if (IsProcessRunning() == true)
{
//Application or PID is running
}
else
{
//PID not running :C
}
return NULL;
}
