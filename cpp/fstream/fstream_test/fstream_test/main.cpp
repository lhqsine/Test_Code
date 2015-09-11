#include <fstream>
#include <iostream>  
#include <string>
//#include <stdlib.h>  

using namespace std;

#if 0
int main()
{
	ofstream out("out.txt");
	if (out.is_open())
	{
		out << "This is a line. \n";
		out << "This is anoter line. \n";

		out.close();
	}
	return 0;
}
#endif

string Trim(const string &msg)
{
	const static string SPACE_CHAR = " \t\f\v\n\r";
	std::size_t beg = msg.find_first_not_of(SPACE_CHAR);

	// 防止空字符串出现
	if(beg > msg.length())
	{
		return string();
	}

	string result = msg.substr(beg);

	std::size_t end = result.find_last_not_of(SPACE_CHAR);
	if(end != string::npos)
		end++;
	return result.substr(0, end);
}

int main () {  
	char buffer[256];  
	ifstream in("out.txt");  

	string info;

	if (! in.is_open())  
	{ cout << "Error opening file"; exit (1); }  
	while (!in.eof() )  
	{  
		in.getline (buffer,100);  
		cout << buffer << endl;  

		info = Trim(buffer);	
		cout << info << endl;  

		std::size_t index = info.find("THESE");
		if ( index == 0)
		{
			cout << index << endl; 
			string temp = Trim(info.substr(index + 5));  // 根据这里字符的个数
			cout << temp << endl; 
		}

		//cout << index << endl; 
//		string temp = Trim(info.substr(index + 8));
//		cout << temp << endl; 

	}  

	//std::size_t index = info.find("THESE");
	//cout << index << endl; 



	system("PAUSE");
	return 0;  
}  

