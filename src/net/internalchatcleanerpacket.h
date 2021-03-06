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
/* PokerTH chat cleaner packet. */

#ifndef _INTERNALCHATCLEANERPACKET_H_
#define _INTERNALCHATCLEANERPACKET_H_

#define CLEANER_PROTOCOL_VERSION		2
#define MAX_CLEANER_PACKET_SIZE			384

typedef struct ChatCleanerMessage ChatCleanerMessage_t;

class InternalChatCleanerPacket
{
public:
	InternalChatCleanerPacket();

	InternalChatCleanerPacket(ChatCleanerMessage_t *msg)
		: m_msg(msg) {
	}
	~InternalChatCleanerPacket();
	ChatCleanerMessage_t *GetMsg() {
		return m_msg;
	}
	ChatCleanerMessage_t **GetMsgPtr() {
		return &m_msg;
	}

private:
	ChatCleanerMessage_t *m_msg;
};

#endif

