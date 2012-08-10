#include <string>
#include <iostream>

#ifndef USERS_H
#define USERS_H
 
class users{
	 private:
			std::string nickName;

	 public:
	 		// Constructors
			users(); 

			// Destructors
			~users(); 

			// Methods
			void setNickName();
			std::string getNickName();

};

#endif
