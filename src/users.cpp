#include "users.h"

// Constructors
users::users()
{

}

// Destructors
users::~users()
{

}

// Setters
void users::setNickName()
{
	 cout << "Please enter a nickname: ";
	 getline(cin, nickName);
}

// Getters
string users::getNickName()
{
	 return nickName;
}

