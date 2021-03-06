/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_RejectGameInvReason_H_
#define	_RejectGameInvReason_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Dependencies */
	typedef enum RejectGameInvReason {
		RejectGameInvReason_no	= 0,
		 RejectGameInvReason_busy	= 1
	}
	                               e_RejectGameInvReason;

	/* RejectGameInvReason */
	typedef long	 RejectGameInvReason_t;

	/* Implementation */
	extern asn_TYPE_descriptor_t asn_DEF_RejectGameInvReason;
	asn_struct_free_f RejectGameInvReason_free;
	asn_struct_print_f RejectGameInvReason_print;
	asn_constr_check_f RejectGameInvReason_constraint;
	ber_type_decoder_f RejectGameInvReason_decode_ber;
	der_type_encoder_f RejectGameInvReason_encode_der;
	xer_type_decoder_f RejectGameInvReason_decode_xer;
	xer_type_encoder_f RejectGameInvReason_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _RejectGameInvReason_H_ */
#include <asn_internal.h>
