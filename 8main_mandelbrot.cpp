#include <fstream>
#include <iostream>
/*#include <chrono>

using namespace std;


int findMandelbrot(double cr, double ci, int max_iterations)
{
	int i = 0;
	double zr(0.), zi(0.);
	while (i < max_iterations && zr * zr + zi * zi < 4.0)
	{
		const double temp(zr * zr - zi * zi + cr);
		zi = 2.0 * zr * zi + ci;
		zr = temp;
		++i;
	}
	return i;
}

double mapToReal(int x, int imageWidth, double minR, double maxR)
{
	const double range(maxR - minR);
	return x * (range / imageWidth) + minR;
}

double mapToImaginary(int y, int imageHeight, double minI, double maxI)
{
	const double range(maxI - minI);
	return y * (range / imageHeight) + minI;
}

int main()
{
	int imageWidth(1024), imageHeight(1024), maxN(1024);
	double minR(-1.5), maxR(0.7), minI(-1), maxI(1);

	//ifstream f("input.txt");
	//if (!f)
	//{
	//	cout << "Could not open file!" << endl;
	//	return 1;
	//}

	//f >> imageWidth >> imageHeight >> maxN;
	//f >> minR >> maxR >> minI >> maxI;

	ofstream g("output_image.ppm");
	g << "P3" << endl;
	g << imageWidth << " " << imageHeight << endl;
	g << "255" << endl;

	double start = clock();

	for (int i = 0; i < imageHeight; i++)
	{
		for (int j = 0; j < imageWidth; j++)
		{
			double cr = mapToReal(j, imageWidth, minR, maxR);
			double ci = mapToImaginary(i, imageHeight, minI, maxI);

			int n = findMandelbrot(cr, ci, maxN);

			int r = (int)sqrt(n);
			int gr = 2 * n;
			int b = n;

			g << r << " " << gr << " " << b << " ";
		}
		g << endl;

		//if (i == imageHeight / 2) break;
	}

	cout << "Finished!" << endl;

	double stop = clock();

	cout << (stop - start) / CLOCKS_PER_SEC;

	system("pause");
	return 0;
}*/