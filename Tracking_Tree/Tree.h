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
	string createID(int position);

};



//TODO CreateID
//TODO CreateEvent
//TODO CreateNode
//TODO UpdateHash
//TODO UpdateHistory
//Testing
//testing number 2
