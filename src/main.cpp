#include "GEngine.hpp"

int main(int argc, char** argv)
{
	GEngine *p = new GEngine();
	return p->run(argc, argv);
}