/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "GameStartMessage.h"

static asn_TYPE_member_t asn_MBR_gameStartMode_4[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct gameStartMode, choice.gameStartModeInitial),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameStartModeInitial,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameStartModeInitial"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct gameStartMode, choice.gameStartModeRejoin),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GameStartModeRejoin,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameStartModeRejoin"
	},
};
static asn_TYPE_tag2member_t asn_MAP_gameStartMode_tag2el_4[] = {
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gameStartModeInitial at 473 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gameStartModeRejoin at 475 */
};
static asn_CHOICE_specifics_t asn_SPC_gameStartMode_specs_4 = {
	sizeof(struct gameStartMode),
	offsetof(struct gameStartMode, _asn_ctx),
	offsetof(struct gameStartMode, present),
	sizeof(((struct gameStartMode *)0)->present),
	asn_MAP_gameStartMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gameStartMode_4 = {
	"gameStartMode",
	"gameStartMode",
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
	asn_MBR_gameStartMode_4,
	2,	/* Elements count */
	&asn_SPC_gameStartMode_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GameStartMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct GameStartMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct GameStartMessage, startDealerPlayerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startDealerPlayerId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct GameStartMessage, gameStartMode),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_gameStartMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameStartMode"
	},
};
static ber_tlv_tag_t asn_DEF_GameStartMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (22 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GameStartMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* gameId at 470 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 }, /* startDealerPlayerId at 471 */
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* gameStartModeInitial at 473 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* gameStartModeRejoin at 475 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GameStartMessage_specs_1 = {
	sizeof(struct GameStartMessage),
	offsetof(struct GameStartMessage, _asn_ctx),
	asn_MAP_GameStartMessage_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GameStartMessage = {
	"GameStartMessage",
	"GameStartMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GameStartMessage_tags_1,
	sizeof(asn_DEF_GameStartMessage_tags_1)
	/sizeof(asn_DEF_GameStartMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_GameStartMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_GameStartMessage_tags_1)
	/sizeof(asn_DEF_GameStartMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_GameStartMessage_1,
	3,	/* Elements count */
	&asn_SPC_GameStartMessage_specs_1	/* Additional specs */
};

