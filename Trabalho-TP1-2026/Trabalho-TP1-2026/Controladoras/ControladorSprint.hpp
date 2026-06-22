#ifndef CONTROLADORSPRINT_HPP
#define CONTROLADORSPRINT_HPP

#include "../Interfaces/IServicoSprints.hpp"

class ControladorSprint : public IServicoSprints {
public:
    bool salvarSprint(const PlanoSprint& planoSprint) override {
        if (planoSprint.getProjetoId().get() == "123456"){
            return true;
        }
        return false;
    }

    bool excluirSprint(const Codigo& sprintId) override {
        if (sprintId.get() == "123456"){
            return true;
        }
        return false;
    }

    PlanoSprint buscarSprint(const Codigo& sprintId) override {
        PlanoSprint sprintFicticio;
        sprintFicticio.setCodigo(sprintId);
        
        Tempo tempoSprint;
        tempoSprint.set("06/2030");
        sprintFicticio.setTempo(tempoSprint);

        return sprintFicticio;
    }
};

#endif