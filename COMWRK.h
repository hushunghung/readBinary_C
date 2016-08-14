/*--------------------------------------------------------------------*/
/* FILE NAME : Middle Calculation Result Data                         */
/* SYMBOL    : COMWRK                                                 */
/* SIZE      :      320 BYTES                                         */
/*--------------------------------------------------------------------*/
typedef struct {
  int          Status_flag    ; /*                                    */
  int          metal_in_counter[5]
                              ;
                        /* Sampling number from meral_in meral_in     */
  int          fb_ope_flag[4] ; /*                                    */
  int          fb_ope_counter[4]
                              ;
                        /* Sampling number from ope intervension      */
  int          total_fb_ope_counter
                              ;
                        /* Sampling number from ope intervension for  */
  int          total_fb_sample;
                        /* Necessary sampling number from ope interve */
  int          cr_fb_flag     ; /*                                    */
  int          i_stand        ; /* Ope intervention stand             */
  int          crr_act_target_flag
                              ; /*                                    */
  float        hw_act[4]      ; /* Thermal crown act                  */
  float        fb_ope_pre[4]  ; /* Bender ope value                   */
  float        cm[4]          ; /*                                    */
  float        cr[4]          ; /*                                    */
  float        e[4]           ; /*                                    */
  float        ec[4]          ; /*                                    */
  float        eout[4]        ; /*                                    */
  float        delta_cm[4]    ; /*                                    */
  float        delta_cr[4]    ; /*                                    */
  float        fb1_mem[4]     ; /*                                    */
  float        strip_speed    ; /*                                    */
  int          trace_case     ; /*                                    */
  float        fp1[19]        ; /* spare                              */
} COMWRK_s ;
