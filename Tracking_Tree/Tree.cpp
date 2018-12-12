#include "stdafx.h"
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
/*
Tree Tree::createNode(int position, string parent) {
	CreateEvent();
	createID(position, parent);
	//update parent hashes
}
*/
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

void Tree::printNode() {
	cout << "ID: " << this->ID << endl;
	cout << "event: " << this->Event << endl;
	cout << "left hash: " << this->LHash << endl;
	cout << "right hash: " << this->RHash << endl;
	string s1 = accumulate(begin(this->LHist), end(this->LHist), s1); // s1 is the string made from all of the strings in Lhist
	string s2 = accumulate(begin(this->RHist), end(this->RHist), s2); // S2 is the string made from all the sting in Rhist
	cout << "left History: " << s1 << endl;
	cout << "right History: " << s2 << endl;

}





// Helper functions for easily getting things from a node, ID, hash of event, ect...

string Tree::getID(Tree* node) {
	return this->ID;
}
string Tree::getEventHash(Tree* node) {
	return hash(this->Event);
}



// Constructors
Tree::Tree() {  // default constructor for use only with the first node in our tree, will always have a random event for simplicity
	ID = createID(1, "");
	CreateEvent();


}
Tree::Tree(string parent) {  // construct that allows us to build children passing the parents ID to the child, randomly generating the event
	ID = createID(2, parent);
	CreateEvent();

}
Tree::Tree(string parent, string eventtoadd) { // constructor that allos us to build the children from parent ID and a string event passed as an argument 
	ID = createID(2, parent);
	CreateEvent(eventtoadd);
}



//TODO UpdateHash
//TODO UpdateHistory