/*--------------------------------------------------------------------*/
/* FILE NAME : APFC Set Up Receive Data                               */
/* SYMBOL    : COMSET                                                 */
/* SIZE      :      512 BYTES                                         */
/*--------------------------------------------------------------------*/
typedef struct {
  int          s_cfc_mode     ; /* FB control 0:OFF  1:ON             */
  int          s_lock_mode    ; /* 0:Target mode  1:Lock-on mode      */
  int          s_wrbcomp_mode ;
                        /* Force comp. control(For TOP end) 0:OFF  1: */
  int          s_rfcomp_mode  ;
                        /* Force comp. control(For MIDDLE) 0:OFF  1:O */
  int          s_thmcomp_mode ;
                        /* Thermal crown comp. control 0:OFF  1:ON    */
  float        f_crr_lim[2]   ; /* Min/Max crown ratio 0:Min  1:Max   */
  float        f_dcrr_tlr[2]  ; /* Crown ratio dead band 0:Min  1:Max */
  float        f_flat_lim[5][2]
                              ;
                        /* Flatness limitation [F0-F4][Min/Max] 0:Min */
  float        f_t_crr_target ; /* Crown ratio target                 */
  float        f_lim_wrb_set[5][2]
                              ;
                        /* bender limitation kN/chock [F0-F4][Min/Max */
  float        f_wrb_set[5]   ; /* Setup bender kN/chock              */
  float        f_afb_set[5]   ; /* (Å›Cm/Å›B) mm/(kN/chock)           */
  float        f_ap_set[5]    ; /* (Å›Cm/Å›P) mm/kN                   */
  float        f_ahw_set[5]   ; /* (Å›Cm/Å›Chw) mm/mm                 */
  float        f_a_set[5]     ; /* constant                           */
  float        f_zeta_set[5]  ; /* Printed ratio                      */
  float        f_xi_set[5]    ; /* Shape change ratio                 */
  float        f_gamma_fbc[5] ; /* (Å›B/Å›MCr) (kN/chock)/mm          */
  float        f_beta_fbc[5]  ;
                        /* (Å›B/Å›P) ={(Å›B/Å›Cr)(Å›Cr/Å›P)} (kN/choc */
  float        f_kappa_fbc[5] ; /* (Å›B/Å›hw) (kN/chock)/mm           */
  float        f_kp_gain[5]   ; /* Feedback gain                      */
  float        f_fb2_gain[5]  ; /* Gain for Force comp. at top end    */
  float        f_fb3_gain[5]  ; /* Gain for Force comp. at Middle     */
  float        f_fb4_gain[5]  ;
                        /* Gain for Thermal crown comp. control       */
  float        f_rf_msu[5]    ;
                        /* Rolling force used in the setup calculatio */
  float        f_wr_thcr_set[5]
                              ;
                        /* Thermal crown used in the setup calculatio */
  float        strip_thick[4] ;
                        /* 0:F1 1:F2 2:F3 3:F4 delivery (used in the  */
  float        f_slip4        ; /* F4 forward slip                    */
  int          i_flg_crown_p  ; /* 0:C40 1:Cex                        */
  float        f_c_material   ; //cm add(2014.9.26)
  float        f_c_width      ; //cm add(2014.9.26)
  float        f_c_thick      ; //cm add(2014.9.26)
  float        f_wrb_dyn1     ; //cm add(2014.9.26)
  float        f_wrb_dyn2     ; //cm add(2014.9.26)
  float        f_wrb_dyn3     ; //cm add(2014.9.26)
  float        f_wrb_dyn4     ; //cm add(2014.9.26)

  float        fp1[5]         ; /*                                    */
} COMSET_s ;
