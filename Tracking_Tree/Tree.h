#pragma once


#include<string>
#include<vector>

using namespace std;

struct  Tree
{
	string ID, ParentID, Event, LHash = NULL, RHash = NULL;
	vector<string> LHist, RHist;
};

//TODO CreateID
//TODO CreateEvent
//TODO CreateNode
//TODO UpdateHash
//TODO UpdateHistory
//Testing
