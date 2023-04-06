#ifndef CLIENTE_H_
#define CLIENTE_H_

class Cliente
{
	friend ostream& operator<< (ostream& out, const Cliente& c){
		out << "Nome: " << c.nome  << endl << "Trattamento: " << c.trattamento  << endl << "Prezzo: " << c.prezzo << endl << "Durata trattamento: " << c.durata_trattamento << endl;
		return out;
	}

	friend istream& operator>> (istream& in, Cliente& c){
		cout << "Inserisci Nome --> "; string nome; in >> nome; c.setNome(nome);
		cout << "Inserisci Trattamento --> "; string trattamento; in >> trattamento;  c.setTrattamento(trattamento);
		cout << "Inserisci Prezzo --> "; float prezzo; in >> prezzo; c.setPrezzo(prezzo);
		cout << "Inserisci Durata Trattamento --> "; unsigned durata_trattamento; in >> durata_trattamento; c.setDurataTrattamento(durata_trattamento);

		return in;
	}



	private:
		string nome;
		string trattamento;
		float prezzo;
		unsigned durata_trattamento;

	public:
		string getNome() const {return nome;}
		string getTrattamento() const {return trattamento;}
		float getPrezzo() const {return prezzo;}
		int getDurataTrattamento() const {return durata_trattamento;};

		void setNome(string nome) { this->nome = nome; }
		void setTrattamento(string trattamento) { this->trattamento = trattamento; }
		void setPrezzo(float prezzo) { this->prezzo = prezzo; }
		void setDurataTrattamento(unsigned durata_trattamento) {this->durata_trattamento = durata_trattamento;}


	
};
#endif