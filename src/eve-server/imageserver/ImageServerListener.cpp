/*
	------------------------------------------------------------------------------------
	LICENSE:
	------------------------------------------------------------------------------------
	This file is part of EVEmu: EVE Online Server Emulator
	Copyright 2006 - 2011 The EVEmu Team
	For the latest information visit http://evemu.org
	------------------------------------------------------------------------------------
	This program is free software; you can redistribute it and/or modify it under
	the terms of the GNU Lesser General Public License as published by the Free Software
	Foundation; either version 2 of the License, or (at your option) any later
	version.

	This program is distributed in the hope that it will be useful, but WITHOUT
	ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
	FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public License along with
	this program; if not, write to the Free Software Foundation, Inc., 59 Temple
	Place - Suite 330, Boston, MA 02111-1307, USA, or go to
	http://www.gnu.org/copyleft/lesser.txt.
	------------------------------------------------------------------------------------
	Author:		caytchen
*/

#include "EVEServerPCH.h"

ImageServerListener::ImageServerListener(asio::io_service& io)
{
	_acceptor = new asio::ip::tcp::acceptor(io, asio::ip::tcp::endpoint(asio::ip::tcp::v4(), sConfig.net.port + 1));
	sLog.Log("image server", "listening on port %i", (sConfig.net.port + 1));
}

ImageServerListener::~ImageServerListener()
{
	delete _acceptor;
}

void ImageServerListener::StartAccept()
{

}

void ImageServerListener::HandleAccept(std::shared_ptr<ImageServerConnection> connection)
{

}