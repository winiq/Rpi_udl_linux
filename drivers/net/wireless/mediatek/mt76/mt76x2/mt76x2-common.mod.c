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
	{ 0x2901e3fe, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xc25cb42, "mt76x02_phy_set_txpower" },
	{ 0x2b252f34, "mt76x02_mcu_calibrate" },
	{ 0xd30b00b4, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x57347c69, "mt76x02_get_lna_gain" },
	{ 0x84c25533, "mt76_eeprom_override" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xc4e8a6e5, "mt76_mcu_send_and_get_msg" },
	{ 0xfca9890, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb0f77be6, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x6c8d5e76, "mt76x02_get_rx_gain" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa2827ad0, "mt76x02_get_efuse_data" },
	{ 0x5f66698f, "mt76x02_ext_pa_enabled" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa053d609, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x31413005, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "DD1A686EE6B2A07213D6CAC");
