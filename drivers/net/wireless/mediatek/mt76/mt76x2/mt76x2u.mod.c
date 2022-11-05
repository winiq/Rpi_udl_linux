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
	{ 0x37e4a40d, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xa993ebbb, "mt76x02_phy_set_txdac" },
	{ 0x9742b344, "mt76x2_phy_set_txpower" },
	{ 0x3eff1438, "mt76x2_phy_set_txpower_regs" },
	{ 0xc6c51106, "mt76x2_read_rx_gain" },
	{ 0x947775cf, "__mt76_poll" },
	{ 0xb788ee66, "mt76x02_mac_wcid_setup" },
	{ 0xf1992f34, "mt76_sta_pre_rcu_remove" },
	{ 0xfcc550df, "mt76_sw_scan" },
	{ 0x62858f8, "mt76x02_mcu_function_select" },
	{ 0x160cc75b, "mt76x02_conf_tx" },
	{ 0x2b252f34, "mt76x02_mcu_calibrate" },
	{ 0xc60b0d04, "mt76x02_ampdu_action" },
	{ 0x145467a8, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58bab4e9, "mt76x02_add_interface" },
	{ 0x6fbcba39, "mt76u_vendor_request" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xd6963a, "mt76x02u_init_beacon_config" },
	{ 0xa3cb5164, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa76d7a52, "mt76u_alloc_queues" },
	{ 0x416a7d6c, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc47e5d03, "mt76x2_phy_update_channel_gain" },
	{ 0x1aebfe6c, "mt76x02_init_agc_gain" },
	{ 0xe06b5540, "mt76x02_bss_info_changed" },
	{ 0xfd29a26f, "mt76x02u_mac_start" },
	{ 0x3845dc0c, "mt76x02_mac_cc_reset" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0xd6e9a01b, "mt76x2_phy_tssi_compensate" },
	{ 0x642847a1, "mt76_sta_state" },
	{ 0x7674f58b, "mt76x2_mcu_init_gain" },
	{ 0xd2417d51, "mt76x02u_tx_prepare_skb" },
	{ 0x8b0f36f9, "mt76x02u_init_mcu" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x89cf3254, "mt76x02_init_debugfs" },
	{ 0x6e2c6012, "mt76_get_survey" },
	{ 0x98817ad1, "mt76u_init" },
	{ 0xacb853d7, "mt76x02u_mcu_fw_send_data" },
	{ 0x895f9504, "mt76x2_init_txpower" },
	{ 0x8b8c1d66, "mt76x2_mcu_load_cr" },
	{ 0xb5bc6448, "mt76x02_sta_add" },
	{ 0xb5329965, "mt76x02_tx_status_data" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x7f80dbc4, "mt76x02_edcca_init" },
	{ 0x9ffc4035, "mt76x02_phy_set_rxpath" },
	{ 0x99255732, "mt76x02_sta_remove" },
	{ 0xfca9890, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x1bc30e9, "mt76x02_tx" },
	{ 0xa45158c3, "__mt76_poll_msec" },
	{ 0x8b1b7fa, "mt76x02_init_device" },
	{ 0xc3264236, "mt76_set_channel" },
	{ 0x2db5d87a, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x508b8ad7, "mt76x02_phy_set_bw" },
	{ 0x64d28966, "mt76x02_sw_scan_complete" },
	{ 0xcfcd780f, "mt76_set_tim" },
	{ 0x8983e0a5, "mt76_register_device" },
	{ 0x10ddfa6a, "mt76x02_mac_setaddr" },
	{ 0x3c2a08de, "mt76x02u_mcu_fw_reset" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0x94a3ae5, "mt76u_queues_deinit" },
	{ 0xbba60d5f, "mt76x02_queue_rx_skb" },
	{ 0x3a7270f7, "mt76_free_device" },
	{ 0x95b921c6, "mt76x02_configure_filter" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x343db96b, "mt76x2_configure_tx_delay" },
	{ 0x5a7ed734, "mt76x02_update_channel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x97e381b, "mt76x2_mac_stop" },
	{ 0x5f66698f, "mt76x02_ext_pa_enabled" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xc4453e90, "mt76x02_mac_shared_key_setup" },
	{ 0x87f1999d, "mt76_alloc_device" },
	{ 0x5c9da9c5, "mt76x02_sta_rate_tbl_update" },
	{ 0x814ed6e0, "mt76u_resume_rx" },
	{ 0x93764d1b, "mt76x02_sta_ps" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xede84c8, "mt76x2_apply_gain_adj" },
	{ 0xf7cdc43a, "mt76_get_antenna" },
	{ 0xcf3344b6, "mt76_wake_tx_queue" },
	{ 0x2e431dfb, "mt76x02_mcu_set_radio_state" },
	{ 0x8bf91d7d, "mt76x2_mcu_set_channel" },
	{ 0x8d35c7a2, "mt76x2_reset_wlan" },
	{ 0x93bcab53, "mt76_write_mac_initvals" },
	{ 0xffb70bf, "mt76_get_txpower" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x2cfeed68, "mt76_release_buffered_frames" },
	{ 0x97c2cfa5, "mt76x02_set_key" },
	{ 0xca7b78ef, "mt76x02_set_ethtool_fwver" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x83d6b3f7, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E8C6B7AE378D8943AE7F74");
