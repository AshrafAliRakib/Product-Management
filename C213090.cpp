#include <bits/stdc++.h>
#include<fstream>
using namespace std;


class product

{

public:

	int pid;
	string productCategory,productName;

};

class sProduct : public product

{

public:

	int price;
	string customerid;

};

class bProduct : public product

{

public:

	int bid,price;
	string bName;

};


int main()

{
	product p1;
	sProduct sp1;
	bProduct bp1;

	ifstream productin("productIN.txt");

	ofstream productout("productOut.txt");

	ifstream soldproductin("customerIN.txt");

	ofstream soldproductout("customerOut.txt");

	ifstream bpin("buyerIN.txt");

	ofstream bpout("buyerOut.txt");


	productin>>p1.pid;

	getline(productin,p1.productCategory);

	getline(productin,p1.productName);

	productout<<"Product ID = "<<p1.pid<<endl;

	productout<<"Product Chatagory = "<<p1.productCategory<<endl;

	productout<<"Product Name = "<<p1.productName<<endl;


	soldproductin>>sp1.pid;

	soldproductin.ignore();

	getline(soldproductin,sp1.productCategory);

	getline(soldproductin,sp1.productName);

	soldproductin>>sp1.price;


	getline(soldproductin,sp1.customerid);

	soldproductout<<"Product ID = "<<sp1.pid<<endl;

	soldproductout<<"Product Chatagory = "<<sp1.productCategory<<endl;

	soldproductout<<"Product Name = "<<sp1.productName<<endl;

	soldproductout<<"Price = "<<sp1.price<<endl;

	soldproductout<<"Customer ID = "<<sp1.customerid<<endl;

	bpin>>bp1.pid;


	getline(bpin,bp1.productCategory);

	getline(bpin,bp1.productName);

	bpin>>bp1.bid>>bp1.price;

	getline(bpin,bp1.bName);

	bpout<<"Product ID = "<<bp1.pid<<endl;

	bpout<<"Product Chatagory = "<<bp1.productCategory<<endl;

	bpout<<"Product Name = "<<bp1.bName<<endl;

	bpout<<"Buyer ID = "<<bp1.bid<<endl;

	bpout<<"Price = "<<bp1.price<<endl;

	bpout<<"Buyer Name = "<<bp1.bName<<endl;

	return 0;
}
