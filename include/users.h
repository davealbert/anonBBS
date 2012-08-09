#include <string>
#include <iostream>

using namespace std;

class users{
	private:
		string nickName;

	public:
		users(); 
		~users(); 
		void setNickName();
		string getNickName();
};
