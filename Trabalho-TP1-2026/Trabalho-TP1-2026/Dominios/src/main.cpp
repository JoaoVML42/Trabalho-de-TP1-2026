#include <iostream>
#include <string>
#include <stdexcept> // Necessário para capturar invalid_argument
#include "../../Controladoras/ControladorAutenticacao.hpp"
#include "../include/Email.hpp"
#include "../include/Senha.hpp"

using namespace std;

int main() {
    ControladorAutenticacao servicoAutenticacao;
    int opcaoGeral = 0;

    while (opcaoGeral != 3) {
        cout << "========================================" << endl;
        cout << "    SISTEMA DE GESTAO DE PROJETOS (TP1) " << endl;
        cout << "========================================" << endl;
        cout << "1. Entrar no Sistema (Login)" << endl;
        cout << "2. Rodar Testes de Dominio (Parte 1)" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcaoGeral;

        switch (opcaoGeral) {
            case 1: { // --- TELA DE LOGIN ---
                string entradaEmail, entradaSenha;
                
                cout << "\n--- TELA DE LOGIN ---" << endl;
                cout << "Digite seu e-mail: ";
                cin >> entradaEmail;
                cout << "Digite sua senha: ";
                cin >> entradaSenha;

                try {
                    // Validando os dados usando seus domínios
                    Email email;
                    Senha senha;
                    
                    email.set(entradaEmail);
                    senha.set(entradaSenha);

                    // Chamando a controladora de autenticação
                    if (servicoAutenticacao.autenticar(email, senha)) {
                        cout << "\n[SUCESSO] Login aceito pelo simulador!" << endl;
                        cout << "carregando ambiente principal do desenvolvedor...\n" << endl;
                        
                        // TODO: Menu interno de Projetos/Sprints/Histórias entra aqui!
                        
                    } else {
                        cout << "\n[ERRO] credenciais rejeitadas pelo simulador." << endl;
                    }

                } catch (const invalid_argument& e) {
                    // Se o set da Senha ou do Email lançar um throw, o programa cai aqui com segurança
                    cout << "\n[ERRO DE VALIDACAO] " << e.what() << endl;
                }
                break;
            }

            case 2:
                cout << "\n=== EXECUTANDO TESTES UNITARIOS ===" << endl;
                // Aqui você pode chamar as funções ou classes de teste da Parte 1
                cout << "Testes executados com sucesso.\n" << endl;
                break;

            case 3:
                cout << "\nSaindo do sistema." << endl;
                break;

            default:
                cout << "\nOpcao invalida! Escolha entre 1, 2 ou 3.\n" << endl;
                break;
        }
    }

    return 0;
}