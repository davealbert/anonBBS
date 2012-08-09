#include "users.h"

users::users()
{

}

users::~users()
{

}

void users::setNickName()
{
	 cout << "Please enter a nickname: ";
	 getline(cin, nickName);
}

string users::getNickName()
{
	 return nickName;
}

