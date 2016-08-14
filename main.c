#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "inc/COMLEV2.h"
#include "inc/COMSET.h"
#include "inc/COMWRK.h"
#include "inc/MGPFILE.h"
#include "inc/COMDYC.h"


int main(int argc, char* argv[]){

	COMSET_s comset1;
	COMLEV2_s comlev2_1;
	COMWRK_s comwrk1;
	COMDYC_s comdyc1;

	FILE *file = fopen("E:\\apfcdyna.bin","rb");

	signed int ch;
	int timeValue;
	if(!feof(file)){

		//Part1
		printf("============ Part1:FET ON Dynamic Start =====================\n");
		fread(&ch, sizeof(time_t),1,file);
		printf("TimeStamp: %d\n",ch);
		timeValue = ch;
		TimeTransfer(timeValue);
		fread(&comset1, sizeof(COMSET_s),1,file);
		printf("s_cfc_mode: %d\n", comset1.s_cfc_mode);
		printf("s_lock_mode: %d\n", comset1.s_lock_mode);
		printf("s_wrbcomp_mode: %d\n", comset1.s_wrbcomp_mode);
		printf("s_rfcomp_mode: %d\n",comset1.s_rfcomp_mode);
		printf("s_thmcomp_mode: %d\n",comset1.s_thmcomp_mode);
		printf("f_crr_lim[0]: %f, f_crr_lim[1]: %f\n",comset1.f_crr_lim[0],comset1.f_crr_lim[1]);
		printf("f_dcrr_tlr[0]: %f, f_dcrr_tlr[1]: %f\n",comset1.f_dcrr_tlr[0],comset1.f_dcrr_tlr[1]);
		printf("f_flat_lim[0][0]: %f, f_flat_lim[0][1]: %f\n", comset1.f_flat_lim[0][0], comset1.f_flat_lim[0][1]);
		printf("f_flat_lim[1][0]: %f, f_flat_lim[1][1]: %f\n", comset1.f_flat_lim[1][0], comset1.f_flat_lim[1][1]);
		printf("f_flat_lim[2][0]: %f, f_flat_lim[2][1]: %f\n", comset1.f_flat_lim[2][0], comset1.f_flat_lim[2][1]);
		printf("f_flat_lim[3][0]: %f, f_flat_lim[3][1]: %f\n", comset1.f_flat_lim[3][0], comset1.f_flat_lim[3][1]);
		printf("f_flat_lim[4][0]: %f, f_flat_lim[4][1]: %f\n", comset1.f_flat_lim[4][0], comset1.f_flat_lim[4][1]);
		printf("f_t_crr_target: %f\n",comset1.f_t_crr_target);
		printf("f_lim_wrb_set[0][0]: %f, f_lim_wrb_set[0][1]: %f\n", comset1.f_lim_wrb_set[0][0],comset1.f_lim_wrb_set[0][1]);
		printf("f_lim_wrb_set[1][0]: %f, f_lim_wrb_set[1][1]: %f\n", comset1.f_lim_wrb_set[1][0],comset1.f_lim_wrb_set[1][1]);
		printf("f_lim_wrb_set[2][0]: %f, f_lim_wrb_set[2][1]: %f\n", comset1.f_lim_wrb_set[2][0],comset1.f_lim_wrb_set[2][1]);
		printf("f_lim_wrb_set[3][0]: %f, f_lim_wrb_set[3][1]: %f\n", comset1.f_lim_wrb_set[3][0],comset1.f_lim_wrb_set[3][1]);
		printf("f_lim_wrb_set[4][0]: %f, f_lim_wrb_set[4][1]: %f\n", comset1.f_lim_wrb_set[4][0],comset1.f_lim_wrb_set[4][1]);
		printf("f_wrb_set[5]: %f, %f, %f, %f, %f\n",comset1.f_wrb_set[0],comset1.f_wrb_set[1],comset1.f_wrb_set[2],comset1.f_wrb_set[3],comset1.f_wrb_set[4]);
		printf("f_afb_set[5]: %f, %f, %f, %f, %f\n",comset1.f_afb_set[0],comset1.f_afb_set[1],comset1.f_afb_set[2],comset1.f_afb_set[3],comset1.f_afb_set[4]);
		printf("f_ap_set[5]: %f, %f, %f, %f, %f\n",comset1.f_ap_set[0],comset1.f_ap_set[1],comset1.f_ap_set[2],comset1.f_ap_set[3],comset1.f_ap_set[4]);
		printf("f_ahw_set[5]: %f, %f, %f, %f, %f\n",comset1.f_ahw_set[0],comset1.f_ahw_set[1],comset1.f_ahw_set[2],comset1.f_ahw_set[3],comset1.f_ahw_set[4]);
		printf("f_a_set[5]: %f, %f, %f, %f, %f\n",comset1.f_a_set[0],comset1.f_a_set[1],comset1.f_a_set[2],comset1.f_a_set[3],comset1.f_a_set[4]);
		printf("f_zeta_set[5]: %f, %f, %f, %f, %f\n",comset1.f_zeta_set[0],comset1.f_zeta_set[1],comset1.f_zeta_set[2],comset1.f_zeta_set[3],comset1.f_zeta_set[4]);
		printf("f_xi_set[5]: %f, %f, %f, %f, %f\n",comset1.f_xi_set[0],comset1.f_xi_set[1],comset1.f_xi_set[2],comset1.f_xi_set[3],comset1.f_xi_set[4]);
		printf("f_gamma_fbc[5]: %f, %f, %f, %f, %f\n",comset1.f_gamma_fbc[0],comset1.f_gamma_fbc[1],comset1.f_gamma_fbc[2],comset1.f_gamma_fbc[3],comset1.f_gamma_fbc[4]);
		printf("f_beta_fbc[5]: %f, %f, %f, %f, %f\n",comset1.f_beta_fbc[0],comset1.f_beta_fbc[1],comset1.f_beta_fbc[2],comset1.f_beta_fbc[3],comset1.f_beta_fbc[4]);
		printf("f_kappa_fbc[5]: %f, %f, %f, %f, %f\n",comset1.f_kappa_fbc[0],comset1.f_kappa_fbc[1],comset1.f_kappa_fbc[2],comset1.f_kappa_fbc[3],comset1.f_kappa_fbc[4]);
		printf("f_kp_gain[5]: %f, %f, %f, %f, %f\n",comset1.f_kp_gain[0],comset1.f_kp_gain[1],comset1.f_kp_gain[2],comset1.f_kp_gain[3],comset1.f_kp_gain[4]);
		printf("f_fb2_gain[5]: %f, %f, %f, %f, %f\n",comset1.f_fb2_gain[0],comset1.f_fb2_gain[1],comset1.f_fb2_gain[2],comset1.f_fb2_gain[3],comset1.f_fb2_gain[4]);
		printf("f_fb3_gain[5]: %f, %f, %f, %f, %f\n",comset1.f_fb3_gain[0],comset1.f_fb3_gain[1],comset1.f_fb3_gain[2],comset1.f_fb3_gain[3],comset1.f_fb3_gain[4]);
		printf("f_fb4_gain[5]: %f, %f, %f, %f, %f\n",comset1.f_fb4_gain[0],comset1.f_fb4_gain[1],comset1.f_fb4_gain[2],comset1.f_fb4_gain[3],comset1.f_fb4_gain[4]);
		printf("f_rf_msu[5]: %f, %f, %f, %f, %f\n",comset1.f_rf_msu[0],comset1.f_rf_msu[1],comset1.f_rf_msu[2],comset1.f_rf_msu[3],comset1.f_rf_msu[4]);
		printf("f_wr_thcr_set[5]: %f, %f, %f, %f, %f\n",comset1.f_wr_thcr_set[0],comset1.f_wr_thcr_set[1],comset1.f_wr_thcr_set[2],comset1.f_wr_thcr_set[3],comset1.f_wr_thcr_set[4]);
		printf("strip_thick[5]: %f, %f, %f, %f\n",comset1.strip_thick[0],comset1.strip_thick[1],comset1.strip_thick[2],comset1.strip_thick[3]);
		printf("f_slip4: %f\n",comset1.f_slip4);
		printf("i_flg_crown_p: %d\n", comset1.i_flg_crown_p);
		printf("f_c_material: %f\n",comset1.f_c_material);
		printf("f_c_width: %f\n",comset1.f_c_width);
		printf("f_c_thick: %f\n",comset1.f_c_thick);
		printf("f_wrb_dyn1: %f\n",comset1.f_wrb_dyn1);
		printf("f_wrb_dyn2: %f\n",comset1.f_wrb_dyn2);
		printf("f_wrb_dyn3: %f\n",comset1.f_wrb_dyn3);
		printf("f_wrb_dyn4: %f\n",comset1.f_wrb_dyn4);
		printf("fp1[5]: %f, %f, %f, %f, %f\n",comset1.fp1[0],comset1.fp1[1],comset1.fp1[2],comset1.fp1[3],comset1.fp1[4]);
		printf("============ Part1:Finish Output =====================\n");

		ch = 0;
		timeValue = 0;
		printf("\n");
		printf("============ Part2:Every 500ms Output Start =====================\n");
		fread(&ch, sizeof(time_t),1,file);
		printf("TimeStamp: %d\n",ch);
		timeValue = ch;
		TimeTransfer(timeValue);
		printf("============ Part2A:COMLEV2 Start =====================\n");
		fread(&comlev2_1, sizeof(COMLEV2_s),1,file);
		printf("cr_act: %f\n",comlev2_1.cr_act);
		printf("thick_act: %f\n",comlev2_1.thick_act);
		printf("f4_speed: %f\n",comlev2_1.f4_speed);
		printf("p_act[4]: %f, %f, %f, %f\n",comlev2_1.p_act[0],comlev2_1.p_act[1],comlev2_1.p_act[2],comlev2_1.p_act[3]);
		printf("fb_act[4]: %f, %f, %f, %f\n",comlev2_1.fb_act[0],comlev2_1.fb_act[1],comlev2_1.fb_act[2],comlev2_1.fb_act[3]);
		printf("fb_ope[4]: %f, %f, %f, %f\n",comlev2_1.fb_ope[0],comlev2_1.fb_ope[1],comlev2_1.fb_ope[2],comlev2_1.fb_ope[3]);
		printf("f_len_top[5]: %d, %d, %d, %d, %d\n",comlev2_1.f_len_top[0],comlev2_1.f_len_top[1],comlev2_1.f_len_top[2],comlev2_1.f_len_top[3], comlev2_1.f_len_top[4]);
		printf("metal_in[5]: %d, %d, %d, %d, %d\n",comlev2_1.metal_in[0],comlev2_1.metal_in[1],comlev2_1.metal_in[2],comlev2_1.metal_in[3], comlev2_1.metal_in[4]);
		printf("crt_w_act[5]: %f, %f, %f, %f, %f\n",comlev2_1.crt_w_act[0],comlev2_1.crt_w_act[1],comlev2_1.crt_w_act[2],comlev2_1.crt_w_act[3], comlev2_1.crt_w_act[4]);
		printf("crown_c40: %f\n",comlev2_1.crown_c40);
		printf("crown_cex: %f\n",comlev2_1.crown_cex);
		//printf("fp1[8]: %f, %f, %f, %f, %f, %f, %f, %f\n",comlev2_1.fp1[0],comlev2_1.fp1[1],comlev2_1.fp1[2],comlev2_1.fp1[3],comlev2_1.fp1[4],comlev2_1.fp1[5],comlev2_1.fp1[6],comlev2_1.fp1[7]);
		printf("\n");
		printf("============ Part2B:COMWRK Start ======================\n");
		fread(&comwrk1, sizeof(COMWRK_s),1,file);
		printf("Status_flag: %d\n",comwrk1.Status_flag);
		printf("metal_in_counter[5]: %d, %d, %d, %d, %d\n",comwrk1.metal_in_counter[0], comwrk1.metal_in_counter[1],comwrk1.metal_in_counter[2],comwrk1.metal_in_counter[3], comwrk1.metal_in_counter[4]);
		printf("fb_ope_flag[4]: %d, %d, %d, %d\n",comwrk1.fb_ope_flag[0],comwrk1.fb_ope_flag[1],comwrk1.fb_ope_flag[2],comwrk1.fb_ope_flag[3]);
		printf("fb_ope_counter[4]: %d, %d, %d, %d\n",comwrk1.fb_ope_counter[0],comwrk1.fb_ope_counter[1],comwrk1.fb_ope_counter[2],comwrk1.fb_ope_counter[3]);
		printf("total_fb_ope_counter: %d\n",comwrk1.total_fb_ope_counter);
		printf("total_fb_sample: %d\n",comwrk1.total_fb_sample);
		printf("cr_fb_flag: %d\n",comwrk1.cr_fb_flag);
		printf("i_stand: %d\n",comwrk1.i_stand);
		printf("crr_act_target_flag: %d\n",comwrk1.crr_act_target_flag);
		printf("hw_act[4]: %f, %f, %f, %f\n",comwrk1.hw_act[0],comwrk1.hw_act[1],comwrk1.hw_act[2],comwrk1.hw_act[3]);
		printf("fb_ope_pre[4]: %f, %f, %f, %f\n",comwrk1.fb_ope_pre[0],comwrk1.fb_ope_pre[1],comwrk1.fb_ope_pre[2],comwrk1.fb_ope_pre[3]);
		printf("cm[4]: %f, %f, %f, %f\n",comwrk1.cm[0],comwrk1.cm[1],comwrk1.cm[2],comwrk1.cm[3]);
		printf("cr[4]: %f, %f, %f, %f\n",comwrk1.cr[0],comwrk1.cr[1],comwrk1.cr[2],comwrk1.cr[3]);
		printf("e[4]: %f, %f, %f, %f\n",comwrk1.e[0],comwrk1.e[1],comwrk1.e[2],comwrk1.e[3]);
		printf("ec[4]: %f, %f, %f, %f\n",comwrk1.ec[0],comwrk1.ec[1],comwrk1.ec[2],comwrk1.ec[3]);
		printf("eout[4]: %f, %f, %f, %f\n",comwrk1.eout[0],comwrk1.eout[1],comwrk1.eout[2],comwrk1.eout[3]);
		printf("delta_cm[4]: %f, %f, %f, %f\n",comwrk1.delta_cm[0],comwrk1.delta_cm[1],comwrk1.delta_cm[2],comwrk1.delta_cm[3]);
		printf("delta_cr[4]: %f, %f, %f, %f\n",comwrk1.delta_cr[0],comwrk1.delta_cr[1],comwrk1.delta_cr[2],comwrk1.delta_cr[3]);
		printf("fb1_mem[4]: %f, %f, %f, %f\n",comwrk1.fb1_mem[0],comwrk1.fb1_mem[1],comwrk1.fb1_mem[2],comwrk1.fb1_mem[3]);
		printf("strip_speed: %f\n",comwrk1.strip_speed);
		printf("trace_case: %d\n",comwrk1.trace_case);
		printf("\n");
		printf("============ Part2C:COMDYC Start =====================\n");
		fread(&comdyc1, sizeof(COMDYC_s),1,file);
		printf("cr_target_cont: %f\n",comdyc1.cr_target_cont);
		printf("cr_target_act: %f\n",comdyc1.cr_target_act);
		printf("cr_pre: %f\n",comdyc1.cr_pre);
		printf("cr_filter: %f\n",comdyc1.cr_filter);
		printf("delta_cr: %f\n",comdyc1.delta_cr);
		printf("delta_cr_pre: %f\n",comdyc1.delta_cr_pre);
		printf("delta_fb1[4]: %f, %f, %f, %f\n",comdyc1.delta_fb1[0],comdyc1.delta_fb1[1],comdyc1.delta_fb1[2],comdyc1.delta_fb1[3]);
		printf("delta_fb2[4]: %f, %f, %f, %f\n",comdyc1.delta_fb2[0],comdyc1.delta_fb2[1],comdyc1.delta_fb2[2],comdyc1.delta_fb2[3]);
		printf("delta_fb3[4]: %f, %f, %f, %f\n",comdyc1.delta_fb3[0],comdyc1.delta_fb3[1],comdyc1.delta_fb3[2],comdyc1.delta_fb3[3]);
		printf("delta_fb4[4]: %f, %f, %f, %f\n",comdyc1.delta_fb4[0],comdyc1.delta_fb4[1],comdyc1.delta_fb4[2],comdyc1.delta_fb4[3]);
		printf("delta_fb_pre[4]: %f, %f, %f, %f\n",comdyc1.delta_fb_pre[0],comdyc1.delta_fb_pre[1],comdyc1.delta_fb_pre[2],comdyc1.delta_fb_pre[3]);
		printf("fb_counter: %d\n",comdyc1.fb_counter);
		printf("fb_sample: %d\n",comdyc1.fb_sample);
		printf("fb_control_counter: %d\n",comdyc1.fb_control_counter);
		printf("cr_sample_period: %f\n",comdyc1.cr_sample_period);
		printf("============ Part2:Every 500ms Output End =====================\n");
		printf("\n");
		ch = 0;
		timeValue = 0;
		printf("============ Part3: End =====================\n");

	}
	fclose(file);
	return 0;
}

void TimeTransfer(int value){
	time_t epoch_time_as_time_t = value;
	struct tm *nPtr = localtime(&epoch_time_as_time_t);
	int year;
	int month;
	int mday;
	int whour;
	int wminute;
	int wsecond;

	year = nPtr->tm_year +1900;
	month = nPtr->tm_mon + 1;
	mday = nPtr->tm_mday;
	whour = nPtr->tm_hour;
	wminute = nPtr->tm_min;
	wsecond = nPtr->tm_sec;
	printf("LocalTime: %d-%d-%d %d:%d:%d\n",year,month,mday,whour,wminute,wsecond);

}
