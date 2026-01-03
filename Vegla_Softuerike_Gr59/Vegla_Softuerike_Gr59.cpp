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


void analizaKlientit(double gjatesia, double pesha, char gjinia,
	double peshaIdeale, double kaloriM, double kaloriH, double kaloriF);



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

// Llogaritjet


	double pIdeale = peshaIdeale(gjatesia, gjinia);
	double kaloriM = kaloriMirembajtje(pesha, gjinia);
	double kaloriH = kaloriHumbje(pesha, gjinia);
	double kaloriF = kaloriFitim(pesha, gjinia);

	cout << "Pesha ideale eshte: " << peshaIdeale(gjatesia, gjinia) << " kg" << endl;
	cout << "Kalorite per mirembajtje: " << kaloriMirembajtje(pesha, gjinia) << " kalori" << endl;
	cout << "Kalorite per humbje peshe: " << kaloriHumbje(pesha, gjinia) << " kalori" << endl;
	cout << "Kalorite per fitim peshe: " << kaloriFitim(pesha, gjinia) << " kalori" << endl;

	analizaKlientit(gjatesia, pesha, gjinia, pIdeale, kaloriM, kaloriH, kaloriF);

	return 0;
}

//Analiza e klientit


void analizaKlientit(double gjatesia, double pesha, char gjinia,
	double peshaIdeale, double kaloriM, double kaloriH, double kaloriF) {

	double diferencaEPeshes = pesha - peshaIdeale;

	cout << "\n---------------Analiza e Klientit---------------\n";

	if (diferencaEPeshes > 0)
		cout << "Ju jeni " << diferencaEPeshes << " kg mbi peshen ideale.\n";
	else if (diferencaEPeshes < 0)
		cout << "Ju jeni " << -diferencaEPeshes << " kg nen peshen ideale.\n";
	else
		cout << "Ju keni peshen ideale.\n";

	cout << "\nKalorite aktuale (mirembajtja): " << kaloriM << " kalori.\n";
	cout << "Ulje kalorike per humbje peshe: " << kaloriM - kaloriH << "kalori\n";
	cout << "Shtim kalorik per fitim peshe: " << kaloriF - kaloriM << "kalori\n";

}

	
