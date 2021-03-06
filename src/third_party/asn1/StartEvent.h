/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_StartEvent_H_
#define	_StartEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* StartEvent */
	typedef struct StartEvent {
		BOOLEAN_t	 fillWithComputerPlayers;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} StartEvent_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_StartEvent;

#ifdef __cplusplus
}
#endif

#endif	/* _StartEvent_H_ */
#include <asn_internal.h>
