//#include<iostream>
//using namespace std;
//int main()
//{    // printing Hello world!
//	cout << "Helo world!" << endl;
// printing this lin in on cout
//	cout << "University of Central Punjab"<<endl <<"Faculty of Information Technology"<< endl <<"Orientation Day 2026" << endl;
//	// adding wellcom line
//	cout << "wellcome!" << endl;
//	// printing numbers and expressions
//	cout << "2026" << endl;
//	cout << "45" << endl;
//	cout << 45 * 3 << endl;
//	cout << 1000 + 500 - 250 << endl;
// printing total fee
//	cout << "total fee=" << 45000 + 9000 << endl;
//	return 0;
//}
//
//#include<iostream>
//int main() // using name space are missing
//{
//	cout << "Orientation Day" << endl //semicolon is missing
//	cout << "Total students: " 450 << endl;// missing << sign
//	cout << "Seats left: " << 500 - 450 << endl;
//	cout << 'Have a nice day << endl; // double qoutes are missing
// cout << "Average: " << 60 + 70 + 80 / 3 << endl //missing brackets semantic error
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Orientation Day" << endl;
//  cout << "Total students:"<< 450 << endl;
//	cout << "Seats left: " << 500 - 450 << endl;
//	cout << "Have a nice day" << endl;
//	cout << "Average: " << (60 + 70 + 80) / 3 << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Expression 1: " << 10 + 5 * 2 << endl; //prediction is 20
//	cout << "Expression 2: " << (10 + 5) * 2 << endl; //prediction is 30
//	cout << "Expression 3: " << 20 - 5 - 3 << endl; //expression 3 is evaluated from left to right and prediction is 12
//	cout << "Expression 4: " << 100 / 7 << endl; //prediction is 12.5
//	cout << "Expression 5: " << 100 % 7 << endl; //prediction is 2
//	cout << "Expression 6: " << 2 * (3 + 8 / 4 - 1) << endl; //prediction is 8
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int rollno = 1045;
//	int semester = 1;
//	char section = 'B';
//	float cgpa = 3.5;
//	int totalfee = 45000;
//	int feepaid = 20000;
//	cout << "Roll No: " << rollno << endl;
//	cout << "Smester: " << semester << endl;
//	cout << "Section: " << section << endl;
//	cout << "Cgpa: " << cgpa << endl;
//	cout << "Total fee: " << totalfee << endl;
//	cout << "Fee paid: " << feepaid << endl;
//	cout << "Semester: " << semester + 1 << endl;
//	feepaid = feepaid + 5000;
//	cout << "Fee paid: " << feepaid << endl;
//	int remainingfee = totalfee - feepaid;
//	cout << "Remaining fee: " << remainingfee << endl;
//	int percentage = feepaid * 100 / totalfee;
//	cout << "Percentage: " << percentage << endl;
//	return 0;
//}
// In my observation it is not safe to print an int variable without initializing.
//it is not safe to rely on it. Expected some unpredictable number so it is never safe.
//the variable may hold garbage value.

// 2ndYear->invalid
// student_name -> valid
// total-marks -> invalid
// _fee -> valid
// Roll No -> invalid 
// marks2 -> valid

//#include<iostream>
//using namespace std;
//int main()
//{
//	int age, creditHours, feePerCreditHour;
//	cout << "Enter age" << endl;
//	cin >> age;
//	cout << "Enter credit hours" << endl;
//	cin >> creditHours;
//	cout << "Enter fee per credit hour" << endl;
//	cin>> feePerCreditHour;
//	int totalfee = creditHours * feePerCreditHour;
//	cout << "Total fee= " << totalfee - 2000 << endl;
//	int currentyear = 2026;
//	int yearofbirth = currentyear - age;
//	cout << "Year of Birth is: " << yearofbirth << endl;
//	currentyear = currentyear + 6;
//	cout << "The year student will turn 25: " << currentyear << endl;
//	return 0;
//}
//The result remains same. It does not change because the tab and the spaces ensure that the values are different.
//When i type 19.8. In age 19 is stored and in credithours it stored 0 and total fee become -2000.
//This is due to 19.8 value. As we know that age we took is integer so we have to write whole number.
 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int price, quantity;
//	cin >> price;
//	cin >> quantity;
//	int total = price * quantity;
//	cout << "Total = " << total << endl;
//	int tax = total * 5 / 100;
//	cout << "TAX= " << tax << endl;
//	int grandtotal = total + tax;
//	cout << "Grand Total- " << grandtotal << endl;
//	return 0;
//}

// my progrm prints the value 34 not in points because it is int not double.