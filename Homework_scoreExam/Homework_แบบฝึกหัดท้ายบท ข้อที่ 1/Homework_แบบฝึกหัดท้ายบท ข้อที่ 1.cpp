#include<iostream>
#include<string>
using namespace std;
int main()
{
	int score;
	cout << "input score : ";
	cin  >>  score;
	if (score > 100){
		cout << "Error number more score"<<endl;
	}
	else if (score >= 90){
		cout << "Your grade : A"<< endl;
	}
	else if (score >=80){
		cout << "You grade : B"<< endl;
	}
	else if (score >=70){
		cout << "You grade : C"<< endl;
	}
	else if (score >=60){
		cout << "You grade : D"<< endl;
	}
	else if (score >=0){
		cout << "You gade : F"<< endl;
	}
	else{
		cout << "Error input number"<< endl;
	}
	return 0;
}
		

