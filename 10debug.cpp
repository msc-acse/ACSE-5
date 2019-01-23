#include <iostream>		// input/output standard library
#include <string>			// standard string library
#include <vector>			
#include <fstream>			

using namespace std;

/*
int main()
{
	//std::vector<double> data(20);
	int i(0);
	std::vector<double> data(20, 0);
	//for (int i = 0; i < data.size(); i++)
	//	data[i] = rand();
	//for (std::vector<double>::iterator iter = data.begin(); iter != data.end(); iter++)
	//	(*iter) = rand();
	for (auto iter = data.begin(); iter != data.end(); iter++, i++)
		(*iter) = rand();

	//this could be a set, a mat, a multiset, and the iterator would stay the same
	//and you can reverse iterate as well using rbegin and rend
	//begin points to the first element, while end point to the first address AFTER the last element
	//iterators are pointers

	double imageWidth(255), imageHeight(255);

	//std::vector<std::vector<double>> data2d;
	std::vector<std::vector<double>> data2d(imageWidth,std::vector<double>(imageHeight,0.));
	for (unsigned int i = 0; i < data2d.size(); i++)
		for (unsigned int j = 0; j < data2d[i].size(); j++)
			data2d[i][j] = j;

	//http://netpbm.sourceforge.net/doc/ppm.html
	//this is raw PPM
	ofstream g("output_image2.ppm");
	g << "P3" << endl;
	g << imageWidth << " " << imageHeight << endl;
	g << "255" << endl;

	for (int i = 0; i < imageHeight; i++)
	{
		for (int j = 0; j < imageWidth; j++)
		{
			int r = data2d[i][j];
			int gr = 255-data2d[i][j];
			int b = data2d[i][j];

			g << r << " " << gr << " " << b << " ";
		}
		g << endl;
	}

	//fill the data 
}
*/