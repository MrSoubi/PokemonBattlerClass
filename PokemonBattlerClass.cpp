#include <iostream>
#include "GlobalHeader.h"
#include "Pokemon.h"

int main()
{
    Pokemon* JPP = new Pokemon("Jean-Pierre Pernaud", 20, 5);
    Pokemon* MCC = new Pokemon("Marie-Claire Chazal", 21, 5);

    while (JPP->IsAlive() && MCC->IsAlive()) {
        MCC->Attack(JPP);
        if (JPP->IsAlive()) {
            JPP->Attack(MCC);
        }

        MCC->PrintState();
        JPP->PrintState();
        std::cout << "----- END OF ROUND ! -----" << endl;;
    }
}