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
	{ 0x947775cf, "__mt76_poll" },
	{ 0xf1992f34, "mt76_sta_pre_rcu_remove" },
	{ 0xfcc550df, "mt76_sw_scan" },
	{ 0x160cc75b, "mt76x02_conf_tx" },
	{ 0xc60b0d04, "mt76x02_ampdu_action" },
	{ 0x145467a8, "mt76u_stop_rx" },
	{ 0xf1234bc9, "mt76x02u_exit_beacon_config" },
	{ 0x58bab4e9, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6fbcba39, "mt76u_vendor_request" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xd6963a, "mt76x02u_init_beacon_config" },
	{ 0xa3cb5164, "mt76u_stop_tx" },
	{ 0xa76d7a52, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe06b5540, "mt76x02_bss_info_changed" },
	{ 0xfd29a26f, "mt76x02u_mac_start" },
	{ 0x28d652eb, "mt76x0_init_hardware" },
	{ 0x642847a1, "mt76_sta_state" },
	{ 0xd31ab154, "mt76x02_set_rts_threshold" },
	{ 0xd2417d51, "mt76x02u_tx_prepare_skb" },
	{ 0x8b0f36f9, "mt76x02u_init_mcu" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x6e2c6012, "mt76_get_survey" },
	{ 0x98817ad1, "mt76u_init" },
	{ 0xacb853d7, "mt76x02u_mcu_fw_send_data" },
	{ 0xcbababd7, "mt76x0_mac_stop" },
	{ 0xb5bc6448, "mt76x02_sta_add" },
	{ 0xb5329965, "mt76x02_tx_status_data" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x99255732, "mt76x02_sta_remove" },
	{ 0x1bc30e9, "mt76x02_tx" },
	{ 0xa45158c3, "__mt76_poll_msec" },
	{ 0x64d28966, "mt76x02_sw_scan_complete" },
	{ 0xcfcd780f, "mt76_set_tim" },
	{ 0xdc1c23a, "mt76x0_phy_calibrate" },
	{ 0x3c2a08de, "mt76x02u_mcu_fw_reset" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6d970f4d, "mt76x0_register_device" },
	{ 0x12e83c59, "mt76x0_config" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0x94a3ae5, "mt76u_queues_deinit" },
	{ 0xbba60d5f, "mt76x02_queue_rx_skb" },
	{ 0x1c391956, "mt76x0_chip_onoff" },
	{ 0x3a7270f7, "mt76_free_device" },
	{ 0x95b921c6, "mt76x02_configure_filter" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x5a7ed734, "mt76x02_update_channel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x87f1999d, "mt76_alloc_device" },
	{ 0x5c9da9c5, "mt76x02_sta_rate_tbl_update" },
	{ 0x814ed6e0, "mt76u_resume_rx" },
	{ 0x93764d1b, "mt76x02_sta_ps" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7cdc43a, "mt76_get_antenna" },
	{ 0xcf3344b6, "mt76_wake_tx_queue" },
	{ 0xffb70bf, "mt76_get_txpower" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x2cfeed68, "mt76_release_buffered_frames" },
	{ 0x97c2cfa5, "mt76x02_set_key" },
	{ 0x31e0b1f1, "firmware_request_nowarn" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x83d6b3f7, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "ABC4A8DB7AAAF6A4150EBC9");
