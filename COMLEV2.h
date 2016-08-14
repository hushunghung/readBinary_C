/*--------------------------------------------------------------------*/
/* FILE NAME : L2 Receive Data                                        */
/* SYMBOL    : COMLEV2                                                */
/* SIZE      :      160 BYTES                                         */
/*--------------------------------------------------------------------*/
typedef struct {
  float        cr_act         ; /*  detected crown act (É m)          */
  float        thick_act      ;
                        /* detected F4 del. thickness act (É m)       */
  float        f4_speed       ; /* F4 roll speed act (mpm)            */
  float        p_act[4]       ; /* rolling force act (KN)             */
  float        fb_act[4]      ; /* bender act (KN/chock)              */
  float        fb_ope[4]      ; /* bender operation (KN/chock)        */
  int          f_len_top[5]   ; /* Mill delivery length act(mm)       */
  int          metal_in[5]    ; /*                                    */
  float        crt_w_act[5]   ; /*                                    */
  float        crown_c40      ; /* c40_crown_act                      */
  float        crown_cex      ; /* cex_crown_act                      */
  float        fp1[8]        ; /* spare                              */
} COMLEV2_s ;
