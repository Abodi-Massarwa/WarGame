//
// Created by abdms on 21/07/2020.
//

#include <vector>
#include "FootSoldier.hpp"

//FootSoldier::FootSoldier(int id,int dmg=s_damage,int hlth=s_health) {}
 void FootSoldier::make_move(pair<int,int> current,vector <vector<Soldier*>>& m_board)
 {
    Soldier* target=find_soldier(current,m_board);
    target->setHealth(target->getHealth()-this->m_damage);
 }



Soldier *FootSoldier::find_soldier(pair<int,int> current,vector<vector<Soldier *>>& m_board) {


    Soldier* target;
    Soldier* result;
    double min_distance=std::numeric_limits<double>::infinity();
    for (int i = 0; i <m_board.size() ; ++i) {
        for (int j = 0; j <m_board[0].size() ; ++j) {
            target=m_board[i][j];
            if(target!= NULL) {
                if (target->getid() != this->getid()) {
                    double distance = sqrt(pow(i - current.first, 2) + pow(j - current.second, 2));
                    if (distance < min_distance) {
                        min_distance = distance;
                        result = target;
                    }
                }
            }
        }
    }
return result;
}
