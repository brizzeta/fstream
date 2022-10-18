#include "Directory.h"
#include <string>

int main() {
	Directory firm("Lion", "David", "+372993004488", "Ukraine,Odesa,Lvivska,10", "Product_monufactoring");
	firm.Init();
	firm.Print();

	Directory firm2("Lion2", "David2", "+564528833", "Ukraine,Kharkiv,Lvivska,25", "Product_monufactoring");
	firm2.Init();
	firm2.Find_Firm_Name("Lion2");
}