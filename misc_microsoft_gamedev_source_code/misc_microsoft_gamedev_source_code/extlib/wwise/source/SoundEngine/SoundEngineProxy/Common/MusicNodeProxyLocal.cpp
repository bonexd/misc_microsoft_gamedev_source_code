/***********************************************************************
  The content of this file includes source code for the sound engine
  portion of the AUDIOKINETIC Wwise Technology and constitutes "Level
  Two Source Code" as defined in the Source Code Addendum attached
  with this file.  Any use of the Level Two Source Code shall be
  subject to the terms and conditions outlined in the Source Code
  Addendum and the End User License Agreement for Wwise(R).

  Version: v2008.2.1  Build: 2821
  Copyright (c) 2006-2008 Audiokinetic Inc.
 ***********************************************************************/


#include "stdafx.h"

#include "MusicNodeProxyLocal.h"
#include "AkMusicNode.h"

#ifdef WIN32
	#ifdef _DEBUG
		#define new DEBUG_NEW
	#endif
#endif

void MusicNodeProxyLocal::MeterInfo(
		bool in_bIsOverrideParent,
        const AkMeterInfo& in_MeterInfo
        )
{
	CAkMusicNode* pMusicNode = static_cast<CAkMusicNode*>( GetIndexable() );
	if( pMusicNode )
	{
		pMusicNode->MeterInfo( in_bIsOverrideParent ? &in_MeterInfo : NULL );
	}
}

void MusicNodeProxyLocal::SetStingers( 
		CAkStinger* in_pStingers, 
		AkUInt32 in_NumStingers
		)
{
	CAkMusicNode* pMusicNode = static_cast<CAkMusicNode*>( GetIndexable() );
	if( pMusicNode )
	{
		pMusicNode->SetStingers( in_pStingers, in_NumStingers );
	}
}

