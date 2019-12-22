// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "V8_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// make_context
ctxptr make_context(bool set_console);
RcppExport SEXP _V8_make_context(SEXP set_consoleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type set_console(set_consoleSEXP);
    rcpp_result_gen = Rcpp::wrap(make_context(set_console));
    return rcpp_result_gen;
END_RCPP
}
// context_enable_typed_arrays
bool context_enable_typed_arrays(Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP _V8_context_enable_typed_arrays(SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(context_enable_typed_arrays(ctx));
    return rcpp_result_gen;
END_RCPP
}
// version
std::string version();
RcppExport SEXP _V8_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version());
    return rcpp_result_gen;
END_RCPP
}
// context_eval
Rcpp::RObject context_eval(Rcpp::String src, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx, bool serialize);
RcppExport SEXP _V8_context_eval(SEXP srcSEXP, SEXP ctxSEXP, SEXP serializeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type src(srcSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP);
    Rcpp::traits::input_parameter< bool >::type serialize(serializeSEXP);
    rcpp_result_gen = Rcpp::wrap(context_eval(src, ctx, serialize));
    return rcpp_result_gen;
END_RCPP
}
// context_validate
bool context_validate(Rcpp::String src, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP _V8_context_validate(SEXP srcSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type src(srcSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(context_validate(src, ctx));
    return rcpp_result_gen;
END_RCPP
}
// context_null
bool context_null(Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP _V8_context_null(SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(context_null(ctx));
    return rcpp_result_gen;
END_RCPP
}
// write_array_buffer
bool write_array_buffer(Rcpp::String key, Rcpp::RawVector data, Rcpp::XPtr< v8::Persistent<v8::Context> > ctx);
RcppExport SEXP _V8_write_array_buffer(SEXP keySEXP, SEXP dataSEXP, SEXP ctxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type key(keySEXP);
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr< v8::Persistent<v8::Context> > >::type ctx(ctxSEXP);
    rcpp_result_gen = Rcpp::wrap(write_array_buffer(key, data, ctx));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_V8_make_context", (DL_FUNC) &_V8_make_context, 1},
    {"_V8_context_enable_typed_arrays", (DL_FUNC) &_V8_context_enable_typed_arrays, 1},
    {"_V8_version", (DL_FUNC) &_V8_version, 0},
    {"_V8_context_eval", (DL_FUNC) &_V8_context_eval, 3},
    {"_V8_context_validate", (DL_FUNC) &_V8_context_validate, 2},
    {"_V8_context_null", (DL_FUNC) &_V8_context_null, 1},
    {"_V8_write_array_buffer", (DL_FUNC) &_V8_write_array_buffer, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_V8(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
