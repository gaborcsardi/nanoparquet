#include <Rdefines.h>

extern "C" {

SEXP nanoparquet_read(SEXP filesxp);
SEXP nanoparquet_write(
  SEXP dfsxp,
  SEXP filesxp,
  SEXP dim,
  SEXP compression,
  SEXP metadata,
  SEXP required
);
SEXP nanoparquet_read_metadata(SEXP filesxp);
SEXP nanoparquet_read_schema(SEXP filesxp);
SEXP nanoparquet_read_pages(SEXP filesxp);
SEXP nanoparquet_read_page(SEXP filesxp, SEXP page);
SEXP nanoparquet_parse_arrow_schema(SEXP rbuf);
SEXP nanoparquet_encode_arrow_schema(SEXP schema);

SEXP nanoparquet_rle_decode_int(SEXP x, SEXP bit_width, SEXP
                                includes_length, SEXP length);
SEXP nanoparquet_rle_encode_int(SEXP x, SEXP bit_width);

SEXP nanoparquet_base64_decode(SEXP x);
SEXP nanoparquet_base64_encode(SEXP x);

SEXP snappy_compress_raw(SEXP x);
SEXP snappy_uncompress_raw(SEXP x);

// R native routine registration
#define CALLDEF(name, n) \
  { #name, (DL_FUNC)&name, n }

static const R_CallMethodDef R_CallDef[] = {
  CALLDEF(nanoparquet_read, 1),
  CALLDEF(nanoparquet_write, 6),
  CALLDEF(nanoparquet_read_metadata, 1),
  CALLDEF(nanoparquet_read_schema, 1),
  CALLDEF(nanoparquet_read_pages, 1),
  CALLDEF(nanoparquet_read_page, 2),
  CALLDEF(nanoparquet_parse_arrow_schema, 1),
  CALLDEF(nanoparquet_encode_arrow_schema, 1),
  CALLDEF(nanoparquet_rle_decode_int, 4),
  CALLDEF(nanoparquet_rle_encode_int, 2),
  CALLDEF(nanoparquet_base64_decode, 1),
  CALLDEF(nanoparquet_base64_encode, 1),
  CALLDEF(snappy_compress_raw, 1),
  CALLDEF(snappy_uncompress_raw, 1),
  {NULL, NULL, 0}
};

void R_init_nanoparquet(DllInfo *dll) {
  R_registerRoutines(dll, NULL, R_CallDef, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

}
