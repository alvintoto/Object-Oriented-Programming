#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
	string s;
	unordered_map<string, int> map;
	
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == ' ') {
			auto row = map.find(s);
			if (row != map.end()) {
				row->second += 1;
			}

			else {
				map.insert({s, 1});
			}

			s = "";
		}

		else {
			s += str[i];
		}
	}

	for (const auto& row : map) {
		cout << '(' << row.first << ", " << row.second << ")" << endl;
	}

}

int main(int argc, char** argv)
{

	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));

	printFrequencies(content);

	return 0;
}