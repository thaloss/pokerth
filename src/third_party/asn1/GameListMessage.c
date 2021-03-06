/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "GameListMessage.h"

static asn_TYPE_member_t asn_MBR_gameListNotification_3[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct gameListNotification, choice.gameListNew),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameListNew,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListNew"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct gameListNotification, choice.gameListUpdate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameListUpdate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListUpdate"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct gameListNotification, choice.gameListPlayerJoined),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameListPlayerJoined,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListPlayerJoined"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct gameListNotification, choice.gameListPlayerLeft),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameListPlayerLeft,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListPlayerLeft"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct gameListNotification, choice.gameListAdminChanged),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameListAdminChanged,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListAdminChanged"
	},
};
static asn_TYPE_tag2member_t asn_MAP_gameListNotification_tag2el_3[] = {
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gameListNew at 203 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gameListUpdate at 204 */
	{ (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gameListPlayerJoined at 205 */
	{ (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gameListPlayerLeft at 206 */
	{ (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* gameListAdminChanged at 208 */
};
static asn_CHOICE_specifics_t asn_SPC_gameListNotification_specs_3 = {
	sizeof(struct gameListNotification),
	offsetof(struct gameListNotification, _asn_ctx),
	offsetof(struct gameListNotification, present),
	sizeof(((struct gameListNotification *)0)->present),
	asn_MAP_gameListNotification_tag2el_3,
	5,	/* Count of tags in the map */
	0,
	5	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gameListNotification_3 = {
	"gameListNotification",
	"gameListNotification",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_gameListNotification_3,
	5,	/* Elements count */
	&asn_SPC_gameListNotification_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GameListMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct GameListMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct GameListMessage, gameListNotification),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_gameListNotification_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameListNotification"
	},
};
static ber_tlv_tag_t asn_DEF_GameListMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GameListMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* gameId at 201 */
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* gameListNew at 203 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gameListUpdate at 204 */
	{ (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* gameListPlayerJoined at 205 */
	{ (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* gameListPlayerLeft at 206 */
	{ (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 } /* gameListAdminChanged at 208 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GameListMessage_specs_1 = {
	sizeof(struct GameListMessage),
	offsetof(struct GameListMessage, _asn_ctx),
	asn_MAP_GameListMessage_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GameListMessage = {
	"GameListMessage",
	"GameListMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GameListMessage_tags_1,
	sizeof(asn_DEF_GameListMessage_tags_1)
	/sizeof(asn_DEF_GameListMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_GameListMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_GameListMessage_tags_1)
	/sizeof(asn_DEF_GameListMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_GameListMessage_1,
	2,	/* Elements count */
	&asn_SPC_GameListMessage_specs_1	/* Additional specs */
};

