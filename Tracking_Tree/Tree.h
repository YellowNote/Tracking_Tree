#pragma once


#include<string>
#include<vector>

using namespace std;

struct  Tree
{
	int position;
	string ID, ParentID, Event, LHash = NULL, RHash = NULL;
	vector<string> LHist, RHist;

	void CreateEvent();
<<<<<<< HEAD
	void CreateEvent(string input);
=======
	string createID(int position, string parent);
	string hash(string thingToHash);
	Tree createNode(int position, string parent);
	void updateParentHash(Tree* childnode, Tree* parentnode)
>>>>>>> 85c8b45d1d7c0afbdf4ea69b5e90faee5282656c
};



//TODO CreateID             // this is written and needs to be tested. 
//TODO CreateEvent          // this is written and needs to be tested. 
//TODO CreateNode             
//TODO UpdateHash
//TODO UpdateHistory
//Testing
//testing number 2
