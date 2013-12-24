#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

template <typename T>
void DisplayContents (const T& Input)
{
	for (T::const_iterator iElement = Input.begin()
			; iElement != Input.end()
			; ++iElement)
		cout << *iElement << ' ';
	cout << endl;
}

int main()
{
	int * image = new int [480][640];

	ifstream img_file ("stuff.txt");

	int i = 0;
	int j = 0;
	while (img_file)
	{
		string s;
		/*read into image considering parsing by commas for rows and newlines for columns*/
		if (!getline(img_file, s))
			break;
		istringstream holder(s);

		while (holder)
		{
			string s;
			if (!getline(holder, s, ',')
				break;
			image[i][j] = s;
			j++;
		}
		i++;


	}	
}