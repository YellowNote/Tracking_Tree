#include "Tree.h"

//TODO CreateID

void Tree::CreateEvent() {
	static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"1234567890";
	int stringLength = sizeof(alpha) - 1;
	Tree::Event = alpha[rand() % stringLength];
}
void Tree::CreateEvent(string input) {
	Tree::Event = input;
}
//TODO CreateNode
//TODO UpdateHash
//TODO UpdateHistory