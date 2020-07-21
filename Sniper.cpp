//
// Created by abdms on 21/07/2020.
//

#include "Sniper.hpp"

 void Sniper::make_move(pair<int,int> current,vector <vector<Soldier*>> m_board)
 {
    int max_health=-1;
    Soldier* result;
     for (int i = 0; i <m_board.size() ; ++i) {
         for (int j = 0; j <m_board[0].size() ; ++j) {
             Soldier* target=m_board[i][j];
             if(target->getid()!=this->getid()){
                 if(target->getHealth()>max_health)
                 {
                     max_health=target->getHealth();
                     result=target;
                 }
             }
         }
     }
     result->setHealth(result->getHealth()-this->m_damage);
 }
