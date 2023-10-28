#include <iostream>
#include <CompositePattern.hpp>
using namespace std;

int main(int argc, char const *argv[]) {
	std::shared_ptr<ICompany> company(new Company("test1"));
	std::shared_ptr<ICompany> finance(new FinanceDepartment("Head office financial system"));
	std::shared_ptr<ICompany> personal(new PeronalDepartment("Head office peron department"));
	company->add(finance);
	company->add(personal);
	std::shared_ptr<ICompany> company2(new Company("test2"));
	std::shared_ptr<ICompany> finance1(new FinanceDepartment("beijing financial system"));
	std::shared_ptr<ICompany> personal1(new PeronalDepartment("beijing peron department"));
	company2->add(finance1);
	company2->add(personal1);
	company->add(company2);
	company->show();
	company->remove(company2);
	company->show();
	company->add(finance);
	company->show();
	return 0;
}
