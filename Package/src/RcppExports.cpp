// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// f_RCPP_adaptMCMC
arma::mat f_RCPP_adaptMCMC(const arma::rowvec theta0, Rcpp::Function func, double acc_rate, arma::mat sigma, int n_mcmc);
RcppExport SEXP _MSGARCH_f_RCPP_adaptMCMC(SEXP theta0SEXP, SEXP funcSEXP, SEXP acc_rateSEXP, SEXP sigmaSEXP, SEXP n_mcmcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type func(funcSEXP);
    Rcpp::traits::input_parameter< double >::type acc_rate(acc_rateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type n_mcmc(n_mcmcSEXP);
    rcpp_result_gen = Rcpp::wrap(f_RCPP_adaptMCMC(theta0, func, acc_rate, sigma, n_mcmc));
    return rcpp_result_gen;
END_RCPP
}
// Decoding_HMM
List Decoding_HMM(const arma::mat& allprobs, const arma::mat& mGamma, const int& T, const int& K);
RcppExport SEXP _MSGARCH_Decoding_HMM(SEXP allprobsSEXP, SEXP mGammaSEXP, SEXP TSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type allprobs(allprobsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mGamma(mGammaSEXP);
    Rcpp::traits::input_parameter< const int& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(Decoding_HMM(allprobs, mGamma, T, K));
    return rcpp_result_gen;
END_RCPP
}
// getDelta
arma::vec getDelta(const arma::mat& gamma, const int& m);
RcppExport SEXP _MSGARCH_getDelta(SEXP gammaSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const int& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(getDelta(gamma, m));
    return rcpp_result_gen;
END_RCPP
}
// Viterbi
arma::vec Viterbi(const arma::mat& mLLK, const arma::mat& mGamma, const int& iK);
RcppExport SEXP _MSGARCH_Viterbi(SEXP mLLKSEXP, SEXP mGammaSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mLLK(mLLKSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mGamma(mGammaSEXP);
    Rcpp::traits::input_parameter< const int& >::type iK(iKSEXP);
    rcpp_result_gen = Rcpp::wrap(Viterbi(mLLK, mGamma, iK));
    return rcpp_result_gen;
END_RCPP
}
// EM_HMM
List EM_HMM(const arma::vec& vY, const int& K, const int& maxIter, const double& tol, const bool& constraintZero);
RcppExport SEXP _MSGARCH_EM_HMM(SEXP vYSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP tolSEXP, SEXP constraintZeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const bool& >::type constraintZero(constraintZeroSEXP);
    rcpp_result_gen = Rcpp::wrap(EM_HMM(vY, K, maxIter, tol, constraintZero));
    return rcpp_result_gen;
END_RCPP
}
// EM_MM
List EM_MM(const arma::vec& vY, const int& K, const int& maxIter, const double& tol, const bool& constraintZero);
RcppExport SEXP _MSGARCH_EM_MM(SEXP vYSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP tolSEXP, SEXP constraintZeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vY(vYSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const bool& >::type constraintZero(constraintZeroSEXP);
    rcpp_result_gen = Rcpp::wrap(EM_MM(vY, K, maxIter, tol, constraintZero));
    return rcpp_result_gen;
END_RCPP
}
// MapParameters_univ
arma::vec MapParameters_univ(const arma::vec& vTheta_tilde, const std::string& Dist, const bool& bSkew);
RcppExport SEXP _MSGARCH_MapParameters_univ(SEXP vTheta_tildeSEXP, SEXP DistSEXP, SEXP bSkewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vTheta_tilde(vTheta_tildeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bSkew(bSkewSEXP);
    rcpp_result_gen = Rcpp::wrap(MapParameters_univ(vTheta_tilde, Dist, bSkew));
    return rcpp_result_gen;
END_RCPP
}
// UnmapParameters_univ
arma::vec UnmapParameters_univ(const arma::vec& vTheta, const std::string& Dist, const bool& bSkew);
RcppExport SEXP _MSGARCH_UnmapParameters_univ(SEXP vThetaSEXP, SEXP DistSEXP, SEXP bSkewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vTheta(vThetaSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type Dist(DistSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bSkew(bSkewSEXP);
    rcpp_result_gen = Rcpp::wrap(UnmapParameters_univ(vTheta, Dist, bSkew));
    return rcpp_result_gen;
END_RCPP
}
// SimplexUnmapping
arma::vec SimplexUnmapping(const arma::vec& vOmega, const int& iK);
RcppExport SEXP _MSGARCH_SimplexUnmapping(SEXP vOmegaSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vOmega(vOmegaSEXP);
    Rcpp::traits::input_parameter< const int& >::type iK(iKSEXP);
    rcpp_result_gen = Rcpp::wrap(SimplexUnmapping(vOmega, iK));
    return rcpp_result_gen;
END_RCPP
}
// SimplexMapping
arma::vec SimplexMapping(const arma::vec& vPhi, const int& iK);
RcppExport SEXP _MSGARCH_SimplexMapping(SEXP vPhiSEXP, SEXP iKSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vPhi(vPhiSEXP);
    Rcpp::traits::input_parameter< const int& >::type iK(iKSEXP);
    rcpp_result_gen = Rcpp::wrap(SimplexMapping(vPhi, iK));
    return rcpp_result_gen;
END_RCPP
}
// dUnivLike
double dUnivLike(const arma::vec& vZ, const std::string& sDist, const bool& bSkew, const double& dXi, const double& dNu);
RcppExport SEXP _MSGARCH_dUnivLike(SEXP vZSEXP, SEXP sDistSEXP, SEXP bSkewSEXP, SEXP dXiSEXP, SEXP dNuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type vZ(vZSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type sDist(sDistSEXP);
    Rcpp::traits::input_parameter< const bool& >::type bSkew(bSkewSEXP);
    Rcpp::traits::input_parameter< const double& >::type dXi(dXiSEXP);
    Rcpp::traits::input_parameter< const double& >::type dNu(dNuSEXP);
    rcpp_result_gen = Rcpp::wrap(dUnivLike(vZ, sDist, bSkew, dXi, dNu));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_eGARCH();
RcppExport SEXP _rcpp_module_boot_Ged();
RcppExport SEXP _rcpp_module_boot_gjrGARCH();
RcppExport SEXP _rcpp_module_boot_MSgarch();
RcppExport SEXP _rcpp_module_boot_Normal();
RcppExport SEXP _rcpp_module_boot_sARCH();
RcppExport SEXP _rcpp_module_boot_sGARCH();
RcppExport SEXP _rcpp_module_boot_Student();
RcppExport SEXP _rcpp_module_boot_tGARCH();

static const R_CallMethodDef CallEntries[] = {
    {"_MSGARCH_f_RCPP_adaptMCMC", (DL_FUNC) &_MSGARCH_f_RCPP_adaptMCMC, 5},
    {"_MSGARCH_Decoding_HMM", (DL_FUNC) &_MSGARCH_Decoding_HMM, 4},
    {"_MSGARCH_getDelta", (DL_FUNC) &_MSGARCH_getDelta, 2},
    {"_MSGARCH_Viterbi", (DL_FUNC) &_MSGARCH_Viterbi, 3},
    {"_MSGARCH_EM_HMM", (DL_FUNC) &_MSGARCH_EM_HMM, 5},
    {"_MSGARCH_EM_MM", (DL_FUNC) &_MSGARCH_EM_MM, 5},
    {"_MSGARCH_MapParameters_univ", (DL_FUNC) &_MSGARCH_MapParameters_univ, 3},
    {"_MSGARCH_UnmapParameters_univ", (DL_FUNC) &_MSGARCH_UnmapParameters_univ, 3},
    {"_MSGARCH_SimplexUnmapping", (DL_FUNC) &_MSGARCH_SimplexUnmapping, 2},
    {"_MSGARCH_SimplexMapping", (DL_FUNC) &_MSGARCH_SimplexMapping, 2},
    {"_MSGARCH_dUnivLike", (DL_FUNC) &_MSGARCH_dUnivLike, 5},
    {"_rcpp_module_boot_eGARCH", (DL_FUNC) &_rcpp_module_boot_eGARCH, 0},
    {"_rcpp_module_boot_Ged", (DL_FUNC) &_rcpp_module_boot_Ged, 0},
    {"_rcpp_module_boot_gjrGARCH", (DL_FUNC) &_rcpp_module_boot_gjrGARCH, 0},
    {"_rcpp_module_boot_MSgarch", (DL_FUNC) &_rcpp_module_boot_MSgarch, 0},
    {"_rcpp_module_boot_Normal", (DL_FUNC) &_rcpp_module_boot_Normal, 0},
    {"_rcpp_module_boot_sARCH", (DL_FUNC) &_rcpp_module_boot_sARCH, 0},
    {"_rcpp_module_boot_sGARCH", (DL_FUNC) &_rcpp_module_boot_sGARCH, 0},
    {"_rcpp_module_boot_Student", (DL_FUNC) &_rcpp_module_boot_Student, 0},
    {"_rcpp_module_boot_tGARCH", (DL_FUNC) &_rcpp_module_boot_tGARCH, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_MSGARCH(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
