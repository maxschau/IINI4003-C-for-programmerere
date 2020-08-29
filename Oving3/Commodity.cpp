//
// Created by Max Torre Schau on 26/08/2020.
//
#include "Commodity.h"
#include <string>
using namespace std;


Commodity::Commodity(const string &name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

const string &Commodity::get_name() const {
    return name;
}

int Commodity::get_id() const {
    return id;
}

double Commodity::get_price() const {
    return price;
}

double Commodity::get_price(int amount_of_persons) const {
    return price * amount_of_persons;
}

void Commodity::set_price(double new_price) {
    price = new_price;
}

double Commodity::get_price_with_sales_tax(int amount_of_persons) {
    return price * amount_of_persons * (1 + tax);
}







