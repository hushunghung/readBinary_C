/*--------------------------------------------------------------------*/
/* FILE NAME : Dynamic Control Data                                   */
/* SYMBOL    : COMDYC                                                 */
/* SIZE      :      160 BYTES                                         */
/*--------------------------------------------------------------------*/
typedef struct {
  float        cr_target_cont ; /* Cr_target for control              */
  float        cr_target_act  ; /* Cr_target based on act value       */
  float        cr_pre         ; /* Cr actÅipre                        */
  float        cr_filter      ; /* Cr actÅiAfter 1st order delay      */
  float        delta_cr       ; /* Delta C                            */
  float        delta_cr_pre   ; /* Delta CrÅipre                      */
  float        delta_fb1[4]   ; /* Cr FB control 8                    */
  float        delta_fb2[4]   ; /*  Rollong force comp.1 8            */
  float        delta_fb3[4]   ; /*  Rollong force comp.2 8            */
  float        delta_fb4[4]   ; /* Thermal crown comp. 8              */
  float        delta_fb_pre[4]; /*  Previous value 8                  */
  int          fb_counter     ; /* control count                      */
  int          fb_sample      ; /* control cycle                      */
  int          fb_control_counter
                              ; /* FB control count                   */
  float        cr_sample_period
                              ; /* constant data when Cr detect       */
  float        fp1[10]        ; /* spare 20                           */
} COMDYC_s ;
