#include <iostream>
#include <string>

using namespace std;

class calculator
{
	private:
		int num1,num2;
		string option;
		char opertor;
		int multiple,num_lines;
	public:
		void calculation();
		void multiple_table();
		void menu();
		string get_menu();
		void run_program();
};


void calculator::menu()
{
	cout <<"Do you want to create a multiple table(M)\n\tor perform a calculation(C)";
	cin >>option;
}
string calculator::get_menu(){
	return option;
}
void calculator:: multiple_table()
{
	cout << "enter your multiple between 1 and 20"<<endl;
	cin>>multiple;
	cout <<" enter the number of lines "<<endl;
	cin >>num_lines;

	for(int i=1;i<=num_lines;i++)
	cout<< multiple <<" * " << i << " = " <<multiple*i <<endl;
}
void calculator::run_program()
{
	menu();
	if ( option == "M")
		multiple_table();
	if (option == "C")
		calculation();
}

void calculator::calculation()
{
	cout <<"Enter your first  num";
	cin >>num1;
	cout <<"Enter your second number";
	cin >>num2;
	cout <<"Select your operator(+,-,%,/):";
	cin >> opertor;

	switch(opertor){
		case '+':
			cout << num1 << " " <<opertor <<" " <<num2 << " = " <<num1+num2 <<endl;

		case '-':
			cout << num1 << " " <<opertor <<" " <<num2 << " = " <<num1-num2 <<endl;

		case '/':
			cout << num1 << " " <<opertor <<" " <<num2 << " = " <<num1/num2 <<endl;
		case '*':
			cout << num1 << " " <<opertor <<" " <<num2 << " = " <<num1*num2 <<endl;
		case '%':
			cout << num1 << " " <<opertor <<" " <<num2 << " = " <<num1%num2 <<endl;
	}

}
main()
{

	calculator obj;	
	obj.run_program();

}
