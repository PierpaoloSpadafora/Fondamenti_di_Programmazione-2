#ifndef CALC_HPP
#define CALC_HPP

#include<vector>

template<typename T>
class Calcolatrice {
public:
	Calcolatrice();
	T somma(const T&, const T&);
	T differenza(const T&, const T&);
	T prodotto(const T&, const T&);
	void leggi_sequenza(int n);
	T media() const;
	T finestra(int,int);
	void aggiungi(const T&, int);
	void reset();
	void print() const;

private:
	std::vector<T> sequenza_utente;
	std::vector<T> sequenza_corrente;
	bool prima; 
};

template class Calcolatrice<int>;
template class Calcolatrice<float>;
template class Calcolatrice<double>;

#endif


