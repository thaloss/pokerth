/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_AskKickDeniedMessage_H_
#define	_AskKickDeniedMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum kickDeniedReason {
		kickDeniedReason_kickDeniedInvalidGameState	= 0,
		kickDeniedReason_kickDeniedNotPossible	= 1,
		 kickDeniedReason_kickDeniedTryAgainLater	= 2,
		    kickDeniedReason_kickDeniedAlreadyInProgress	= 3,
		       kickDeniedReason_kickDeniedInvalidPlayerId	= 4
	}
	               e_kickDeniedReason;

	/* AskKickDeniedMessage */
	typedef struct AskKickDeniedMessage {
		NonZeroId_t	 gameId;
		NonZeroId_t	 playerId;
		long	 kickDeniedReason;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} AskKickDeniedMessage_t;

	/* Implementation */
	/* extern asn_TYPE_descriptor_t asn_DEF_kickDeniedReason_4;	// (Use -fall-defs-global to expose) */
	extern asn_TYPE_descriptor_t asn_DEF_AskKickDeniedMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _AskKickDeniedMessage_H_ */
#include <asn_internal.h>
