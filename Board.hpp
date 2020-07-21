//
// Created by abdms on 21/07/2020.
//

#ifndef EX4_BOARD_HPP
#define EX4_BOARD_HPP
#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "DemoGame.hpp"

using namespace std;

class Board{
vector <vector<Soldier*>> m_board;
public:
    Board(int rows,int cols):m_board(rows,vector<Soldier*>(cols)){}
    Soldier*& operator [](pair<int,int> pr)
    {
        return m_board[pr.first][pr.second];
    }
    enum MoveDIR
    {
        Up,
        Down,
        Left,
        Right
    };
    void move(uint a,pair<int,int> pr,MoveDIR move)
    {
        int i=pr.first;
        int j=pr.second;
        std::pair <int,int> ans{i,j};
        // move the soldier in our vector then  s.make_move();
        Soldier* temp=m_board[i][j];
        /*
         * TODO : check for out of bounds & taking a place that is already reserved
         *
         *
         */
        switch(move)
        {
            case Up: m_board[i+1][j]=temp;
            ans.first++;
            break;
            case Down: m_board[i-1][j]=temp;
            ans.first--;
                break;
            case Right: m_board[i][j+1]=temp;
            ans.second++;
                break;
            case Left: m_board[i][j-1]=temp;
            ans.second--;
                break;


        }
        board[i][j]=NULL;
        temp.make_move(ans,m_board);




    }
    bool has_soldiers(uint player_id)
    {
        return true;
    }
};



#endif //EX4_BOARD_HPP
