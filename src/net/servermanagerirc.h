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
/* Manager thread for the server, with irc bots. */

#ifndef _SERVERMANAGERIRC_H_
#define _SERVERMANAGERIRC_H_

#include <net/servermanager.h>

class ServerAdminBot;
class ServerLobbyBot;

class ServerManagerIrc : public ServerManager
{
public:
	ServerManagerIrc(ConfigFile &config, GuiInterface &gui, ServerMode mode, AvatarManager &avatarManager);
	virtual ~ServerManagerIrc();

	// Set the parameters.
	virtual void Init(unsigned serverPort, bool ipv6, ServerTransportProtocol proto, const std::string &logDir);

	// Main start function.
	virtual void RunAll();

	virtual void SignalTerminationAll();
	virtual bool JoinAll(bool wait);

	GuiInterface &GetGui();

private:

	boost::shared_ptr<ServerAdminBot> m_adminBot;
	boost::shared_ptr<ServerLobbyBot> m_lobbyBot;
};

#endif
