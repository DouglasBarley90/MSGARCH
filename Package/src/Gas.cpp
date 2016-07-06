#include "MSgarch.h"

//=========================================================================//
//=========================================================================//
//================================== Gas ==================================//
//=========================================================================//
//=========================================================================//
RCPP_MODULE(Gas){ 
  
  // Gas-normal-symmetric
  class_<Gas_normal_sym>("Gas_normal_sym")  
    .constructor()
    .field( "name",        &Gas_normal_sym ::name )
    .field( "theta0",      &Gas_normal_sym ::theta0 )
    .field( "Sigma0",      &Gas_normal_sym ::Sigma0 )
    .field( "label",       &Gas_normal_sym ::label )
    .field( "lower",       &Gas_normal_sym ::lower )
    .field( "upper",       &Gas_normal_sym ::upper )
    .field( "ineq_lb",     &Gas_normal_sym ::ineq_lb )
    .field( "ineq_ub",     &Gas_normal_sym ::ineq_ub )
    .field( "NbParams",    &Gas_normal_sym ::NbParams )
    .field( "NbParamsModel",&Gas_normal_sym ::NbParamsModel)
    .method( "f_sim",      &Gas_normal_sym ::f_sim )
    .method( "f_pdf",      &Gas_normal_sym ::f_pdf )
    .method( "f_cdf",      &Gas_normal_sym ::f_cdf )
    .method( "f_rnd",      &Gas_normal_sym ::f_rnd )
    .method( "calc_ht",    &Gas_normal_sym ::calc_ht )
    .method( "eval_model", &Gas_normal_sym ::eval_model )
    .method( "ineq_func",  &Gas_normal_sym ::ineq_func )
    .method( "f_unc_vol",  &Gas_normal_sym ::f_unc_vol)
  ;
  // Gas-student-symmetric
  class_<Gas_student_sym>("Gas_student_sym")  
    .constructor()
    .field( "name",        &Gas_student_sym ::name )
    .field( "theta0",      &Gas_student_sym ::theta0 )
    .field( "Sigma0",      &Gas_student_sym ::Sigma0 )
    .field( "label",       &Gas_student_sym ::label )
    .field( "lower",       &Gas_student_sym ::lower )
    .field( "upper",       &Gas_student_sym ::upper )
    .field( "ineq_lb",     &Gas_student_sym ::ineq_lb )
    .field( "ineq_ub",     &Gas_student_sym ::ineq_ub )
    .field( "NbParams",    &Gas_student_sym ::NbParams )
   	.field( "NbParamsModel",&Gas_student_sym ::NbParamsModel)
    .method( "f_sim",      &Gas_student_sym ::f_sim )
    .method( "f_pdf",      &Gas_student_sym ::f_pdf )
    .method( "f_cdf",      &Gas_student_sym ::f_cdf )
    .method( "f_rnd",      &Gas_student_sym ::f_rnd )
    .method( "calc_ht",    &Gas_student_sym ::calc_ht )
    .method( "eval_model", &Gas_student_sym ::eval_model )
    .method( "ineq_func",  &Gas_student_sym ::ineq_func )
    .method( "f_unc_vol",  &Gas_student_sym ::f_unc_vol)
  ;
  // Gas-ged-symmetric
  class_<Gas_ged_sym>("Gas_ged_sym")  
    .constructor()
    .field( "name",        &Gas_ged_sym ::name )
    .field( "theta0",      &Gas_ged_sym ::theta0 )
    .field( "Sigma0",      &Gas_ged_sym ::Sigma0 )
    .field( "label",       &Gas_ged_sym ::label )
    .field( "lower",       &Gas_ged_sym ::lower )
    .field( "upper",       &Gas_ged_sym ::upper )
    .field( "ineq_lb",     &Gas_ged_sym ::ineq_lb )
    .field( "ineq_ub",     &Gas_ged_sym ::ineq_ub )
    .field( "NbParams",    &Gas_ged_sym ::NbParams )
   	.field( "NbParamsModel",&Gas_ged_sym ::NbParamsModel)
    .method( "f_sim",      &Gas_ged_sym ::f_sim )
    .method( "f_pdf",      &Gas_ged_sym ::f_pdf )
    .method( "f_cdf",      &Gas_ged_sym ::f_cdf )
    .method( "f_rnd",      &Gas_ged_sym ::f_rnd )
    .method( "calc_ht",    &Gas_ged_sym ::calc_ht )
    .method( "eval_model", &Gas_ged_sym ::eval_model )
    .method( "ineq_func",  &Gas_ged_sym ::ineq_func )
    .method( "f_unc_vol",  &Gas_ged_sym ::f_unc_vol)
  ;
  
  
  
  // Gas-normal-skew
  class_<Gas_normal_skew>("Gas_normal_skew")  
    .constructor()
    .field( "name",        &Gas_normal_skew ::name )
    .field( "theta0",      &Gas_normal_skew ::theta0 )
    .field( "Sigma0",      &Gas_normal_skew ::Sigma0 )
    .field( "label",       &Gas_normal_skew ::label )
    .field( "lower",       &Gas_normal_skew ::lower )
    .field( "upper",       &Gas_normal_skew ::upper )
    .field( "ineq_lb",     &Gas_normal_skew ::ineq_lb )
    .field( "ineq_ub",     &Gas_normal_skew ::ineq_ub )
    .field( "NbParams",    &Gas_normal_skew ::NbParams )
    .field( "NbParamsModel",&Gas_normal_skew ::NbParamsModel)
    .method( "f_sim",      &Gas_normal_skew ::f_sim )
    .method( "f_pdf",      &Gas_normal_skew ::f_pdf )
    .method( "f_cdf",      &Gas_normal_skew ::f_cdf )
    .method( "f_rnd",      &Gas_normal_skew ::f_rnd )
    .method( "calc_ht",    &Gas_normal_skew ::calc_ht )
    .method( "eval_model", &Gas_normal_skew ::eval_model )
    .method( "ineq_func",  &Gas_normal_skew ::ineq_func )
    .method( "f_unc_vol",  &Gas_normal_skew ::f_unc_vol)
  ;
  // Gas-student-skew
  class_<Gas_student_skew>("Gas_student_skew")  
    .constructor()
    .field( "name",        &Gas_student_skew ::name )
    .field( "theta0",      &Gas_student_skew ::theta0 )
    .field( "Sigma0",      &Gas_student_skew ::Sigma0 )
    .field( "label",       &Gas_student_skew ::label )
    .field( "lower",       &Gas_student_skew ::lower )
    .field( "upper",       &Gas_student_skew ::upper )
    .field( "ineq_lb",     &Gas_student_skew ::ineq_lb )
    .field( "ineq_ub",     &Gas_student_skew ::ineq_ub )
    .field( "NbParams",    &Gas_student_skew ::NbParams )
   	.field( "NbParamsModel",&Gas_student_skew ::NbParamsModel)
    .method( "f_sim",      &Gas_student_skew ::f_sim )
    .method( "f_pdf",      &Gas_student_skew ::f_pdf )
    .method( "f_cdf",      &Gas_student_skew ::f_cdf )
    .method( "f_rnd",      &Gas_student_skew ::f_rnd )
    .method( "calc_ht",    &Gas_student_skew ::calc_ht )
    .method( "eval_model", &Gas_student_skew ::eval_model )
    .method( "ineq_func",  &Gas_student_skew ::ineq_func )
    .method( "f_unc_vol",  &Gas_student_skew ::f_unc_vol)
  ;
  // Gas-ged-skew
  class_<Gas_ged_skew>("Gas_ged_skew")  
    .constructor()
    .field( "name",        &Gas_ged_skew ::name )
    .field( "theta0",      &Gas_ged_skew ::theta0 )
    .field( "Sigma0",      &Gas_ged_skew ::Sigma0 )
    .field( "label",       &Gas_ged_skew ::label )
    .field( "lower",       &Gas_ged_skew ::lower )
    .field( "upper",       &Gas_ged_skew ::upper )
    .field( "ineq_lb",     &Gas_ged_skew ::ineq_lb )
    .field( "ineq_ub",     &Gas_ged_skew ::ineq_ub )
    .field( "NbParams",    &Gas_ged_skew ::NbParams )
   	.field( "NbParamsModel",&Gas_ged_skew ::NbParamsModel)
    .method( "f_sim",      &Gas_ged_skew ::f_sim )
    .method( "f_pdf",      &Gas_ged_skew ::f_pdf )
    .method( "f_cdf",      &Gas_ged_skew ::f_cdf )
    .method( "f_rnd",      &Gas_ged_skew ::f_rnd )
    .method( "calc_ht",    &Gas_ged_skew ::calc_ht )
    .method( "eval_model", &Gas_ged_skew ::eval_model )
    .method( "ineq_func",  &Gas_ged_skew ::ineq_func )
    .method( "f_unc_vol",  &Gas_ged_skew ::f_unc_vol)
  ;
}