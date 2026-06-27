#include <iostream>
#include <string>
#include <stdexcept> 

#include "../../Controladoras/ControladorAutenticacao.hpp"
#include "../include/Email.hpp"
#include "../include/Senha.hpp"
#include "../include/Papel.hpp"
#include "../include/Texto.hpp"
#include "../include/Codigo.hpp"
#include "../include/Data.hpp"

#include "../../Entidades/Projeto.hpp"
#include "../../Entidades/PlanoSprint.hpp" 
#include "../../Entidades/HistoriaUsuario.hpp" 

using namespace std;

int main() {
    ControladorAutenticacao servicoAutenticacao;
    int opcaoGeral = 0;

    while (opcaoGeral != 3) {
        cout << "========================================" << endl;
        cout << "    SISTEMA DE GESTAO DE PROJETOS (TP1) " << endl;
        cout << "========================================" << endl;
        cout << "1. Entrar no Sistema (Login)" << endl;
        cout << "2. Rodar Testes de Fumaca (Entidades)" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcaoGeral;

        switch (opcaoGeral) {
            case 1: { // --- TELA DE LOGIN ---
                string entradaEmail, entradaSenha;
                
                cin.ignore();

                cout << "\n--- TELA DE LOGIN ---" << endl;
                cout << "Digite seu e-mail: ";
                getline(cin, entradaEmail);
                cout << "Digite sua senha: ";
                getline(cin, entradaSenha);

                try {
                    Email email;
                    Senha senha;
                    
                    email.set(entradaEmail);
                    senha.set(entradaSenha);

                    if (servicoAutenticacao.autenticar(email, senha)) {
                        cout << "\n[SUCESSO] Login aceito pelo simulador!" << endl;
                        cout << "Carregando ambiente principal...\n" << endl;
                    } else {
                        cout << "\n[ERRO] Credenciais rejeitadas pelo simulador." << endl;
                    }

                } catch (const invalid_argument& e) {
                    cout << "\n[ERRO DE VALIDACAO] " << e.what() << endl;
                }
                break;
            }

            case 2: { // --- TESTE DE FUMAÇA AUTOMATIZADO ---
                cout << "\n=== EXECUTANDO TESTE DE FUMACA DAS ENTIDADES ===" << endl;
                
                // --- 1. Testando Entidade Pessoa ---
                try {
                    Email e; Senha s; Papel p; Texto n;
                    e.set("usuario@unb.br");
                    s.set("Ab123456");
                    p.set("DESENVOLVEDOR");
                    n.set("Gian Mendes");

                    Pessoa pessoa;
                    pessoa.setEmail(e);
                    pessoa.setSenha(s);
                    pessoa.setPapel(p);
                    pessoa.setNome(n);
                    cout << "[OK] Entidade PESSOA criada e validada com sucesso." << endl;
                } catch (const invalid_argument& erro) {
                    cout << "[FALHA CRITICA] Pessoa valida falhou: " << erro.what() << endl;
                }

                // --- 2. Testando Entidade Projeto ---
                try {
                    Texto nomeProj;
                    Email emailProj;
                    Codigo codigoProj;
                    Data dataIni, dataFim;

                    nomeProj.set("Projeto TP1");
                    emailProj.set("gerente@unb.br");
                    codigoProj.set("123ABCXYZ"); // Exemplo de formato base de código
                    dataIni.set("01/01/2026");
                    dataFim.set("31/12/2026");

                    Projeto projeto;
                    projeto.setNome(nomeProj);
                    projeto.setEmail(emailProj);
                    projeto.setCodigo(codigoProj);
                    projeto.setDataInicio(dataIni);
                    projeto.setDataFim(dataFim);

                    cout << "[OK] Entidade PROJETO criada e validada com sucesso." << endl;
                } catch (const invalid_argument& erro) {
                    cout << "[FALHA CRITICA] Projeto valido falhou: " << erro.what() << endl;
                }

                // --- 3. Testando Demais Entidades (Instanciação Básica de Validação) ---
                try {
                    PlanoSprint sprint;
                    HistoriaUsuario historia;
                    
                    // Seus métodos set e get internos vão garantir que rodem isoladamente aqui
                    cout << "[OK] Entidades PLANO SPRINT e HISTORIA USUARIO instanciadas." << endl;
                } catch (const invalid_argument& erro) {
                    cout << "[FALHA CRITICA] Erro ao instanciar estruturas adicionais: " << erro.what() << endl;
                }

                // --- 4. Testando Captura de Erro Real (Cenário Inválido de Propósito) ---
                try {
                    cout << "Testando comportamento com dados invalidos de proposito..." << endl;
                    Senha senhaFraca;
                    senhaFraca.set("123"); // Isso DEVE disparar o throw
                    cout << "[FALHA] O sistema aceitou uma senha invalida no teste!" << endl;
                } catch (const invalid_argument& erro) {
                    cout << "[OK] Excecao controlada capturada com sucesso: " << erro.what() << endl;
                }

                cout << "=== FIM DOS TESTES UNITARIOS ===\n" << endl;
                break;
            }

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