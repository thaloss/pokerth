/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_YourActionRejectedMessage_H_
#define	_YourActionRejectedMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "NetGameState.h"
#include "NetPlayerAction.h"
#include "AmountOfMoney.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum rejectionReason {
		rejectionReason_rejectedInvalidGameState	= 1,
		   rejectionReason_rejectedNotYourTurn	= 2,
		   rejectionReason_rejectedActionNotAllowed	= 3
	}
	           e_rejectionReason;

	/* YourActionRejectedMessage */
	typedef struct YourActionRejectedMessage {
		NonZeroId_t	 gameId;
		NetGameState_t	 gameState;
		NetPlayerAction_t	 yourAction;
		AmountOfMoney_t	 yourRelativeBet;
		long	 rejectionReason;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} YourActionRejectedMessage_t;

	/* Implementation */
	/* extern asn_TYPE_descriptor_t asn_DEF_rejectionReason_6;	// (Use -fall-defs-global to expose) */
	extern asn_TYPE_descriptor_t asn_DEF_YourActionRejectedMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _YourActionRejectedMessage_H_ */
#include <asn_internal.h>
