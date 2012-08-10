#include <string>
#include <iostream>

using namespace std;

class users{
	 private:
			string nickName;

	 public:
	 		// Constructors
			users(); 

			// Destructors
			~users(); 

			// Methods
			void setNickName();
			string getNickName();

			// Variables
			users user; 
};
