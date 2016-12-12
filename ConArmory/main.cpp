#include <iostream>
#include <signal.h>
#include <stdlib.h>

#include "stdafx.h"


void handleSignal(int signal)
{
	std::printf("Caught signal %d\n", signal);
	exit(1);
}

void main()
{
	signal(SIGINT, handleSignal);

	std::system("pause");
}