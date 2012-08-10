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
	 std::cout << "Please enter a nickname: ";
	 getline(std::cin, nickName);
}

// Getters
std::string users::getNickName()
{
	 return nickName;
}

