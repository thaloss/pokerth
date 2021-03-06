/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ReportGameMessage_H_
#define	_ReportGameMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* ReportGameMessage */
	typedef struct ReportGameMessage {
		NonZeroId_t	 reportedGameId;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ReportGameMessage_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_ReportGameMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportGameMessage_H_ */
#include <asn_internal.h>
