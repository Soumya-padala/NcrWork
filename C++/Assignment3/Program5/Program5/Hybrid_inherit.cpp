#include<iostream>
using namespace std;
class person {
	char *name;
	int age;
public:
	void get_age_name(char *name, int age) {
		cout << "name: " << name << "age: " << age << endl;
	}
};
class physique :virtual public person //to remove mutiple copies of person class in employee class virtual is used
{  
	int height;
	int weight;
public:
	void get_height_weight(int height, int weight) {
		cout << "height : " << height << "weight : " << weight << endl;
	}
};
class family :virtual public person {
	int numChildren;
	char *religion;
public:
	void get_numchi_rel(char *religion, int nochildren) {
		cout << "religion : " << religion << "no. of  children : " << nochildren << endl;
	}
};
class employee :public family, public physique {
	int empno;
	int salary;
public:
	void get_empno_sal(int empno, int salary) {
		cout << "empno : " << empno << "salary : " << salary << endl;
	}
};
int main() {
	employee emp;
	emp.get_age_name("ncr", 21);
	emp.get_height_weight(5, 65);
	emp.get_numchi_rel("hinduism", 0);
	emp.get_empno_sal(121, 50000);
	getchar();
	return 0;
}
