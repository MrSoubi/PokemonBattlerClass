#include "PokemonBattlerClass.h"

int main()
{
    DndBattleTest();
}

void DndBattleTest() {
    Player* player = new Player();
    Monster* currentEnemy = NULL;

    bool playerTurn = true;

    while (player->IsAlive()) {
        if (currentEnemy == NULL) {
            currentEnemy = new Goblin();
        }

        if (playerTurn) {
            player->Attack(currentEnemy);
            playerTurn = false;
            currentEnemy->PrintStatus();
            if (!currentEnemy->IsAlive()) {
                currentEnemy = NULL;
                playerTurn = true;
            }
        }
        else if (!playerTurn && currentEnemy != NULL) {
            currentEnemy->Attack(player);
        }
        player->PrintStatus();

    }
}

void PokemonBattleTest() {
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