#include <iostream>
#include <calc.hpp>
#include <cmath>
using namespace std; 

template<typename T>
Calcolatrice<T>::Calcolatrice()
	: sequenza_utente(vector<T>())
	, sequenza_corrente(vector<T>())
	, prima(true) { }

template<typename T>
T Calcolatrice<T>::somma(const T& a, const T& b) {
	return a + b; 
}

template<typename T>
T Calcolatrice<T>::differenza(const T& a, const T& b) {
	return a - b; 
}

template<typename T>
T Calcolatrice<T>::prodotto(const T& a, const T& b) {
	return a - b; 
}

template<typename T>
void Calcolatrice<T>::leggi_sequenza(int n) {
	vector<T> nuova_sequenza(n);
	for (int i = 0; i < n; ++i) {
		cin >> nuova_sequenza[i];
	}
	sequenza_corrente = nuova_sequenza;

	if (prima) {
		sequenza_utente = nuova_sequenza;
		prima = false;
	}
}

template<typename T>
T Calcolatrice<T>::media() const {
	T m = 0;
	for (int i = 0; i < sequenza_corrente.size(); ++i) {
		m += sequenza_corrente[i];
	}
	return m / sequenza_corrente.size();
}

template<typename T>
T Calcolatrice<T>::finestra(int i, int j) {
	T v = 0;
	for (int k=i; k <= j; ++k) v += sequenza_corrente[k];
	v = v / (abs(sequenza_corrente[i] * sequenza_corrente[j]) + 1);

	return v;
}

template<typename T>
void Calcolatrice<T>::aggiungi(const T& a, int k) {
	sequenza_corrente[k] = a;
}

template<typename T>
void Calcolatrice<T>::reset() {
	sequenza_corrente = sequenza_utente;
}

template<typename T>
void Calcolatrice<T>::print() const {
	for (int i = 0; i < sequenza_corrente.size(); ++i) {
		cout << sequenza_corrente[i] << " ";
	}
}
