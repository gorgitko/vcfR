// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// extract_GT_to_CM
Rcpp::CharacterMatrix extract_GT_to_CM(Rcpp::DataFrame x, std::string element);
RcppExport SEXP vcfR_extract_GT_to_CM(SEXP xSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type element(elementSEXP);
    __result = Rcpp::wrap(extract_GT_to_CM(x, element));
    return __result;
END_RCPP
}
// CM_to_NM
NumericMatrix CM_to_NM(CharacterMatrix x);
RcppExport SEXP vcfR_CM_to_NM(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(CM_to_NM(x));
    return __result;
END_RCPP
}
// extract_haps
Rcpp::StringMatrix extract_haps(Rcpp::StringVector ref, Rcpp::StringVector alt, Rcpp::StringMatrix gt, char gt_split, int verbose);
RcppExport SEXP vcfR_extract_haps(SEXP refSEXP, SEXP altSEXP, SEXP gtSEXP, SEXP gt_splitSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type ref(refSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type alt(altSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringMatrix >::type gt(gtSEXP);
    Rcpp::traits::input_parameter< char >::type gt_split(gt_splitSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(extract_haps(ref, alt, gt, gt_split, verbose));
    return __result;
END_RCPP
}
// gt_to_popsum
Rcpp::DataFrame gt_to_popsum(Rcpp::DataFrame var_info, Rcpp::CharacterMatrix gt);
RcppExport SEXP vcfR_gt_to_popsum(SEXP var_infoSEXP, SEXP gtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type var_info(var_infoSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type gt(gtSEXP);
    __result = Rcpp::wrap(gt_to_popsum(var_info, gt));
    return __result;
END_RCPP
}
// NM2winNM
NumericMatrix NM2winNM(NumericMatrix x, std::vector<int> pos, int maxbp, int winsize);
RcppExport SEXP vcfR_NM2winNM(SEXP xSEXP, SEXP posSEXP, SEXP maxbpSEXP, SEXP winsizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type pos(posSEXP);
    Rcpp::traits::input_parameter< int >::type maxbp(maxbpSEXP);
    Rcpp::traits::input_parameter< int >::type winsize(winsizeSEXP);
    __result = Rcpp::wrap(NM2winNM(x, pos, maxbp, winsize));
    return __result;
END_RCPP
}
// windowize_NM
NumericMatrix windowize_NM(Rcpp::NumericMatrix x, Rcpp::NumericVector pos, Rcpp::NumericVector starts, Rcpp::NumericVector ends, Rcpp::String summary);
RcppExport SEXP vcfR_windowize_NM(SEXP xSEXP, SEXP posSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP summarySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type summary(summarySEXP);
    __result = Rcpp::wrap(windowize_NM(x, pos, starts, ends, summary));
    return __result;
END_RCPP
}
// pair_sort
Rcpp::DataFrame pair_sort();
RcppExport SEXP vcfR_pair_sort() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(pair_sort());
    return __result;
END_RCPP
}
// rank_variants
Rcpp::DataFrame rank_variants(Rcpp::DataFrame variants, Rcpp::NumericVector ends, Rcpp::NumericVector score);
RcppExport SEXP vcfR_rank_variants(SEXP variantsSEXP, SEXP endsSEXP, SEXP scoreSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type variants(variantsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type score(scoreSEXP);
    __result = Rcpp::wrap(rank_variants(variants, ends, score));
    return __result;
END_RCPP
}
// seq_to_rects
Rcpp::IntegerMatrix seq_to_rects(Rcpp::CharacterVector seq, std::string targets);
RcppExport SEXP vcfR_seq_to_rects(SEXP seqSEXP, SEXP targetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< std::string >::type targets(targetsSEXP);
    __result = Rcpp::wrap(seq_to_rects(seq, targets));
    return __result;
END_RCPP
}
// window_init
Rcpp::DataFrame window_init(int window_size, int max_bp);
RcppExport SEXP vcfR_window_init(SEXP window_sizeSEXP, SEXP max_bpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type max_bp(max_bpSEXP);
    __result = Rcpp::wrap(window_init(window_size, max_bp));
    return __result;
END_RCPP
}
// windowize_fasta
Rcpp::DataFrame windowize_fasta(Rcpp::DataFrame wins, Rcpp::CharacterVector seq);
RcppExport SEXP vcfR_windowize_fasta(SEXP winsSEXP, SEXP seqSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type wins(winsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type seq(seqSEXP);
    __result = Rcpp::wrap(windowize_fasta(wins, seq));
    return __result;
END_RCPP
}
// windowize_variants
Rcpp::DataFrame windowize_variants(Rcpp::DataFrame windows, Rcpp::DataFrame variants);
RcppExport SEXP vcfR_windowize_variants(SEXP windowsSEXP, SEXP variantsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type windows(windowsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type variants(variantsSEXP);
    __result = Rcpp::wrap(windowize_variants(windows, variants));
    return __result;
END_RCPP
}
// windowize_annotations
Rcpp::DataFrame windowize_annotations(Rcpp::DataFrame wins, Rcpp::NumericVector ann_starts, Rcpp::NumericVector ann_ends, int chrom_length);
RcppExport SEXP vcfR_windowize_annotations(SEXP winsSEXP, SEXP ann_startsSEXP, SEXP ann_endsSEXP, SEXP chrom_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type wins(winsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ann_starts(ann_startsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ann_ends(ann_endsSEXP);
    Rcpp::traits::input_parameter< int >::type chrom_length(chrom_lengthSEXP);
    __result = Rcpp::wrap(windowize_annotations(wins, ann_starts, ann_ends, chrom_length));
    return __result;
END_RCPP
}
// vcf_stats_gz
Rcpp::NumericVector vcf_stats_gz(std::string x);
RcppExport SEXP vcfR_vcf_stats_gz(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    __result = Rcpp::wrap(vcf_stats_gz(x));
    return __result;
END_RCPP
}
// read_meta_gz
Rcpp::StringVector read_meta_gz(std::string x, Rcpp::NumericVector stats, int verbose);
RcppExport SEXP vcfR_read_meta_gz(SEXP xSEXP, SEXP statsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(read_meta_gz(x, stats, verbose));
    return __result;
END_RCPP
}
// read_body_gz
Rcpp::CharacterMatrix read_body_gz(std::string x, Rcpp::NumericVector stats, int verbose);
RcppExport SEXP vcfR_read_body_gz(SEXP xSEXP, SEXP statsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(read_body_gz(x, stats, verbose));
    return __result;
END_RCPP
}
// write_vcf_body
void write_vcf_body(Rcpp::CharacterMatrix fix, Rcpp::CharacterMatrix gt, std::string filename, int mask);
RcppExport SEXP vcfR_write_vcf_body(SEXP fixSEXP, SEXP gtSEXP, SEXP filenameSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type fix(fixSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type gt(gtSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type mask(maskSEXP);
    write_vcf_body(fix, gt, filename, mask);
    return R_NilValue;
END_RCPP
}
// write_fasta
void write_fasta(Rcpp::CharacterVector seq, std::string seqname, std::string filename, int rowlength, int verbose);
RcppExport SEXP vcfR_write_fasta(SEXP seqSEXP, SEXP seqnameSEXP, SEXP filenameSEXP, SEXP rowlengthSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< std::string >::type seqname(seqnameSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type rowlength(rowlengthSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    write_fasta(seq, seqname, filename, rowlength, verbose);
    return R_NilValue;
END_RCPP
}
