/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_EndOfHandMessage_H_
#define	_EndOfHandMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include "EndOfHandShowCards.h"
#include "EndOfHandHideCards.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum endOfHandType_PR {
		endOfHandType_PR_NOTHING,	/* No components present */
		endOfHandType_PR_endOfHandShowCards,
		endOfHandType_PR_endOfHandHideCards,
		/* Extensions may appear below */

	}
	endOfHandType_PR;

	/* EndOfHandMessage */
	typedef struct EndOfHandMessage {
		NonZeroId_t	 gameId;
		struct endOfHandType {
			endOfHandType_PR present;
			union EndOfHandMessage__endOfHandType_u {
				EndOfHandShowCards_t	 endOfHandShowCards;
				EndOfHandHideCards_t	 endOfHandHideCards;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;

			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} endOfHandType;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} EndOfHandMessage_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_EndOfHandMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _EndOfHandMessage_H_ */
#include <asn_internal.h>
