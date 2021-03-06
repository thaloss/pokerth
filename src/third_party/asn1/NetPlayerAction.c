/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "NetPlayerAction.h"

int
NetPlayerAction_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
                           asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
NetPlayerAction_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
	/* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
NetPlayerAction_free(asn_TYPE_descriptor_t *td,
                     void *struct_ptr, int contents_only) {
	NetPlayerAction_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
NetPlayerAction_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
                      int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	NetPlayerAction_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
NetPlayerAction_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                           void **structure, const void *bufptr, size_t size, int tag_mode) {
	NetPlayerAction_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
NetPlayerAction_encode_der(asn_TYPE_descriptor_t *td,
                           void *structure, int tag_mode, ber_tlv_tag_t tag,
                           asn_app_consume_bytes_f *cb, void *app_key) {
	NetPlayerAction_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
NetPlayerAction_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
                           void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	NetPlayerAction_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
NetPlayerAction_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
                           int ilevel, enum xer_encoder_flags_e flags,
                           asn_app_consume_bytes_f *cb, void *app_key) {
	NetPlayerAction_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_NetPlayerAction_value2enum_1[] = {
	{ 0,	10,	"actionNone" },
	{ 1,	10,	"actionFold" },
	{ 2,	11,	"actionCheck" },
	{ 3,	10,	"actionCall" },
	{ 4,	9,	"actionBet" },
	{ 5,	11,	"actionRaise" },
	{ 6,	11,	"actionAllIn" }
};
static unsigned int asn_MAP_NetPlayerAction_enum2value_1[] = {
	6,	/* actionAllIn(6) */
	4,	/* actionBet(4) */
	3,	/* actionCall(3) */
	2,	/* actionCheck(2) */
	1,	/* actionFold(1) */
	0,	/* actionNone(0) */
	5	/* actionRaise(5) */
};
static asn_INTEGER_specifics_t asn_SPC_NetPlayerAction_specs_1 = {
	asn_MAP_NetPlayerAction_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NetPlayerAction_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_NetPlayerAction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NetPlayerAction = {
	"NetPlayerAction",
	"NetPlayerAction",
	NetPlayerAction_free,
	NetPlayerAction_print,
	NetPlayerAction_constraint,
	NetPlayerAction_decode_ber,
	NetPlayerAction_encode_der,
	NetPlayerAction_decode_xer,
	NetPlayerAction_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NetPlayerAction_tags_1,
	sizeof(asn_DEF_NetPlayerAction_tags_1)
	/sizeof(asn_DEF_NetPlayerAction_tags_1[0]), /* 1 */
	asn_DEF_NetPlayerAction_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetPlayerAction_tags_1)
	/sizeof(asn_DEF_NetPlayerAction_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NetPlayerAction_specs_1	/* Additional specs */
};

