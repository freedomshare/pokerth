/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "InitMessage.h"

static asn_TYPE_member_t asn_MBR_login_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct login, choice.guestLogin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GuestLogin,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"guestLogin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct login, choice.authenticatedLogin),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AuthenticatedLogin,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"authenticatedLogin"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct login, choice.unauthenticatedLogin),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnauthenticatedLogin,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unauthenticatedLogin"
		},
};
static asn_TYPE_tag2member_t asn_MAP_login_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* guestLogin at 100 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* authenticatedLogin at 101 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unauthenticatedLogin at 103 */
};
static asn_CHOICE_specifics_t asn_SPC_login_specs_4 = {
	sizeof(struct login),
	offsetof(struct login, _asn_ctx),
	offsetof(struct login, present),
	sizeof(((struct login *)0)->present),
	asn_MAP_login_tag2el_4,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_login_4 = {
	"login",
	"login",
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
	asn_MBR_login_4,
	3,	/* Elements count */
	&asn_SPC_login_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_InitMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitMessage, requestedVersion),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Version,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"requestedVersion"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitMessage, buildId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"buildId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitMessage, login),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_login_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"login"
		},
};
static ber_tlv_tag_t asn_DEF_InitMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InitMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* buildId at 98 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* requestedVersion at 97 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* guestLogin at 100 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* authenticatedLogin at 101 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unauthenticatedLogin at 103 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InitMessage_specs_1 = {
	sizeof(struct InitMessage),
	offsetof(struct InitMessage, _asn_ctx),
	asn_MAP_InitMessage_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InitMessage = {
	"InitMessage",
	"InitMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_InitMessage_tags_1,
	sizeof(asn_DEF_InitMessage_tags_1)
		/sizeof(asn_DEF_InitMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_InitMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_InitMessage_tags_1)
		/sizeof(asn_DEF_InitMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_InitMessage_1,
	3,	/* Elements count */
	&asn_SPC_InitMessage_specs_1	/* Additional specs */
};

