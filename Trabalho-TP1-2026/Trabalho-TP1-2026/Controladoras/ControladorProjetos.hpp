#ifndef CONTROLADORPROJETOS_HPP
#define CONTROLADOPROJETOS_HPP

#include "../Interfaces/IServicoProjetos.hpp"

class ControladorProjetos : public IServicoProjetos {
public:
    bool salvarProjeto(const Projeto& projeto) override {
        if (projeto.getEmail().get() == "admin@unb.br"){ // primeiro devolve objeto Email e para extrair o texto chamamos o metodo .get()
            return true;
        }
        return false;
    }

    bool excluirProjeto(const Codigo& projetoId) override {
        if (projetoId.get() == "123456"){
            return true;
        }
        return false;
    }

    Projeto buscarProjeto(const Codigo& projetoId) override {
        Projeto projetoFicticio; // cria objeto projeto em branco
        projetoFicticio.setCodigo(projetoId); // id no que foi passado em parametro

        Texto nomeFicticio; // cria um nome usando o dominio texto
        nomeFicticio.set("projeto ficticio de teste");
        projetoFicticio.setNome(nomeFicticio);

        return projetoFicticio;
    }
};

#endif