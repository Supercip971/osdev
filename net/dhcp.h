// ------------------------------------------------------------------------------------------------
// net/dhcp.h
// ------------------------------------------------------------------------------------------------

#pragma once

#include "net/intf.h"

// ------------------------------------------------------------------------------------------------
void DhcpRecv(NetIntf *intf, const NetBuf *pkt);
void DhcpDiscover(NetIntf *intf);

void DhcpPrint(const NetBuf *pkt);
