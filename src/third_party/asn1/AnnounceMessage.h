/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_AnnounceMessage_H_
#define	_AnnounceMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Version.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum serverType {
		serverType_serverTypeLAN	= 0,
		   serverType_serverTypeInternetNoAuth	= 1,
		   serverType_serverTypeInternetAuth	= 2
	}
	           e_serverType;

	/* AnnounceMessage */
	typedef struct AnnounceMessage {
		Version_t	 protocolVersion;
		Version_t	 latestGameVersion;
		long	 latestBetaRevision;
		long	 serverType;
		long	 numPlayersOnServer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */

		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} AnnounceMessage_t;

	/* Implementation */
	/* extern asn_TYPE_descriptor_t asn_DEF_serverType_5;	// (Use -fall-defs-global to expose) */
	extern asn_TYPE_descriptor_t asn_DEF_AnnounceMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _AnnounceMessage_H_ */
#include <asn_internal.h>
