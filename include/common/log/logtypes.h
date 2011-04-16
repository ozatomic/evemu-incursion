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
	Author:		Zhur
*/

#ifndef LOG_CATEGORY
#define LOG_CATEGORY(name)
#endif
#ifndef LOG_TYPE
#define LOG_TYPE(cat, type, default_value, str)
#endif
#ifndef ENABLED
#define ENABLED true
#endif
#ifndef DISABLED
#define DISABLED false
#endif

/*                                                                              
 * Recommended log level names/ordering:
 *  fatal error
 *  error
 *  warning
 *  debug
 *  success
 *  trace
 *
*/

LOG_CATEGORY( NET )
LOG_TYPE( NET, PRES_ERROR, ENABLED, "PresError" )
LOG_TYPE( NET, PRES_DEBUG, DISABLED, "PresDebug" )
LOG_TYPE( NET, PRES_TRACE, DISABLED, "PresTrace" )
LOG_TYPE( NET, PRES_REP, DISABLED, "PresRep" )
LOG_TYPE( NET, PRES_RAW, DISABLED, "PresRaw" )
LOG_TYPE( NET, PRES_REP_OUT, DISABLED, "PresOut" )
LOG_TYPE( NET, PRES_RAW_OUT, DISABLED, "RawOut" )
LOG_TYPE( NET, MARSHAL_ERROR, ENABLED, "MarshalError" )
LOG_TYPE( NET, MARSHAL_TRACE, DISABLED, "MarshalTrace" )
LOG_TYPE( NET, UNMARSHAL_TRACE, DISABLED, "UnmarshalTrace" )
LOG_TYPE( NET, UNMARSHAL_BUFHEX, DISABLED, "UnmarshalHex" )
LOG_TYPE( NET, UNMARSHAL_ERROR, ENABLED, "UnmarshalError" )
LOG_TYPE( NET, ZEROINFL, DISABLED, "0Inflate" )
LOG_TYPE( NET, ZEROCOMP, DISABLED, "0Compress" )
LOG_TYPE( NET, PACKET_ERROR, ENABLED, "PacketError" )
LOG_TYPE( NET, PACKET_WARNING, DISABLED, "PacketWarning" )
LOG_TYPE( NET, DISPATCH_ERROR, ENABLED, "NetDispatch" )

LOG_CATEGORY( DEBUG )
LOG_TYPE( DEBUG, DEBUG, ENABLED, "Debug" )

LOG_CATEGORY( COLLECT )
LOG_TYPE( COLLECT, MESSAGE, DISABLED, "Message" )
LOG_TYPE( COLLECT, ERROR, ENABLED, "Error" )
LOG_TYPE( COLLECT, ERROR_DETAIL, ENABLED, "ErrorDetail" )
LOG_TYPE( COLLECT, TCP, DISABLED, "TCP" )
LOG_TYPE( COLLECT, RAW_HEX, DISABLED, "RawHex" )
LOG_TYPE( COLLECT, PYREP_DUMP, DISABLED, "PyRep" )
LOG_TYPE( COLLECT, PACKET_DUMP, DISABLED, "PacketDump" )
LOG_TYPE( COLLECT, PACKET_SRC, DISABLED, "PacketSrc" )
LOG_TYPE( COLLECT, PACKET_DEST, DISABLED, "PacketDest" )
LOG_TYPE( COLLECT, CALL_SUMMARY, ENABLED, "CallSummary" )
LOG_TYPE( COLLECT, DESTINY, DISABLED, "Destiny" )
LOG_TYPE( COLLECT, DESTINY_REP, DISABLED, "Destiny" )
LOG_TYPE( COLLECT, DESTINY_HEX, DISABLED, "Destiny" )
LOG_TYPE( COLLECT, CALL_DUMP, DISABLED, "CallDump" )
LOG_TYPE( COLLECT, NOTIFY_SUMMARY, DISABLED, "NotifySummary" )
LOG_TYPE( COLLECT, NOTIFY_DUMP, DISABLED, "NotifyDump" )
LOG_TYPE( COLLECT, OTHER_DUMP, DISABLED, "OtherDump" )
LOG_TYPE( COLLECT, CALL_XML, DISABLED, "CallReqXML" )
LOG_TYPE( COLLECT, CALLRSP_XML, DISABLED, "CallRspXML" )
LOG_TYPE( COLLECT, NOTIFY_XML, DISABLED, "NotifyXML" )
LOG_TYPE( COLLECT, MISC_XML, DISABLED, "MiscXML" )
LOG_TYPE( COLLECT, CALLRSP_SQL, DISABLED, "CallRspSQL" )

LOG_CATEGORY( SERVICE )
LOG_TYPE( SERVICE, ERROR, ENABLED, "SvcError" )
LOG_TYPE( SERVICE, WARNING, DISABLED, "SvcWarning" )
LOG_TYPE( SERVICE, CALLS, DISABLED, "SvcCall" )
LOG_TYPE( SERVICE, MESSAGE, DISABLED, "SvcMessage" )
LOG_TYPE( SERVICE, CACHE, DISABLED, "SvcCache" )
LOG_TYPE( SERVICE, CACHE_DUMP, DISABLED, "SvcCache" )
LOG_TYPE( SERVICE, CALL_TRACE, DISABLED, "SvcCallTrace" )

LOG_CATEGORY( SPAWN )
LOG_TYPE( SPAWN, ERROR,   ENABLED, "Error" )
LOG_TYPE( SPAWN, WARNING, DISABLED, "Warning" )
LOG_TYPE( SPAWN, MESSAGE, DISABLED, "Message" )
LOG_TYPE( SPAWN, POP, DISABLED, "SpawnPop" )
LOG_TYPE( SPAWN, DEPOP, DISABLED, "SpawnDepop" )

LOG_CATEGORY( ITEM )
LOG_TYPE( ITEM, ERROR,   ENABLED, "Error" )
LOG_TYPE( ITEM, WARNING, DISABLED, "Warning" )
LOG_TYPE( ITEM, MESSAGE, DISABLED, "Message" )
LOG_TYPE( ITEM, DEBUG, DISABLED, "Debug" )
LOG_TYPE( ITEM, TRACE, DISABLED, "Trace" )

LOG_CATEGORY( NPC )
LOG_TYPE( NPC, ERROR,   ENABLED, "Error" )
LOG_TYPE( NPC, WARNING, DISABLED, "Warning" )
LOG_TYPE( NPC, MESSAGE, DISABLED, "Message" )
LOG_TYPE( NPC, TRACE, DISABLED, "Trace" )
LOG_TYPE( NPC, AI_TRACE, DISABLED, "AITrace" )

LOG_CATEGORY( AGENT )
LOG_TYPE( AGENT, ERROR,   ENABLED, "Error" )
LOG_TYPE( AGENT, WARNING, DISABLED, "Warning" )
LOG_TYPE( AGENT, MESSAGE, DISABLED, "Message" )
LOG_TYPE( AGENT, TRACE, DISABLED, "Trace" )

LOG_CATEGORY( MARKET )
LOG_TYPE( MARKET, ERROR,   ENABLED, "Error" )
LOG_TYPE( MARKET, WARNING, DISABLED, "Warning" )
LOG_TYPE( MARKET, MESSAGE, DISABLED, "Message" )
LOG_TYPE( MARKET, DEBUG, DISABLED, "Debug" )
LOG_TYPE( MARKET, TRACE, DISABLED, "Trace" )

LOG_CATEGORY( MINING )
LOG_TYPE( MINING, ERROR,   ENABLED, "Error" )
LOG_TYPE( MINING, WARNING, DISABLED, "Warning" )
LOG_TYPE( MINING, MESSAGE, DISABLED, "Message" )
LOG_TYPE( MINING, DEBUG, DISABLED, "Debug" )
LOG_TYPE( MINING, TRACE, DISABLED, "Trace" )

LOG_CATEGORY( DESTINY )
LOG_TYPE( DESTINY, ERROR,   ENABLED, "Error" )
LOG_TYPE( DESTINY, WARNING, DISABLED, "Warning" )
LOG_TYPE( DESTINY, MESSAGE, DISABLED, "Message" )
LOG_TYPE( DESTINY, DEBUG, DISABLED, "Debug" )
LOG_TYPE( DESTINY, TRACE, DISABLED, "Trace" )
LOG_TYPE( DESTINY, BUBBLE_DEBUG, DISABLED, "BubbleDebug" )
LOG_TYPE( DESTINY, BUBBLE_TRACE, DISABLED, "BubbleTrace" )
LOG_TYPE( DESTINY, UPDATES, DISABLED, "Update" )

LOG_CATEGORY( PHYSICS )
LOG_TYPE( PHYSICS, ERROR, ENABLED, "PhysicsError" )
LOG_TYPE( PHYSICS, MESSAGE, DISABLED, "PhysicsMessage" )
LOG_TYPE( PHYSICS, TRACE, DISABLED, "Physics" )
LOG_TYPE( PHYSICS, TRACEPOS, DISABLED, "Physics" )

LOG_CATEGORY( COMMON )
LOG_TYPE( COMMON, ERROR,   ENABLED, "Error" )
LOG_TYPE( COMMON, WARNING, DISABLED, "Warning" )
LOG_TYPE( COMMON, MESSAGE, DISABLED, "Message" )
LOG_TYPE( COMMON, THREADS, DISABLED, "Threads" )
LOG_TYPE( COMMON, PYREP, DISABLED, "PyRep" )

LOG_CATEGORY( SERVER )
LOG_TYPE( SERVER, INIT_ERR, ENABLED, "ServerInitError" )
LOG_TYPE( SERVER, INIT, DISABLED, "ServerInit" )
LOG_TYPE( SERVER, CLIENTS, DISABLED, "ServerClients" )
LOG_TYPE( SERVER, SHUTDOWN, DISABLED, "ServerShutdown" )

LOG_CATEGORY( COMMAND )
LOG_TYPE( COMMAND, ERROR, ENABLED, "CmdError" )
LOG_TYPE( COMMAND, MESSAGE, DISABLED, "Cmd" )

LOG_CATEGORY( SHIP )
LOG_TYPE( SHIP, ERROR, ENABLED, "CmdError" )
LOG_TYPE( SHIP, MODULE_TRACE, DISABLED, "ModTrace" )
LOG_TYPE( SHIP, MODULE_AGGREGATE, DISABLED, "ModAgg" )

LOG_CATEGORY( TARGET )
LOG_TYPE( TARGET, ERROR, ENABLED, "TargetError" )
LOG_TYPE( TARGET, DEBUG, DISABLED, "TargetTrace" )
LOG_TYPE( TARGET, TRACE, DISABLED, "TargetTrace" )

LOG_CATEGORY( LSC )
LOG_TYPE( LSC, ERROR, ENABLED, "LSCError" )
LOG_TYPE( LSC, MESSAGE, DISABLED, "LSC" )
LOG_TYPE( LSC, CHANNELS, DISABLED, "LSCChan" )

LOG_CATEGORY( CLIENT )
LOG_TYPE( CLIENT, ERROR, ENABLED, "ClientError" )
LOG_TYPE( CLIENT, MESSAGE, DISABLED, "ClientMessage" )
LOG_TYPE( CLIENT, CALL_REP, DISABLED, "ClientCallRep" )
LOG_TYPE( CLIENT, CALL_DUMP, DISABLED, "ClientCallDump" )
LOG_TYPE( CLIENT, IN_ALL, DISABLED, "InAll" )
LOG_TYPE( CLIENT, NOTIFY_REP, DISABLED, "NotifyRep" )
LOG_TYPE( CLIENT, NOTIFY_DUMP, DISABLED, "NotifyDump" )
LOG_TYPE( CLIENT, SESSION, DISABLED, "Session" )
LOG_TYPE( CLIENT, TRACE, DISABLED, "Trace" )
LOG_TYPE( CLIENT, TEXT, DISABLED, "ClientText" )

LOG_CATEGORY( CCLIENT )
LOG_TYPE( CCLIENT, ERROR, ENABLED, "Error" )
LOG_TYPE( CCLIENT, INIT_ERR, ENABLED, "InitError" )
LOG_TYPE( CCLIENT, INIT, DISABLED, "Init" )
LOG_TYPE( CCLIENT, MESSAGE, DISABLED, "Message" )
LOG_TYPE( CCLIENT, CLIENTS, DISABLED, "Clients" )
LOG_TYPE( CCLIENT, SHUTDOWN, DISABLED, "Shutdown" )
LOG_TYPE( CCLIENT, IN_ALL_DUMP, DISABLED, "InAll" )
LOG_TYPE( CCLIENT, IN_DUMP, DISABLED, "In" )
LOG_TYPE( CCLIENT, OUT_ALL_DUMP, DISABLED, "OutAll" )
LOG_TYPE( CCLIENT, SESSION, DISABLED, "Session" )
LOG_TYPE( CCLIENT, BINDS, DISABLED, "Binds" )

LOG_CATEGORY( DATABASE )
LOG_TYPE( DATABASE, MESSAGE, DISABLED, "DBMessage" )
LOG_TYPE( DATABASE, ERROR, ENABLED, "DBError" )
LOG_TYPE( DATABASE, QUERIES, DISABLED, "DBQuery" )
LOG_TYPE( DATABASE, RESULTS, DISABLED, "DBResult" )
LOG_TYPE( DATABASE, ALL_ERRORS, ENABLED, "DBAllErrors" )
LOG_TYPE( DATABASE, PACKED, DISABLED, "DBPacked" )


#undef LOG_TYPE
#undef LOG_CATEGORY
#undef ENABLED
#undef DISABLED
