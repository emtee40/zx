## SPDX-License-Identifier: 0BSD
## Author: Lasse Collin

if COND_ENCODER_LZ
liblzma_la_SOURCES += \
	lz/lz_encoder.c \
	lz/lz_encoder.h \
	lz/lz_encoder_hash.h \
	lz/lz_encoder_hash_table.h \
	lz/lz_encoder_mf.c
endif


if COND_DECODER_LZ
liblzma_la_SOURCES += \
	lz/lz_decoder.c \
	lz/lz_decoder.h
endif
