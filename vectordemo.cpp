#include<iostream>
#include<algorithm>
#include<ios>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
//ask for and read student's name
	cout << "Please enter you first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

//ask for and read the midterm and final grade
	cout << "Please enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

//ask for and read the homework grade
	cout << "Enter all your homework grades, "
		"Followed by end-of-file: ";
	
	vector<double> homework;
	double x;
//
	while(cin >> x)
		homework.push_back(x);

//check no empty input
	typedef vector<double>::size_type vec_sz;//unasined integral type
	vec_sz size = homework.size();
	if(size == 0) {
		cout << endl << "You must enter your grade. "
				"Please try again." << endl;
	return 1;
	}

//sort grades
	sort(homework.begin(), homework.end());
	
//computer the median 
	vec_sz mid = size/2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1])/2
			       : homework[mid];
//compute and write final grade
	streamsize prec = cout.precision();
	cout << "Your final grade is" << setprecision(3)
	     << 0.2 * midterm + 0.4 * final + 0.4 * median
	     << setprecision(prec)<< endl;

	return 0;

}
