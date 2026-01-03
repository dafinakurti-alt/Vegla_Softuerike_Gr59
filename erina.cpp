//Analiza e klientit


void analizaKlientit(double gjatesia, double pesha, char gjinia,
	double peshaIdeale, double kaloriM, double kaloriH, double kaloriF);


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

	// Mesazh motivues

	cout << "\n------------------Dear Client-------------------\n";

	if (diferencaEPeshes >= -1 && diferencaEPeshes <= 1) {
		cout << "Urime! Jeni shume afer peshes ideale. Vazhdoni keshtu!\n";
	}
	else if (diferencaEPeshes > 1) {
		cout << "Mos u shqetesoni! Me pak disipline dhe ulje kalorike, do ta arrini qellimin tuaj. :)\n";
	}
	else {
		cout << "Jeni ne rruge te mire! Me rritje te lehte kalorike, mund te arrini peshen ideale. :)\n";
	}
}