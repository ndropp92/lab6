#include<iostream>
#include<string>

using namespace std;

class secretType {
	string name; // private variables
	int weight,age; // can only be accessed
	double height; // through getter and setter functions
public :
	void print(secretType);
	void setName(string);
	void setWeight(int);
	void setHeight(double);
	void setAge(int);
	int getAge() { return age; }
	int getWeight() { return weight; } // getter functions are not worth the lines of code outside of the class, no reason to prototype
	string getName() { return name; }
	double getHeight() { return height; }
	string weightStatus(secretType);

};
void secretType::print(secretType type) {
	cout << type.getName() << "Age: " << type.getAge() << "\tWeight: " << type.getWeight() << "\tHeight: " << type.getHeight() << "\tBMI: " << type.weightStatus(type) << endl;
}

void secretType::setName(string nme){  // send in value to set name, name is a private variable and must be accessed from a 
	name = nme;						//a setter function that is predisposed inside the class
}

void secretType::setWeight(int wgt){ // send in value to set weight, weight is a private variable and must be accessed from 
	weight = wgt;						//a setter function that is predisposed inside the class
}

void secretType::setHeight(double hgt){  // send in value to set height, height is a private variable and must be accessed from 
	height = hgt; // inches				//a setter function that is predisposed inside the class
}

void secretType::setAge(int ag){ // send in value to set age, age is a private variable and must be accessed from
	age = ag;						//a setter function that is predisposed inside the class
}

string secretType::weightStatus(secretType type){
	double bmi = (type.getWeight() * 703) / (type.getHeight() * type.getHeight());
	if (bmi < 18.5)
		return "Underweight";
	else if (bmi >= 18.5 && bmi <= 24.9)
		return "Normal Weight";
	else if (bmi >= 25.0 && bmi <= 29.9)
		return "Overweight";
	else if (bmi >= 30)
		return "Obese";	
}

int main() {
	secretType person0;
	person0.setHeight(68);
	person0.setAge(62);
	person0.setName("John");
	person0.setWeight(130);
	person0.print(person0);
	cout << endl;
	return 0;
}
