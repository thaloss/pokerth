/*****************************************************************************
 * PokerTH - The open source texas holdem engine                             *
 * Copyright (C) 2006-2011 Felix Hammer, Florian Thauer, Lothar May          *
 *                                                                           *
 * This program is free software: you can redistribute it and/or modify      *
 * it under the terms of the GNU Affero General Public License as            *
 * published by the Free Software Foundation, either version 3 of the        *
 * License, or (at your option) any later version.                           *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU Affero General Public License for more details.                       *
 *                                                                           *
 * You should have received a copy of the GNU Affero General Public License  *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.     *
 *****************************************************************************/

#ifndef LOCALBOARD_H
#define LOCALBOARD_H

#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>

#include <boardinterface.h>

class PlayerInterface;
class HandInterface;


class LocalBoard : public BoardInterface
{
public:
	LocalBoard(unsigned dealerPosition);
	~LocalBoard();

	void setPlayerLists(PlayerList, PlayerList, PlayerList);

	void setMyCards(int* theValue) {
		int i;
		for(i=0; i<5; i++) myCards[i] = theValue[i];
	}
	void getMyCards(int* theValue) {
		int i;
		for(i=0; i<5; i++) theValue[i] = myCards[i];
	}

	void setAllInCondition(bool theValue) {
		allInCondition = theValue;
	}
	void setLastActionPlayerID(unsigned theValue) {
		lastActionPlayerID = theValue;
	}

	int getPot() const {
		return pot;
	}
	void setPot(int theValue) {
		pot = theValue;
	}
	int getSets() const {
		return sets;
	}
	void setSets(int theValue) {
		sets = theValue;
	}

	void collectSets() ;
	void collectPot() ;

	void distributePot();
	void determinePlayerNeedToShowCards();

	std::list<unsigned> getWinners() const {
		return winners;
	}
	void setWinners(const std::list<unsigned> &w) {
		winners = w;
	}

	std::list<unsigned> getPlayerNeedToShowCards() const {
		return playerNeedToShowCards;
	}
	void setPlayerNeedToShowCards(const std::list<unsigned> &p) {
		playerNeedToShowCards = p;
	}


private:
	PlayerList seatsList;
	PlayerList activePlayerList;
	PlayerList runningPlayerList;

	std::list<unsigned> winners;
	std::list<unsigned> playerNeedToShowCards;

	int myCards[5];
	int pot;
	int sets;
	unsigned dealerPosition;
	bool allInCondition;
	unsigned lastActionPlayerID;

};

#endif
