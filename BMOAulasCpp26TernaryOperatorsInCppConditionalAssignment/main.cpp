//
//  main.cpp
//  BMOAulasCpp26TernaryOperatorsInCppConditionalAssignment
//
//  Created by Breno Medeiros on 10/06/21.
//

#include <iostream>
#include <string>

//OperadorTernario(TernaryOperator) é um operador que (assim como '+', '-', '/' e '*', exceto pela diferença que todos esses 4 que citei sao
// OperadoresBinarios[que recebem 2 argumentos para retornar algo], e já so OpenadoresTernarios) tem 3 argumentos para retornar algo. Por ex:
//      int x = (10>5 ? 10 : 5);

static int s_Level = 6;
static int s_Speed = 2;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //Esse If-Else ...
    if (s_Level>5) {
        s_Speed=10;
    } else {
        s_Speed=5;
    }
    //...equivale a esse OperadorTernario:
    s_Speed = (s_Level>5 ? 10 : 5);
    
    
    //O OperadorTernario na linha abaixo...
    std::string rank = s_Level>10 ? "Mestre" : "Estagiario";
    //...é mais rapido do que o codigo abaixo, pois ...
    std::string outroRank; //...essa linha esta instanciando essa variavel como string vazia.
    if (s_Level>5) {
        outroRank = "Mestre";
    } else {
        outroRank = "Estagiario";
    }
    
    //Minha opiniao: Nao ha necessidade de entupir em uma linha com o ifelse, e alem disso OperadorTernario nao escalam(ou seja, se no meio
    // do if ou do else eu preciasar colocar mais uma linha de codigo terei que ter retrabalho[desfazer isso para reescrever tudo como ifElse]),
    // se nao olha como o codigo fica ilegivel/complicado:
    s_Speed = ((s_Level>5 && s_Level<100) ? (s_Level>10 ? 15 : 10) : 5);
    
    std::cout << s_Speed << std::endl;
    return 0;
}
