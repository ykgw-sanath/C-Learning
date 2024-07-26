#include <stdio.h>
#include <windows.h>

DWORD WINAPI ThreadFunc(LPVOID lpParam)
{
    printf("Thread is running\n");
    return 0;
}

int main()
{
    HANDLE thread;
    thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
    // CreateThread function creates a thread and returns a handle that has unique value assigned by os for the thread

    WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);
    return 0;
}
