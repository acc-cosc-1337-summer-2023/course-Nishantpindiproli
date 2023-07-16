#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::cout; using std::cin; using std::string; using std::vector;
using std::unique_ptr; using std::make_unique;

int main() 
{
	// TicTacToe game;
	string first_player;
	char user_choice = 'y';
	unique_ptr<TicTacToe> game;

	do
	{

		auto game_type = 0;

		cout<<"Which size board, 3 or 4?";
		cin>>game_type;


	  	if(game_type == 3)
		{
			game = std::make_unique<TicTacToe3>();
		}
		else
		{
			game = std::make_unique<TicTacToe4>();
		} 

		cout<<"Enter first player: ";
		
		cin>>first_player;

		if((first_player != "X") && (first_player != "O"))
		{
			do
			{
				cout<<"Please enter first player, X or O: ";
				cin>>first_player;
			}while((first_player != "X") && (first_player != "O"));
		}

		game->start_game(first_player); // . changed to ->

		int position;

		while(!game->game_over()) // . changed to ->
		{
			cout<<"Enter a position, 1-";
			if (game_type == 3)
			{
				cout<<"9";
			}
			else
			{
				cout<<"16";
			}
			cin>>position;
			game->mark_board(position); // . changed to ->
			game->display_board();		// . changed to ->
		}

		if (game->get_winner() == "C") // . changed to ->
        {
            cout<<"It's a tie"<<"\n";
        }
        else
        {
            cout<<"The winner is: "<<game->get_winner()<<"\n"; // . changed to ->
        }

		cout<<"Play again? enter y or Y";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}
