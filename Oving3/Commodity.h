//
// Created by Max Torre Schau on 26/08/2020.
//
#pragma once

#include <string>
using namespace std;


const double tax = 0.30;
class Commodity {
public:
    Commodity(const string &name_, int id_, double price_);
    const string & get_name() const;
    int get_id() const;
    double get_price() const;
    double get_price(int amount_of_persons) const;
    void set_price(double new_price);
    double get_price_with_sales_tax(int amount_of_persons);
private:
    string name;
    int id;
    double price;

};


