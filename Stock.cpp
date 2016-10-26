#include "stock.h"
using namespace std;


Stock :: Stock(){
    symbol = "";
    cost=0.0;
    numberOfShares = 0;
    next = NULL;
    prev = NULL;
}
Stock :: Stock(string s, float c, int n){
    symbol = s;
    cost=c;
    numberOfShares = n;
    next = NULL;
    prev = NULL;
}

void Stock::setNext(Stock* n){
    next = n;
}

void Stock::setPrev(Stock* p){
    prev = p;
}

Stock* Stock::getPrev(){
    return prev;
}
Stock* Stock::getNext(){
    return next;
}
