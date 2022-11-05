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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0xbecec813, "of_irq_get_byname" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x851372a5, "devm_rtc_nvmem_register" },
	{ 0x32d93cd2, "rtc_add_group" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0x5b0600d, "sysfs_notify" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x7a2d3100, "i2c_smbus_read_i2c_block_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc074e4aa, "i2c_smbus_write_i2c_block_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "FA14C750637FEB891E9658C");
