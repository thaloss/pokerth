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
#ifndef GAMELOBBYDIALOGIMPL_H
#define GAMELOBBYDIALOGIMPL_H

#ifdef GUI_800x480
#include <ui_gamelobbydialog_800x480.h>
#else
#include <ui_gamelobbydialog.h>
#endif

#include <QtGui>
#include <QtCore>

#include <gamedata.h>
#include "createinternetgamedialogimpl.h"
#include "sdlplayer.h"
#include "gametableimpl.h"
#include <map>

class Session;
class ConfigFile;
class ChatTools;
class startWindowImpl;
class MyGameListSortFilterProxyModel;
class MyNickListSortFilterProxyModel;

/**
	@author FThauer FHammer <webmaster@pokerth.net>
*/

class gameLobbyDialogImpl: public QDialog, public Ui::gameLobbyDialog
{
	Q_OBJECT
public:
	gameLobbyDialogImpl(startWindowImpl *parent = 0, ConfigFile* = 0);

	~gameLobbyDialogImpl();

	void exec();

	ChatTools *getMyChat() {
		return myChat;
	}

	void setSession(boost::shared_ptr<Session> session);
	boost::shared_ptr<Session> getSession() {
		assert(mySession.get());
		return mySession;
	}

	void setMyW ( gameTableImpl* theValue ) {
		myW = theValue;
	}

public slots:

	void createGame();
	void joinGame();
	void joinAnyGame();
	void gameSelected(const QModelIndex &);
	void updateGameItem(QList <QStandardItem*>, unsigned gameId);
	void addGame(unsigned gameId);
	void updateGameMode(unsigned gameId, int newMode);
	void updateGameAdmin(unsigned gameId, unsigned adminPlayerId);
	void removeGame(unsigned gameId);
	void gameAddPlayer(unsigned gameId, unsigned playerId);
	void gameRemovePlayer(unsigned gameId, unsigned playerId);
	void playerJoinedLobby(unsigned playerId, QString playerName);
	void playerLeftLobby(unsigned playerId);
	void updateStats(ServerStats stats);
	void refreshGameStats();
	void refreshPlayerStats();
	void setCurrentGameName ( const QString& theValue ) {
		currentGameName = theValue;
	}
	QString getCurrentGameName() const {
		return currentGameName;
	}
	gameTableImpl* getMyW() const {
		return myW;
	}
	void checkPlayerQuantity();
	void blinkingStartButtonAnimation();
	void joinedNetworkGame(unsigned, QString, bool);
	void addConnectedPlayer(unsigned, QString, bool);
	void updatePlayer(unsigned, QString);
	void removePlayer(unsigned, QString);
	void newGameAdmin(unsigned, QString);
	void refreshConnectedPlayerAvatars();
	void playerSelected(QTreeWidgetItem*, QTreeWidgetItem*);
	void refresh(int actionID);
	void removedFromGame(int reason);
	void startGame();
	void leaveGame();
	void kickPlayer();
	void joinedGameDialogUpdate();
	void leftGameDialogUpdate();
	void updateDialogBlinds(const GameData &gameData);
	void clearDialog();
	void keyPressEvent(QKeyEvent * keyEvent);
	bool event(QEvent * event);
	void showGameDescription(bool show);
	void showWaitStartGameMsgBox();
	void hideWaitStartGameMsgBox();
	void stopWaitStartGameMsgBoxTimer();
	void joinAnyGameButtonRefresh();
	void reject();
	void closeEvent(QCloseEvent *event);
	void accept();
	void writeDialogSettings(int);
	void readDialogSettings();
	void changeGameListFilter(int);
	void changeNickListFilter(int);
	void changeGameListSorting();
	void registeredUserMode();
	void guestUserMode();
	void showNickListContextMenu(QPoint);
	void showGameListContextMenu(QPoint);
	void showConnectedPlayersContextMenu(QPoint);
	void invitePlayerToCurrentGame();
	void showInfoMsgBox();
	void showInvitationDialog(unsigned gameId, unsigned playerIdFrom);
	void chatInfoPlayerInvitation(unsigned gameId, unsigned playerIdWho, unsigned playerIdFrom);
	void chatInfoPlayerRejectedInvitation(unsigned gameId, unsigned playerIdWho, DenyGameInvitationReason reason);
	void putPlayerOnIgnoreList();
	bool playerIsOnIgnoreList(unsigned playerid);
	void searchForPlayerRegExpChanged();
	void showAutoStartTimer();
	void updateAutoStartTimer();
	void openPlayerStats1();
	void openPlayerStats2();
	QString getFullCountryString(QString);
	void closeAllChildDialogs();
	void reportBadGameName();

private:

	gameTableImpl* myW;
	startWindowImpl* myStartWindow;
	ConfigFile *myConfig;
	boost::shared_ptr<Session> mySession;
	createInternetGameDialogImpl *myCreateInternetGameDialog;
	QString currentGameName;
	unsigned myPlayerId;
	bool isGameAdministrator;
	bool inGame;
	bool guestMode;
	typedef std::map<QString, QString> CountryStringMap;
	CountryStringMap countryStringMap;

	QString myAppDataPath;
        MyMessageBox *waitStartGameMsgBox;
        MyMessageBox *waitRejoinStartGameMsgBox;
	myMessageDialogImpl *inviteOnlyInfoMsgBox;
	QTimer *waitStartGameMsgBoxTimer;
	QTimer *blinkingButtonAnimationTimer;
	QTimer *showInfoMsgBoxTimer;
	QTimer *autoStartTimer;
	bool blinkingButtonAnimationState;
	QColor defaultStartButtonColor;
	QColor defaultStartButtonTextColor;
	QColor disabledStartButtonColor;
	QColor disabledStartButtonTextColor;
	ChatTools *myChat;
	int keyUpCounter;
	QStandardItemModel *myGameListModel;
	QItemSelectionModel *myGameListSelectionModel;
	MyGameListSortFilterProxyModel *myGameListSortFilterProxyModel;
	QMenu *gameListContextMenu;
	QAction *gameListReportBadGameNameAction;
	QMenu *nickListContextMenu;
	QAction *nickListInviteAction;
	QAction *nickListIgnorePlayerAction;
	QMenu *nickListPlayerInfoSubMenu;
	QMenu *connectedPlayersListPlayerInfoSubMenu;
	QAction *nickListPlayerInGameInfo;
	QAction *nickListOpenPlayerStats1;
	QAction *nickListOpenPlayerStats2;
	int infoMsgToShowId;
	int currentInvitationGameId;
	bool inviteDialogIsCurrentlyShown;

	QStandardItemModel *myNickListModel;
	QItemSelectionModel *myNickListSelectionModel;
	MyNickListSortFilterProxyModel *myNickListSortFilterProxyModel;

	QLabel *autoStartTimerOverlay;
	int autoStartTimerCounter;
	int lastNickListFilterState;

protected:
	bool eventFilter(QObject *obj, QEvent *event);

};

#endif
