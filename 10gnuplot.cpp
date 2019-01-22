#include <fstream>				
#include <cstdio>

using namespace std;

//example of how to plot a simple graph 
//using gnuplot, and C++
int main()
{
	//create some data
	ofstream ofs("out.dat");
	for (int i = 0; i < 100; i++)
		ofs << "\n" << i << " " << i * i << " " << i*i/2;
	ofs.close();

	//create a pipe to send information to gnuplot
	//this is possible because gnuplot supports pipes
	FILE *gnuplotPipe = _popen("gnuplot -persist", "w");  // Open a pipe to gnuplot

	if (gnuplotPipe) {   // If gnuplot is found
		fprintf(gnuplotPipe, "set xlabel 'This is the X'\n");
		fprintf(gnuplotPipe, "set ylabel 'This is the Y'\n");
		fprintf(gnuplotPipe, "set title 'This is my title :)'\n");
		//example 1:
		//fprintf(gnuplotPipe, "plot sin(x)\n");
		//example 2:
		//fprintf(gnuplotPipe, "plot \"out.dat\"\n");
		//example 3:
		//To plot a multi - column datafile using the 1st column for the abscissa and the 2nd column as the ordinate, use
		fprintf(gnuplotPipe, "plot \"out.dat\" using 1:2\n");
		//Add a second plot using 1st(= x) and 3rd(= y) columns 
		fprintf(gnuplotPipe, "replot \"out.dat\" using 1:3 every 5\n");
		//If the “using” keyword is not specified, 1st and 2nd columns are assumed : gnuplot > plot “file.dat”
		//"every" -> plots every 5 data points

		//example 4: (try turning this on to save your plot to a file)
		fprintf(gnuplotPipe, "set terminal push\n"); //(save original format setting)
		fprintf(gnuplotPipe, "set terminal gif size 640, 480\n"); //    (change to new format)
		fprintf(gnuplotPipe, "set output \"out.gif\"\n"); //		   (set file name for output)
		fprintf(gnuplotPipe, "replot\n"); //(save gif plot in file)
		fprintf(gnuplotPipe, "set terminal pop\n"); //(restore original format setting)
		fflush(gnuplotPipe); //flush pipe

		//gnuplot has a huge amount of options!
		fprintf(gnuplotPipe, "\nexit \n");   // exit gnuplot
		_pclose(gnuplotPipe);    //close pipe
	}
	system("pause");
}