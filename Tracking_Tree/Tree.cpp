#include "Tree.h"


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

string Tree::createID(int position, string parent) {
	static const char alpha[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"1234567890";
	int stringLength = 8;
	if (position == 1)             // if this is our first actual tree we create a random parent ID
	{
		ParentID = alpha[rand() % stringLength];
	}
	else
	{
		ParentID = parent;
	}
	string id = hash(ParentID).substr(0,3) + hash(Event).substr(0,3);      // the ID is the concatenation of the parent id hashed for the first 4 chars and the has of event for the last 4
	return id;
}

string Tree::hash(string thingToHash) {           // we will have to find a hashing algorithim for this but for now it will return what it gets, later to actaully return hash
	return thingToHash;

}

Tree Tree::createNode(int position, string parent) {
	CreateEvent();
	createID(position, parent);
	//update hash of parents
}

void Tree::updateParentHash(Tree* childnode, Tree* parentnode) {

	if (childnode->position % 2 == 0) // this is a left child in this case
	{
		parentnode->LHist.push_back(parentnode->LHash); // we update the history before we change the hash
		parentnode->LHash = hash(childnode->Event);
	}
	else // right tree
	{
		parentnode->RHist.push_back(parentnode->RHash);
		parentnode->RHash = hash(childnode->Event);
	}


}


//TODO UpdateHash
//TODO UpdateHistory