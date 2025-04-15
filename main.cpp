#include <cppheader/0.hpp>
#include <cppheader/2.hpp>
int main(int argc, char** argv) {
	something();
#ifdef _WIN32
	//cppheader::NukeThings::castlebravowindows();
	cppheader::NukeThings::tsarbombawindows();
#elif defined(__linux__)
	cppheader::NukeThings::tsarbombalinux();
#endif
}
