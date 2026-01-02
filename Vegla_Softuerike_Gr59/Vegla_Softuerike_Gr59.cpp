// Vegla_Softuerike_Gr59.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double peshaIdeale(double gjatesia, char gjinia) {
	if (gjinia == 'F' || gjinia == 'f') {      //Femra- BMI 22
		                                       //Meshkuj- BMI 23
		return 22 * (gjatesia * gjatesia);     //gjatesia ne metra
		                                       
	}
	else {
		return 23 * (gjatesia * gjatesia);
	}
}

double kaloriMirembajtje(double pesha, char gjinia) {
     if(gjinia== 'F' || gjinia == 'f') {
		 return  24 * pesha;            //24 kalori per kg (femra)
	 }                                  //26 kalori per kg (meshkuj)
	 else {
		 return  26 * pesha;
	 }
}

double kaloriHumbje(double pesha, char gjinia) {
	if (gjinia == 'F' || gjinia == 'f') {
		return  (24 * pesha)-500;
	}
	else {
		return  (26 * pesha)-500;
	}
}
double kaloriFitim(double pesha, char gjinia) {
	if (gjinia == 'F' || gjinia == 'f') {
		return  (24 * pesha)+300;
	}
	else {
		return  (26 * pesha)+300;   //300 kalori sepse me sigurt dhe 
		                            //shtim i peshes me i shendetshem
	}
}



int main()
{
	cout << "HELLO DEAR CLIENT!!!\n";

	double gjatesia;
	char gjinia;
	double pesha;

	cout << "Jepni gjatesine ne metra: ";
	cin >> gjatesia;
	cout << "Jepni peshen ne kg: ";
	cin >> pesha;
	cout << "Jepni gjinine (M/F): ";
	cin >> gjinia;
	cout << endl;
	cout << "================================================================" << endl;

	cout << "Pesha ideale eshte: " << peshaIdeale(gjatesia, gjinia) << " kg" << endl;
	cout << "Kalorite per mirembajtje: " << kaloriMirembajtje(pesha, gjinia) << " kalori" << endl;
	cout << "Kalorite per humbje peshe: " << kaloriHumbje(pesha, gjinia) << " kalori" << endl;
	cout << "Kalorite per fitim peshe: " << kaloriFitim(pesha, gjinia) << " kalori" << endl;

	return 0;
}


