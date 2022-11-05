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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x2901e3fe, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xa993ebbb, "mt76x02_phy_set_txdac" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x947775cf, "__mt76_poll" },
	{ 0xb788ee66, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xc25cb42, "mt76x02_phy_set_txpower" },
	{ 0x62858f8, "mt76x02_mcu_function_select" },
	{ 0x2b252f34, "mt76x02_mcu_calibrate" },
	{ 0xd30b00b4, "mt76x02_eeprom_copy" },
	{ 0xa902369a, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xec623fc8, "mt76x02_dfs_init_params" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x416a7d6c, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1aebfe6c, "mt76x02_init_agc_gain" },
	{ 0x3845dc0c, "mt76x02_mac_cc_reset" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x89cf3254, "mt76x02_init_debugfs" },
	{ 0x57347c69, "mt76x02_get_lna_gain" },
	{ 0x84c25533, "mt76_eeprom_override" },
	{ 0x7f80dbc4, "mt76x02_edcca_init" },
	{ 0x9ffc4035, "mt76x02_phy_set_rxpath" },
	{ 0xfca9890, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0xa45158c3, "__mt76_poll_msec" },
	{ 0x8b1b7fa, "mt76x02_init_device" },
	{ 0xc3264236, "mt76_set_channel" },
	{ 0x2db5d87a, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x508b8ad7, "mt76x02_phy_set_bw" },
	{ 0x8983e0a5, "mt76_register_device" },
	{ 0x10ddfa6a, "mt76x02_mac_setaddr" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb0f77be6, "mt76_eeprom_init" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x6c8d5e76, "mt76x02_get_rx_gain" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa2827ad0, "mt76x02_get_efuse_data" },
	{ 0x5f66698f, "mt76x02_ext_pa_enabled" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xc4453e90, "mt76x02_mac_shared_key_setup" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa053d609, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x31413005, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "9871C864F01821AD71E9FDF");
