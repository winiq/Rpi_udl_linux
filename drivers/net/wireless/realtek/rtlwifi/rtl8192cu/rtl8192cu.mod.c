#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x316940c1, "ieee80211_rx_napi" },
	{ 0xb3067a54, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe68766e2, "rtl_cam_get_free_entry" },
	{ 0xcbc49cde, "rtl92c_phy_set_rfpath_switch" },
	{ 0x5c95a5fc, "rtl_usb_disconnect" },
	{ 0x898b1176, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xcd10cea7, "rtl92c_phy_set_txpower_level" },
	{ 0x494bfa28, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x29bcae05, "rtl92c_dm_check_txpower_tracking" },
	{ 0xdcb66b35, "rtl_ps_disable_nic" },
	{ 0xa61ff89c, "rtl92c_dm_watchdog" },
	{ 0x637a5565, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0xd8c7776d, "_rtl92c_phy_rf_serial_write" },
	{ 0x848dbcf, "rtl_get_tcb_desc" },
	{ 0x2399ada6, "_rtl92c_phy_rf_serial_read" },
	{ 0x7fdbdb23, "rtl92c_phy_set_bw_mode" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb8309dab, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x77984202, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcaadb56a, "rtl_phy_scan_operation_backup" },
	{ 0x8321ebf0, "rtl92c_dm_init_edca_turbo" },
	{ 0xb6829d70, "rtl92c_phy_iq_calibrate" },
	{ 0x29794e19, "rtl92c_dm_init" },
	{ 0xc547670a, "rtl_usb_probe" },
	{ 0xaa0ec7a7, "rtl92c_phy_set_bb_reg" },
	{ 0x5ece30cb, "rtl_ps_enable_nic" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x42f6d01e, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x743f37c8, "rtl92c_dm_rf_saving" },
	{ 0xb2118422, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x707703fd, "dm_writepowerindex" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x904f8f7e, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x54642b45, "_rtl_dbg_print_data" },
	{ 0xa2bea3b3, "rtl_signal_scale_mapping" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x939d5ea9, "_rtl92c_phy_set_rf_sleep" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0xf11511a2, "rtlwifi_rate_mapping" },
	{ 0x6e75cea5, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x3371ea00, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5ea622d, "rtl_rfreg_delay" },
	{ 0xd40d9a57, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x4ea94e63, "rtl92c_phy_set_io_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0x7acc43bf, "_rtl_dbg_print" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf8e4d22d, "rtl_cam_mark_invalid" },
	{ 0xdebbeee6, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6e99a5, "rtl_cam_del_entry" },
	{ 0x4ca91f34, "rtl_cam_empty_entry" },
	{ 0x18e7b2b1, "rtl92ce_phy_set_rf_on" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x2fa882b9, "rtl92c_phy_query_bb_reg" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xdd46c1d8, "rtl_cam_reset_all_entry" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xad621409, "rtl_process_phyinfo" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xaf2bd8a, "dm_restorepowerindex" },
	{ 0x2c04bb66, "efuse_read_1byte" },
	{ 0xb2fe2953, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x388ac913, "rtl92c_fill_h2c_cmd" },
	{ 0x5479f422, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x1f7d348b, "param_ops_ullong" },
};

MODULE_INFO(depends, "mac80211,rtlwifi,rtl8192c-common,rtl_usb");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5CAF4BE844BD88E11C7CDB1");
