#ifndef _H_INTERFACE_M05_
#define _H_INTERFACE_M05_

#ifdef __cplusplus
extern "C" {
#endif

__declspec( dllexport ) int WINAPI M05_access_flash(DWORD type,PDWORD data);
__declspec( dllexport ) int WINAPI M05_arc_center(int ch1,int ch2,long cenx,long ceny,double angle);
__declspec( dllexport ) int WINAPI M05_arc_final(int ch1,int ch2,int dir,long fx,long fy,long r);

__declspec( dllexport ) int WINAPI M05_call_sub(int subid, double* param, int paramnum);
__declspec( dllexport ) int WINAPI M05_change_voltage(int v);
__declspec( dllexport ) int WINAPI M05_check_alarm(int ch);
__declspec( dllexport ) int WINAPI M05_check_batch_done();
__declspec( dllexport ) int WINAPI M05_check_buffer(int BufferType);
__declspec( dllexport ) int WINAPI M05_check_done(int ch);
__declspec( dllexport ) int WINAPI M05_check_ecp_num();
__declspec( dllexport ) int WINAPI M05_check_EncA(int ch);
__declspec( dllexport ) int WINAPI M05_check_EncB(int ch);
__declspec( dllexport ) int WINAPI M05_check_EncZ(int ch);
__declspec( dllexport ) int WINAPI M05_check_home(int ch);
__declspec( dllexport ) int WINAPI M05_check_limit(int ch);
__declspec( dllexport ) int WINAPI M05_check_SD(int ch);
__declspec( dllexport ) int WINAPI M05_check_status(int ch);
__declspec( dllexport ) unsigned int WINAPI M05_check_status32(int ch);
__declspec( dllexport ) int WINAPI M05_checkin_bit(int cardno,int bitno);
__declspec( dllexport ) int WINAPI M05_checkin_byte(int cardno);
__declspec( dllexport ) int WINAPI M05_close_file();
__declspec( dllexport ) int WINAPI M05_close_link(int ch);
__declspec( dllexport ) int WINAPI M05_compile_work_file(char* filename);
__declspec( dllexport ) int WINAPI M05_comm_read_data(DWORD dwDataLenBytes, PBYTE pchDataIn, PBYTE pchDataOut);
__declspec( dllexport ) int WINAPI M05_control_func(int FuncID);
__declspec( dllexport ) int WINAPI M05_con_hmove(int ch , int dir);
__declspec( dllexport ) int WINAPI M05_con_hmove2(int chx , int dirx , int chy , int diry);
__declspec( dllexport ) int WINAPI M05_con_hmove3(int chx , int dirx , int chy , int diry , int chz , int dirz);
__declspec( dllexport ) int WINAPI M05_con_line2(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_con_line3(int chx , long disx ,int chy , long disy ,int chz , long disz);
__declspec( dllexport ) int WINAPI M05_con_pmove(int ch,long step);
__declspec( dllexport ) int WINAPI M05_con_pmove2(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_con_pmove3(int chx , long disx ,int chy , long disy ,int chz , long disz);
__declspec( dllexport ) int WINAPI M05_con_vmove(int ch , int dir);
__declspec( dllexport ) int WINAPI M05_con_vmove2(int chx , int dirx , int chy , int diry);
__declspec( dllexport ) int WINAPI M05_con_vmove3(int chx , int dirx , int chy , int diry , int chz , int dirz);
__declspec( dllexport ) int WINAPI M05_create_file(PBYTE filename, DWORD filelenbytes);
__declspec( dllexport ) int WINAPI M05_c_change_voltage(int v);
__declspec( dllexport ) int WINAPI M05_c_curve_begin();
__declspec( dllexport ) int WINAPI M05_c_curve_end();
__declspec( dllexport ) int WINAPI M05_c_curve_vertex(int IsMove);
__declspec( dllexport ) int WINAPI M05_c_delay_time(int ms);
__declspec( dllexport ) int WINAPI M05_c_fast_line2(int chx,long disx,int chy,long disy);
__declspec( dllexport ) int WINAPI M05_c_move_start();
__declspec( dllexport ) int WINAPI M05_c_move_pause();
__declspec( dllexport ) int WINAPI M05_c_move_resume();
__declspec( dllexport ) int WINAPI M05_c_move_stop();
__declspec( dllexport ) int WINAPI M05_c_set_laser_mode(int mode);
__declspec( dllexport ) int WINAPI M05_c_set_blow_mode(int mode);/*Add on 21.09.2005*/
__declspec( dllexport ) int WINAPI M05_c_set_commonIO_3(int mode);/*Add on 25.02.2006*/
__declspec( dllexport ) int WINAPI M05_c_set_common_IO(int PortID,int mode);/*Add on 02.03.2006*/
__declspec( dllexport ) int WINAPI M05_c_set_max_accel(double ac);
__declspec( dllexport ) int WINAPI M05_c_set_move_profile(double ls, double hs, double ac);
__declspec( dllexport ) int WINAPI M05_c_set_power(int LowPower,int HighPower, double LowSpeed, double HighSpeed, int Mode);
__declspec( dllexport ) int WINAPI M05_c_set_vector_profile(double ls,double hs,double ac);

__declspec( dllexport ) int WINAPI M05_decel_stop(int ch);
__declspec( dllexport ) int WINAPI M05_decel_stop2(int ch1,int ch2);
__declspec( dllexport ) int WINAPI M05_decel_stop3(int ch1,int ch2,int ch3);
__declspec( dllexport ) int WINAPI M05_delay_time(int ms);
__declspec( dllexport ) int WINAPI M05_del_file(int FileID);
__declspec( dllexport ) int WINAPI M05_del_all_file();
__declspec( dllexport ) int WINAPI M05_download_work_file(char* filename);

__declspec( dllexport ) int WINAPI M05_fast_arc_center(int ch1,int ch2,long cenx,long ceny,double angle);
__declspec( dllexport ) int WINAPI M05_fast_hmove(int ch , int dir);
__declspec( dllexport ) int WINAPI M05_fast_hmove2(int chx , int dirx , int chy , int diry);
__declspec( dllexport ) int WINAPI M05_fast_hmove3(int chx , int dirx , int chy , int diry , int chz , int dirz);
__declspec( dllexport ) int WINAPI M05_fast_line2(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_fast_line2_to(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_fast_pmove(int ch,long step);
__declspec( dllexport ) int WINAPI M05_fast_pmove2(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_fast_pmove3(int chx , long disx ,int chy , long disy ,int chz , long disz);
__declspec( dllexport ) int WINAPI M05_fast_vmove(int ch , int dir);
__declspec( dllexport ) int WINAPI M05_fast_vmove2(int chx , int dirx , int chy , int diry);
__declspec( dllexport ) int WINAPI M05_fast_vmove3(int chx , int dirx , int chy , int diry , int chz , int dirz);

__declspec( dllexport ) int WINAPI M05_get_abs_pos(int ch,long *pos);
__declspec( dllexport ) int WINAPI M05_get_board_info(int* info);
__declspec( dllexport ) DWORD  WINAPI M05_get_board_ver();
__declspec( dllexport ) int WINAPI M05_get_cmd_counter();
__declspec( dllexport ) int  WINAPI M05_get_debug_info(LPCTSTR info);
__declspec( dllexport ) int WINAPI M05_get_dll_info(double* info);
__declspec( dllexport ) int WINAPI M05_get_encoder(int ch,long *enc);
__declspec( dllexport ) DWORD WINAPI M05_get_err(int index);
__declspec( dllexport ) int WINAPI M05_get_file_num(int* CurFileID, int* FileNum);
__declspec( dllexport ) DWORD  WINAPI M05_get_hdw_ver();
__declspec( dllexport ) DWORD WINAPI M05_get_last_err();
__declspec( dllexport ) DWORD  WINAPI M05_get_lib_ver();
__declspec( dllexport ) int WINAPI M05_get_rel_pos(int ch,long *pos);
__declspec( dllexport ) double WINAPI M05_get_rate(int ch);
__declspec( dllexport ) int  WINAPI M05_get_sn(unsigned char* sn);
__declspec( dllexport ) unsigned int WINAPI M05_get_status(int ch);

__declspec( dllexport ) int WINAPI M05_init_board();

__declspec( dllexport ) int WINAPI M05_main_begin();
__declspec( dllexport ) int WINAPI M05_main_end();
__declspec( dllexport ) int WINAPI M05_mi_checkin_bit(int bitno);
__declspec( dllexport ) int WINAPI M05_mi_checkin_byte();
__declspec( dllexport ) int WINAPI M05_move_pause();
__declspec( dllexport ) int WINAPI M05_move_resume();
__declspec( dllexport ) int WINAPI M05_m_move_pause();
__declspec( dllexport ) int WINAPI M05_m_move_resume();
__declspec( dllexport ) int WINAPI M05_m_move_stop();
__declspec( dllexport ) int WINAPI M05_m_move_start();
__declspec( dllexport ) int WINAPI M05_m_fast_line2(int chx,long disx,int chy,long disy);
__declspec( dllexport ) int WINAPI M05_m_set_vector_profile(double ls,double hs,double ac);
__declspec( dllexport ) int WINAPI M05_m_set_vector_profile2(double start_ls, double hs, double end_ls, double ac, double dc);
__declspec( dllexport ) int WINAPI M05_m_curve_vertex();
__declspec( dllexport ) int WINAPI M05_m_curve_begin();
__declspec( dllexport ) int WINAPI M05_m_curve_end();
__declspec( dllexport ) int WINAPI M05_m_set_period(double period);
__declspec( dllexport ) int WINAPI M05_m_set_power(int LowPower,int HighPower);
__declspec( dllexport ) int WINAPI M05_m_set_laser_mode(int mode);
__declspec( dllexport ) int WINAPI M05_m_set_blow_mode(int mode);/*Add on 21.09.2005*/
__declspec( dllexport ) int WINAPI M05_m_set_commonIO_3(int mode);/*Add on 25.02.2006*/
__declspec( dllexport ) int WINAPI M05_m_set_common_IO(int PortID,int mode);/*Add on 02.03.2006*/
__declspec( dllexport ) int WINAPI M05_m_delay_time(int ms);
__declspec( dllexport ) int WINAPI M05_m_change_voltage(int v);
__declspec( dllexport ) int WINAPI M05_mc_set_vector_conspeed(double conspeed);
__declspec( dllexport ) int WINAPI M05_mc_con_line2(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_mc_delay_time(int ms);
__declspec( dllexport ) int WINAPI M05_mc_change_voltage(int v);
__declspec( dllexport ) int WINAPI M05_mc_set_laser_mode(int mode);
__declspec( dllexport ) int WINAPI M05_mc_set_blow_mode(int mode);/*Add on 21.09.2005*/
__declspec( dllexport ) int WINAPI M05_mc_set_commonIO_3(int mode);/*Add on 25.02.2006*/
__declspec( dllexport ) int WINAPI M05_mc_set_common_IO(int mode);/*Add on 02.03.2006*/
__declspec( dllexport ) int WINAPI M05_mc_set_vector_profile(double vl , double vh , double ad);
__declspec( dllexport ) int WINAPI M05_mc_fast_line2(int chx , long disx ,int chy , long disy);
__declspec( dllexport ) int WINAPI M05_mc_begin_cut();
__declspec( dllexport ) int WINAPI M05_mc_end_cut();

__declspec( dllexport ) int WINAPI M05_on_comm(int ch);
__declspec( dllexport ) int WINAPI M05_outport_bit(int cardno,int bitno,int status);
__declspec( dllexport ) int WINAPI M05_outport_byte(int cardno,int byte);
__declspec( dllexport ) int WINAPI M05_outport_data(DWORD Addr,DWORD Data);
__declspec( dllexport ) int WINAPI M05_open_file(BYTE fileID, PDWORD filelen, PBYTE filename);
__declspec( dllexport ) int WINAPI M05_open_link(int ch, int rate);

__declspec( dllexport ) DWORD WINAPI M05_read_data(DWORD addr);
__declspec( dllexport ) int WINAPI M05_reset_cmd_counter();
__declspec( dllexport ) int WINAPI M05_reset_err();
__declspec( dllexport ) int WINAPI M05_reset_pos(int ch);

__declspec( dllexport ) int WINAPI M05_end_backlash(int ch);

__declspec( dllexport ) int WINAPI M05_send_cmd(DWORD dwDataLenDword, PDWORD pdwData);
__declspec( dllexport ) int WINAPI M05_send_data(DWORD dwDataLenBytes, PBYTE pchData);
__declspec( dllexport ) int WINAPI M05_set_abs_pos(int ch,long pos);
__declspec( dllexport ) int WINAPI M05_set_backlash(int ch,int blash);
__declspec( dllexport ) int WINAPI M05_set_batch_flag(int flag);
__declspec( dllexport ) int WINAPI M05_set_cmd_counter(int type,int counter);
__declspec( dllexport ) int WINAPI M05_set_comm(LPVOID pcMSComm);
__declspec( dllexport ) int WINAPI M05_set_conspeed(int ch , double conspeed);
__declspec( dllexport ) int WINAPI M05_set_ellipse_ratio(float ratio);
__declspec( dllexport ) int WINAPI M05_set_encoder_mode(int ch,int mode,int multip,int count_unit);
__declspec( dllexport ) int WINAPI M05_set_getpos_mode(int ch,int mode);
__declspec( dllexport ) int WINAPI M05_set_home_mode(int ch,int origin_mode);
__declspec( dllexport ) int WINAPI M05_set_laser_mode(int mode);
__declspec( dllexport ) int WINAPI M05_set_blow_mode(int mode);/*Add on 21.09.2005*/
__declspec( dllexport ) int WINAPI M05_set_commonIO_3(int mode);/*Add on 25.02.2006*/
__declspec( dllexport ) int WINAPI M05_set_common_IO(int PortID,int mode);/*Add on 02.03.2006*/
__declspec( dllexport ) int WINAPI M05_set_pulse_per_milimter(double pulseX,double pulseY,double pulseZ);
__declspec( dllexport ) int WINAPI M05_set_level_in(int ch,int status);
__declspec( dllexport ) int WINAPI M05_set_level_sprt(int ch,int status);
__declspec( dllexport ) int WINAPI M05_set_maxspeed(int ch , double maxpeed);
__declspec( dllexport ) int WINAPI M05_set_outmode(int ch,int mode,int logic);
__declspec( dllexport ) int WINAPI M05_set_power_mode(int mode);
__declspec( dllexport ) int WINAPI M05_set_profile(int ch , double vl , double vh , double ad);
__declspec( dllexport ) int WINAPI M05_set_pwm_frq(double frq);
__declspec( dllexport ) int WINAPI M05_set_ramp_flag(int flag);
__declspec( dllexport ) int WINAPI M05_set_scan_backlash(int p);
__declspec( dllexport ) int WINAPI M05_set_scan_step(int step);
__declspec( dllexport ) int WINAPI M05_set_scan_startpos(int pos);
__declspec( dllexport ) int WINAPI M05_set_senddata_flag(int flag);
__declspec( dllexport ) int WINAPI M05_set_s_curve(int ch,int mode);
__declspec( dllexport ) int WINAPI M05_set_s_section(int ch,double rate1,double rate2);
__declspec( dllexport ) int WINAPI M05_set_signal_in(int ch,int status);
__declspec( dllexport ) int WINAPI M05_set_vector_conspeed(double conspeed);
__declspec( dllexport ) int WINAPI M05_set_vector_profile(double vl , double vh , double ad);
__declspec( dllexport ) int WINAPI M05_set_work_mode(int mode);
__declspec( dllexport ) int WINAPI M05_set_work_file(char* file);
__declspec( dllexport ) int WINAPI M05_set_xy_ratio(double r);
__declspec( dllexport ) void WINAPI M05_show_err(int flag);
__declspec( dllexport ) int WINAPI M05_start_backlash(int ch);
__declspec( dllexport ) int WINAPI M05_start_run();
__declspec( dllexport ) int WINAPI M05_stop_run();
__declspec( dllexport ) int WINAPI M05_sub_begin(int subid);
__declspec( dllexport ) int WINAPI M05_sub_end(int subid);
__declspec( dllexport ) int WINAPI M05_sudden_stop(int ch);
__declspec( dllexport ) int WINAPI M05_sudden_stop2(int ch1,int ch2);
__declspec( dllexport ) int WINAPI M05_sudden_stop3(int ch1,int ch2,int ch3);
__declspec( dllexport ) int WINAPI M05_system_test(int type,int* pdata);
__declspec( dllexport ) int WINAPI M05_sys_set(int id, double* param, int paramnum);
__declspec( dllexport ) int WINAPI M05_sysset_end();

__declspec( dllexport ) int WINAPI M05_trig_position(int ch,int destpos,int condition);

__declspec( dllexport ) int WINAPI M05_verify_ecp_num(unsigned char* pnum,int len); 

__declspec( dllexport ) int WINAPI M05_work_begin();
__declspec( dllexport ) int WINAPI M05_work_end();
__declspec( dllexport ) int WINAPI M05_write_data(DWORD Addr,DWORD Data);
__declspec( dllexport ) int WINAPI M05_write_data_block(DWORD DataLen,PDWORD Data);
__declspec( dllexport ) int WINAPI M05_write_ecp_num(unsigned char* pnum,int len); 
__declspec( dllexport ) int WINAPI M05_write_file(DWORD dwDataLenBytes, PBYTE pchFileData);
__declspec( dllexport ) int WINAPI M05_write_power_data(DWORD DataLen,PUCHAR Data);
__declspec( dllexport ) int WINAPI M05_write_power_tab(int TabType,DWORD DataLen,PDWORD Data);

#ifdef __cplusplus
}
#endif

#endif
