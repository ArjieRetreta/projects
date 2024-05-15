#include<iostream>
#include "CreateAndDestroy.h"
using namespace std;

CreateAndDestroy::CreateAndDestroy(int ID, string messageString){
	objectID = ID;
	message = messageString;
	cout<<"object"<<objectID<<" constructor runs "
		<<message<<endl;
}

CreateAndDestroy::~CreateAndDestroy() {
	cout<<(objectID == 1 || objectID == 6 ? "\n" : "");
	cout<<"object"<<objectID<<"destructor runs"
	    <<message<<endl;
}
