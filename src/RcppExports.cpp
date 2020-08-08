// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Basis
arma::mat Basis(arma::vec t, arma::vec knM);
RcppExport SEXP _MSBS_Basis(SEXP tSEXP, SEXP knMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type knM(knMSEXP);
    rcpp_result_gen = Rcpp::wrap(Basis(t, knM));
    return rcpp_result_gen;
END_RCPP
}
// CombBasis
arma::mat CombBasis(arma::mat X, List knM);
RcppExport SEXP _MSBS_CombBasis(SEXP XSEXP, SEXP knMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type knM(knMSEXP);
    rcpp_result_gen = Rcpp::wrap(CombBasis(X, knM));
    return rcpp_result_gen;
END_RCPP
}
// DeltaPrior
double DeltaPrior(List listdelta, IntegerVector gamma, NumericVector mu, NumericVector var, IntegerVector numkn, NumericVector mu0, NumericVector phat, int p);
RcppExport SEXP _MSBS_DeltaPrior(SEXP listdeltaSEXP, SEXP gammaSEXP, SEXP muSEXP, SEXP varSEXP, SEXP numknSEXP, SEXP mu0SEXP, SEXP phatSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(DeltaPrior(listdelta, gamma, mu, var, numkn, mu0, phat, p));
    return rcpp_result_gen;
END_RCPP
}
// Eta
IntegerVector Eta(List delta, IntegerVector gamma, int p, int q);
RcppExport SEXP _MSBS_Eta(SEXP deltaSEXP, SEXP gammaSEXP, SEXP pSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(Eta(delta, gamma, p, q));
    return rcpp_result_gen;
END_RCPP
}
// GammaPrior
double GammaPrior(IntegerVector gamma, int p, int q);
RcppExport SEXP _MSBS_GammaPrior(SEXP gammaSEXP, SEXP pSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(GammaPrior(gamma, p, q));
    return rcpp_result_gen;
END_RCPP
}
// LogBF
double LogBF(IntegerVector delta, NumericMatrix X, arma::vec y, int n, double a);
RcppExport SEXP _MSBS_LogBF(SEXP deltaSEXP, SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(LogBF(delta, X, y, n, a));
    return rcpp_result_gen;
END_RCPP
}
// MCMCEstIteration
List MCMCEstIteration(NumericMatrix X, arma::vec y, List delta, IntegerVector gamma, List listdelta, IntegerVector numkn, int n, int p, int q, double logbf_cur, double a, NumericVector phat);
RcppExport SEXP _MSBS_MCMCEstIteration(SEXP XSEXP, SEXP ySEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP logbf_curSEXP, SEXP aSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(MCMCEstIteration(X, y, delta, gamma, listdelta, numkn, n, p, q, logbf_cur, a, phat));
    return rcpp_result_gen;
END_RCPP
}
// MCMCOneIteration
List MCMCOneIteration(NumericMatrix X, arma::vec y, List delta, IntegerVector gamma, List listdelta, IntegerVector numkn, int n, int p, int q, double logbf_cur, NumericVector phat, NumericVector mu, NumericVector var, NumericVector mu0, double a);
RcppExport SEXP _MSBS_MCMCOneIteration(SEXP XSEXP, SEXP ySEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP logbf_curSEXP, SEXP phatSEXP, SEXP muSEXP, SEXP varSEXP, SEXP mu0SEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(MCMCOneIteration(X, y, delta, gamma, listdelta, numkn, n, p, q, logbf_cur, phat, mu, var, mu0, a));
    return rcpp_result_gen;
END_RCPP
}
// MainSampleDelta
IntegerVector MainSampleDelta(IntegerVector sel_ind, IntegerVector fordelta, List listdelta, int numkn, double phat);
RcppExport SEXP _MSBS_MainSampleDelta(SEXP sel_indSEXP, SEXP fordeltaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type sel_ind(sel_indSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type fordelta(fordeltaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(MainSampleDelta(sel_ind, fordelta, listdelta, numkn, phat));
    return rcpp_result_gen;
END_RCPP
}
// MainSampleDeltaGlobalUpdate
List MainSampleDeltaGlobalUpdate(NumericMatrix X, arma::vec y, List indset, List delta, IntegerVector gamma, List listdelta, int numkn, int n, int p, int q, int z, double logbf_cur, double phat);
RcppExport SEXP _MSBS_MainSampleDeltaGlobalUpdate(SEXP XSEXP, SEXP ySEXP, SEXP indsetSEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP zSEXP, SEXP logbf_curSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type indset(indsetSEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(MainSampleDeltaGlobalUpdate(X, y, indset, delta, gamma, listdelta, numkn, n, p, q, z, logbf_cur, phat));
    return rcpp_result_gen;
END_RCPP
}
// MainSampleDeltaGlobalUpdateVec
List MainSampleDeltaGlobalUpdateVec(NumericMatrix X, arma::vec y, List delta, IntegerVector gamma, List listdelta, IntegerVector numkn, int n, int p, int q, double logbf_cur, NumericVector phat);
RcppExport SEXP _MSBS_MainSampleDeltaGlobalUpdateVec(SEXP XSEXP, SEXP ySEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP logbf_curSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(MainSampleDeltaGlobalUpdateVec(X, y, delta, gamma, listdelta, numkn, n, p, q, logbf_cur, phat));
    return rcpp_result_gen;
END_RCPP
}
// MainSampleDeltaUpdate
List MainSampleDeltaUpdate(NumericMatrix X, arma::vec y, IntegerVector sel_ind, List delta, IntegerVector gamma, List listdelta, int numkn, int n, int p, int q, int z, double logbf_cur, double phat);
RcppExport SEXP _MSBS_MainSampleDeltaUpdate(SEXP XSEXP, SEXP ySEXP, SEXP sel_indSEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP zSEXP, SEXP logbf_curSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sel_ind(sel_indSEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(MainSampleDeltaUpdate(X, y, sel_ind, delta, gamma, listdelta, numkn, n, p, q, z, logbf_cur, phat));
    return rcpp_result_gen;
END_RCPP
}
// MakeInd
List MakeInd(int numkn);
RcppExport SEXP _MSBS_MakeInd(SEXP numknSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    rcpp_result_gen = Rcpp::wrap(MakeInd(numkn));
    return rcpp_result_gen;
END_RCPP
}
// PilotSampleDelta
IntegerVector PilotSampleDelta(IntegerVector sel_ind, IntegerVector fordelta, List listdelta, int numkn, double phat);
RcppExport SEXP _MSBS_PilotSampleDelta(SEXP sel_indSEXP, SEXP fordeltaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type sel_ind(sel_indSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type fordelta(fordeltaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(PilotSampleDelta(sel_ind, fordelta, listdelta, numkn, phat));
    return rcpp_result_gen;
END_RCPP
}
// PilotSampleDeltaGlobalUpdate
List PilotSampleDeltaGlobalUpdate(NumericMatrix X, arma::vec y, List indset, List delta, IntegerVector gamma, List listdelta, int numkn, int n, int p, int q, int z, double logbf_cur, double phat);
RcppExport SEXP _MSBS_PilotSampleDeltaGlobalUpdate(SEXP XSEXP, SEXP ySEXP, SEXP indsetSEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP zSEXP, SEXP logbf_curSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type indset(indsetSEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(PilotSampleDeltaGlobalUpdate(X, y, indset, delta, gamma, listdelta, numkn, n, p, q, z, logbf_cur, phat));
    return rcpp_result_gen;
END_RCPP
}
// PilotSampleDeltaGlobalUpdateVec
List PilotSampleDeltaGlobalUpdateVec(NumericMatrix X, arma::vec y, List delta, IntegerVector gamma, List listdelta, IntegerVector numkn, int n, int p, int q, double logbf_cur, NumericVector phat);
RcppExport SEXP _MSBS_PilotSampleDeltaGlobalUpdateVec(SEXP XSEXP, SEXP ySEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP logbf_curSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(PilotSampleDeltaGlobalUpdateVec(X, y, delta, gamma, listdelta, numkn, n, p, q, logbf_cur, phat));
    return rcpp_result_gen;
END_RCPP
}
// PilotSampleDeltaUpdate
List PilotSampleDeltaUpdate(NumericMatrix X, arma::vec y, IntegerVector sel_ind, List delta, IntegerVector gamma, List listdelta, int numkn, int n, int p, int q, int z, double logbf_cur, double phat);
RcppExport SEXP _MSBS_PilotSampleDeltaUpdate(SEXP XSEXP, SEXP ySEXP, SEXP sel_indSEXP, SEXP deltaSEXP, SEXP gammaSEXP, SEXP listdeltaSEXP, SEXP numknSEXP, SEXP nSEXP, SEXP pSEXP, SEXP qSEXP, SEXP zSEXP, SEXP logbf_curSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sel_ind(sel_indSEXP);
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type logbf_cur(logbf_curSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(PilotSampleDeltaUpdate(X, y, sel_ind, delta, gamma, listdelta, numkn, n, p, q, z, logbf_cur, phat));
    return rcpp_result_gen;
END_RCPP
}
// PseudoPrior
double PseudoPrior(IntegerVector delta, double mu, double var, int numkn, double mu0);
RcppExport SEXP _MSBS_PseudoPrior(SEXP deltaSEXP, SEXP muSEXP, SEXP varSEXP, SEXP numknSEXP, SEXP mu0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type var(varSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    rcpp_result_gen = Rcpp::wrap(PseudoPrior(delta, mu, var, numkn, mu0));
    return rcpp_result_gen;
END_RCPP
}
// PseudoSampleDelta
IntegerVector PseudoSampleDelta(double mu, double var, int numkn, double mu0);
RcppExport SEXP _MSBS_PseudoSampleDelta(SEXP muSEXP, SEXP varSEXP, SEXP numknSEXP, SEXP mu0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type var(varSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< double >::type mu0(mu0SEXP);
    rcpp_result_gen = Rcpp::wrap(PseudoSampleDelta(mu, var, numkn, mu0));
    return rcpp_result_gen;
END_RCPP
}
// PseudoSampleDeltaVec
List PseudoSampleDeltaVec(List delta, IntegerVector gamma, NumericVector mu, NumericVector var, IntegerVector numkn, NumericVector mu0, int p);
RcppExport SEXP _MSBS_PseudoSampleDeltaVec(SEXP deltaSEXP, SEXP gammaSEXP, SEXP muSEXP, SEXP varSEXP, SEXP numknSEXP, SEXP mu0SEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(PseudoSampleDeltaVec(delta, gamma, mu, var, numkn, mu0, p));
    return rcpp_result_gen;
END_RCPP
}
// R2
double R2(arma::mat X, arma::vec y);
RcppExport SEXP _MSBS_R2(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(R2(X, y));
    return rcpp_result_gen;
END_RCPP
}
// SampleFixeff
arma::mat SampleFixeff(int n, arma::mat WXi, arma::vec y, double qv);
RcppExport SEXP _MSBS_SampleFixeff(SEXP nSEXP, SEXP WXiSEXP, SEXP ySEXP, SEXP qvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type WXi(WXiSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type qv(qvSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleFixeff(n, WXi, y, qv));
    return rcpp_result_gen;
END_RCPP
}
// SampleGammaLinear
List SampleGammaLinear(NumericMatrix X, arma::vec y, int n, double a, List listdelta, IntegerVector gamma, int p, int q, int z, double logpost, double dp);
RcppExport SEXP _MSBS_SampleGammaLinear(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP aSEXP, SEXP listdeltaSEXP, SEXP gammaSEXP, SEXP pSEXP, SEXP qSEXP, SEXP zSEXP, SEXP logpostSEXP, SEXP dpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type logpost(logpostSEXP);
    Rcpp::traits::input_parameter< double >::type dp(dpSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleGammaLinear(X, y, n, a, listdelta, gamma, p, q, z, logpost, dp));
    return rcpp_result_gen;
END_RCPP
}
// SampleGammaLinearVec
List SampleGammaLinearVec(NumericMatrix X, arma::vec y, int n, double a, List listdelta, IntegerVector gamma, int p, int q, double logpost, double dp);
RcppExport SEXP _MSBS_SampleGammaLinearVec(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP aSEXP, SEXP listdeltaSEXP, SEXP gammaSEXP, SEXP pSEXP, SEXP qSEXP, SEXP logpostSEXP, SEXP dpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type logpost(logpostSEXP);
    Rcpp::traits::input_parameter< double >::type dp(dpSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleGammaLinearVec(X, y, n, a, listdelta, gamma, p, q, logpost, dp));
    return rcpp_result_gen;
END_RCPP
}
// SampleGammaNonlinear
List SampleGammaNonlinear(NumericMatrix X, arma::vec y, int n, double a, List listdelta, IntegerVector gamma, NumericVector mu, NumericVector var, IntegerVector numkn, NumericVector mu0, NumericVector phat, int p, int q, int z, double logpost);
RcppExport SEXP _MSBS_SampleGammaNonlinear(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP aSEXP, SEXP listdeltaSEXP, SEXP gammaSEXP, SEXP muSEXP, SEXP varSEXP, SEXP numknSEXP, SEXP mu0SEXP, SEXP phatSEXP, SEXP pSEXP, SEXP qSEXP, SEXP zSEXP, SEXP logpostSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type logpost(logpostSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleGammaNonlinear(X, y, n, a, listdelta, gamma, mu, var, numkn, mu0, phat, p, q, z, logpost));
    return rcpp_result_gen;
END_RCPP
}
// SampleGammaNonlinearVec
List SampleGammaNonlinearVec(NumericMatrix X, arma::vec y, int n, double a, List listdelta, IntegerVector gamma, NumericVector mu, NumericVector var, IntegerVector numkn, NumericVector mu0, NumericVector phat, int p, int q, double logpost);
RcppExport SEXP _MSBS_SampleGammaNonlinearVec(SEXP XSEXP, SEXP ySEXP, SEXP nSEXP, SEXP aSEXP, SEXP listdeltaSEXP, SEXP gammaSEXP, SEXP muSEXP, SEXP varSEXP, SEXP numknSEXP, SEXP mu0SEXP, SEXP phatSEXP, SEXP pSEXP, SEXP qSEXP, SEXP logpostSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< List >::type listdelta(listdeltaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type var(varSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phat(phatSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type logpost(logpostSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleGammaNonlinearVec(X, y, n, a, listdelta, gamma, mu, var, numkn, mu0, phat, p, q, logpost));
    return rcpp_result_gen;
END_RCPP
}
// Subset
NumericMatrix Subset(IntegerVector delta, NumericMatrix X, int n);
RcppExport SEXP _MSBS_Subset(SEXP deltaSEXP, SEXP XSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(Subset(delta, X, n));
    return rcpp_result_gen;
END_RCPP
}
// CombBasisCpp
arma::mat CombBasisCpp(arma::mat X, List knM);
RcppExport SEXP _MSBS_CombBasisCpp(SEXP XSEXP, SEXP knMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type knM(knMSEXP);
    rcpp_result_gen = Rcpp::wrap(CombBasisCpp(X, knM));
    return rcpp_result_gen;
END_RCPP
}
// ZTGeoPrior
double ZTGeoPrior(IntegerVector fordelta, int numkn, double phat);
RcppExport SEXP _MSBS_ZTGeoPrior(SEXP fordeltaSEXP, SEXP numknSEXP, SEXP phatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type fordelta(fordeltaSEXP);
    Rcpp::traits::input_parameter< int >::type numkn(numknSEXP);
    Rcpp::traits::input_parameter< double >::type phat(phatSEXP);
    rcpp_result_gen = Rcpp::wrap(ZTGeoPrior(fordelta, numkn, phat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MSBS_Basis", (DL_FUNC) &_MSBS_Basis, 2},
    {"_MSBS_CombBasis", (DL_FUNC) &_MSBS_CombBasis, 2},
    {"_MSBS_DeltaPrior", (DL_FUNC) &_MSBS_DeltaPrior, 8},
    {"_MSBS_Eta", (DL_FUNC) &_MSBS_Eta, 4},
    {"_MSBS_GammaPrior", (DL_FUNC) &_MSBS_GammaPrior, 3},
    {"_MSBS_LogBF", (DL_FUNC) &_MSBS_LogBF, 5},
    {"_MSBS_MCMCEstIteration", (DL_FUNC) &_MSBS_MCMCEstIteration, 12},
    {"_MSBS_MCMCOneIteration", (DL_FUNC) &_MSBS_MCMCOneIteration, 15},
    {"_MSBS_MainSampleDelta", (DL_FUNC) &_MSBS_MainSampleDelta, 5},
    {"_MSBS_MainSampleDeltaGlobalUpdate", (DL_FUNC) &_MSBS_MainSampleDeltaGlobalUpdate, 13},
    {"_MSBS_MainSampleDeltaGlobalUpdateVec", (DL_FUNC) &_MSBS_MainSampleDeltaGlobalUpdateVec, 11},
    {"_MSBS_MainSampleDeltaUpdate", (DL_FUNC) &_MSBS_MainSampleDeltaUpdate, 13},
    {"_MSBS_MakeInd", (DL_FUNC) &_MSBS_MakeInd, 1},
    {"_MSBS_PilotSampleDelta", (DL_FUNC) &_MSBS_PilotSampleDelta, 5},
    {"_MSBS_PilotSampleDeltaGlobalUpdate", (DL_FUNC) &_MSBS_PilotSampleDeltaGlobalUpdate, 13},
    {"_MSBS_PilotSampleDeltaGlobalUpdateVec", (DL_FUNC) &_MSBS_PilotSampleDeltaGlobalUpdateVec, 11},
    {"_MSBS_PilotSampleDeltaUpdate", (DL_FUNC) &_MSBS_PilotSampleDeltaUpdate, 13},
    {"_MSBS_PseudoPrior", (DL_FUNC) &_MSBS_PseudoPrior, 5},
    {"_MSBS_PseudoSampleDelta", (DL_FUNC) &_MSBS_PseudoSampleDelta, 4},
    {"_MSBS_PseudoSampleDeltaVec", (DL_FUNC) &_MSBS_PseudoSampleDeltaVec, 7},
    {"_MSBS_R2", (DL_FUNC) &_MSBS_R2, 2},
    {"_MSBS_SampleFixeff", (DL_FUNC) &_MSBS_SampleFixeff, 4},
    {"_MSBS_SampleGammaLinear", (DL_FUNC) &_MSBS_SampleGammaLinear, 11},
    {"_MSBS_SampleGammaLinearVec", (DL_FUNC) &_MSBS_SampleGammaLinearVec, 10},
    {"_MSBS_SampleGammaNonlinear", (DL_FUNC) &_MSBS_SampleGammaNonlinear, 15},
    {"_MSBS_SampleGammaNonlinearVec", (DL_FUNC) &_MSBS_SampleGammaNonlinearVec, 14},
    {"_MSBS_Subset", (DL_FUNC) &_MSBS_Subset, 3},
    {"_MSBS_CombBasisCpp", (DL_FUNC) &_MSBS_CombBasisCpp, 2},
    {"_MSBS_ZTGeoPrior", (DL_FUNC) &_MSBS_ZTGeoPrior, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_MSBS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
