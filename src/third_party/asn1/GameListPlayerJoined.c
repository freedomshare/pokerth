/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "GameListPlayerJoined.h"

static asn_TYPE_member_t asn_MBR_GameListPlayerJoined_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GameListPlayerJoined, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
};
static ber_tlv_tag_t asn_DEF_GameListPlayerJoined_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GameListPlayerJoined_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 } /* playerId at 221 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GameListPlayerJoined_specs_1 = {
	sizeof(struct GameListPlayerJoined),
	offsetof(struct GameListPlayerJoined, _asn_ctx),
	asn_MAP_GameListPlayerJoined_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GameListPlayerJoined = {
	"GameListPlayerJoined",
	"GameListPlayerJoined",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GameListPlayerJoined_tags_1,
	sizeof(asn_DEF_GameListPlayerJoined_tags_1)
		/sizeof(asn_DEF_GameListPlayerJoined_tags_1[0]), /* 1 */
	asn_DEF_GameListPlayerJoined_tags_1,	/* Same as above */
	sizeof(asn_DEF_GameListPlayerJoined_tags_1)
		/sizeof(asn_DEF_GameListPlayerJoined_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GameListPlayerJoined_1,
	1,	/* Elements count */
	&asn_SPC_GameListPlayerJoined_specs_1	/* Additional specs */
};

