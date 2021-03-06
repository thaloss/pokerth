/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_AllInShowCardsMessage_H_
#define	_AllInShowCardsMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Forward declarations */
	struct PlayerAllIn;

	/* AllInShowCardsMessage */
	typedef struct AllInShowCardsMessage {
		NonZeroId_t	 gameId;
		struct playersAllIn {
			A_SEQUENCE_OF(struct PlayerAllIn) list;

			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} playersAllIn;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} AllInShowCardsMessage_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_AllInShowCardsMessage;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PlayerAllIn.h"

#endif	/* _AllInShowCardsMessage_H_ */
#include <asn_internal.h>
