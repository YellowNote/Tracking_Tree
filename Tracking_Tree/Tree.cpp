#include "Tree.h"

//TODO CreateID
//TODO CreateEvent
void Tree::CreateEvent() {
	static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"1234567890";
	int stringLength = sizeof(alpha) - 1;
	Tree::Event = alpha[rand() % stringLength];
}

string Tree::createID(int position) {
	static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"1234567890";
	int stringLength = 8;

}
//TODO CreateNode
//TODO UpdateHash
//TODO UpdateHistory