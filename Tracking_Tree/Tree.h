#pragma once


#include<string>
#include<vector>
#include<iostream>
#include<numeric> // this is used to turn our history into a string for print/debug


using namespace std;

struct  Tree
{
	int position;
	string ID, ParentID, Event, LHash = NULL, RHash = NULL;
	vector<string> LHist, RHist;

	void CreateEvent();
	void CreateEvent(string input);

	string createID(int position, string parent);
	string hash(string thingToHash);
	Tree createNode(int position, string parent);
	void updateParentHash(Tree* childnode, Tree* parentnode);
	string getID(Tree* node);
	string getEventHash(Tree* node);
	void printNode();
	Tree();  // default constructor for use only with the first node in our tree
	Tree(string parent);  // construct that allows us to build children passing the parents ID to the child, randomly generating the event
	Tree(string parent, string eventtoadd); // constructor that allos us to build the children from parent ID and a string event passed as an argument 

};



//TODO CreateID             // this is written and needs to be tested. 
//TODO CreateEvent          // this is written and needs to be tested. 
//TODO CreateNode             
//TODO UpdateHash
//TODO UpdateHistory
//Testing
//testing number 2
