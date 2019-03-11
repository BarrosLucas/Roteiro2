/*
 * main.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */
#include <iostream>
#include <string>
#include "Endereco.h"
#include "Pessoa.h"


using namespace std;

void preencherEndereco(string *rua, int *numero, string *bairro, string *cidade, string *estado, string *cep);
void preencheDadoPessoa(string *dado, string mascara);
int main(){
	string nome, telefone,rua,bairro,cidade,estado,cep;
	int numero;
	string mascara = "Nome";


	//------PESSOA 1-----
	preencheDadoPessoa(&nome,mascara);
	Pessoa *pessoa1 = new Pessoa(nome);

	mascara = "Telefone";
	preencheDadoPessoa(&telefone,mascara);
	pessoa1 -> setTelefone(telefone);

	cout << "Preencha o endereco da pessoa:"<<endl;
	preencherEndereco(&rua,&numero,&bairro,&cidade,&estado,&cep);
	Endereco *endereco = new Endereco(rua,numero,bairro,cidade,estado,cep);
	pessoa1 -> setEndereco(*endereco);

	//------------------
	cout << "\n\n";

	//------PESSOA 2-----
	mascara = "Nome";
	preencheDadoPessoa(&nome,mascara);

	mascara = "Telefone";
	preencheDadoPessoa(&telefone,mascara);

	cout << "Preencha o endereco da pessoa:"<<endl;
	preencherEndereco(&rua,&numero,&bairro,&cidade,&estado,&cep);
	Endereco *endereco2 = new Endereco(rua,numero,bairro,cidade,estado,cep);

	Pessoa *pessoa2 = new Pessoa(nome,*endereco2,telefone);

	//-------------------------------------------
	cout << "Pessoa 1:" << endl;
	cout << pessoa1->toString() << endl;
	//-------------------------------------------
	cout << "\nPessoa 2: "<<endl;
	cout << pessoa2->toString() << endl;

	return 0;
}
/*
 * * rua  (String),
 * número,
 * bairro,
 * cidade,
 * estado e
 * CEP  (String)
 */
void preencherEndereco(string *rua, int *numero, string *bairro, string *cidade, string *estado, string *cep){
	fflush(stdin);
	cout << "Rua: ";
	getline(cin,*rua);

	fflush(stdin);
	cout << "Numero: ";
	cin >> *numero;

	fflush(stdin);
	cout << "Bairro: ";
	getline(cin,*bairro);

	fflush(stdin);
	cout << "Cidade: ";
	getline(cin,*cidade);

	fflush(stdin);
	cout << "Estado: ";
	getline(cin,*estado);

	fflush(stdin);
	cout << "CEP: ";
	getline(cin,*cep);

	fflush(stdin);
}

void preencheDadoPessoa(string *dado, string mascara){
	fflush(stdin);
	cout << mascara << " da pessoa: ";
	getline(cin,*dado);
	fflush(stdin);
}
